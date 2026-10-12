#include "ffc/types.h"

typedef struct {
    void (*cb0)(uint32_t, uint32_t);
    uint32_t f4;
    uint32_t f8;
    uint8_t pad[0x1e - 0x0c];
    uint16_t h1e;
    uint32_t f20;
} GameState;

typedef struct {
    uint16_t h0;
    uint8_t pad[0xc - 2];
    void (*cb)(uint32_t, uint32_t);
} FlagState;

extern GameState data_021414f4;
extern FlagState data_02141510;
extern uint32_t func_020889dc(void);
extern uintptr_t func_020870bc(void);
extern uint32_t func_02087344(uint32_t);
extern void func_02087390(uint32_t);

void func_02086c78(void)
{
    FlagState *f;
    uint16_t h;
    uint32_t a, b;

    if (data_021414f4.f4 != 0) {
        return;
    }
    h = data_021414f4.h1e;
    f = &data_02141510;
    if (h != 0 || func_020889dc() == 0x12) {
        f->h0 = 1;
        return;
    }
    a = *(uint32_t *)data_021414f4.f8;
    b = func_020870bc();
    if (a == b || b == 0) {
        return;
    }
    if (*(uint32_t *)(a + 0x64) != 2) {
        if (func_02087344(a) != 0) {
            return;
        }
    }
    if (data_021414f4.cb0 != 0) {
        data_021414f4.cb0(a, b);
    }
    if (f->cb != 0) {
        f->cb(a, b);
    }
    data_021414f4.f20 = b;
    func_02087390(b);
}
