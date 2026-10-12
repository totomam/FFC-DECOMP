#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern int func_0201c044(uint32_t a, uint16_t b);
extern void func_0201c034(uint32_t a, uint16_t b, int c);
extern void func_020424f4(void *a, uint16_t b);
extern void func_02042d98(void *a, uint16_t b);
extern void func_0204276c(void *a, uint16_t b);
extern void func_020424e8(void *a);

typedef struct {
    uint8_t pad0[0xc];
    uint32_t w;
    uint8_t pad1[0x4];
    void *ptr;
    uint16_t id;
    uint8_t flag;
} S;

void func_ov003_02165d9c(S *a)
{
    if (a->flag) {
        if (!func_0201c044(data_020b93b8, a->id)) {
            func_0201c034(data_020b93b8, a->id, 1);
            func_020424f4(a->ptr, a->id);
            func_020424e8(a->ptr);
        }
    } else {
        if (func_0201c044(data_020b93b8, a->id)) {
            func_0201c034(data_020b93b8, a->id, 0);
            func_02042d98(a->ptr, a->id);
            func_0204276c(a->ptr, a->id);
            func_020424e8(a->ptr);
        }
    }
    a->w = (a->w & ~0xffu) | 2;
}
