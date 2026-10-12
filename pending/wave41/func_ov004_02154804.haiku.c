#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020696f0(uint32_t value);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t id);
extern Pair data_ov004_02159cb0;
extern uint32_t data_ov004_021596c4[16];
extern Pair data_ov004_02159cb8;

void func_ov004_02154804(uint8_t *self) {
    uint8_t buf[0x44];
    uint32_t n;

    func_020696f0(*(uint32_t *)(self + 0xfc));
    if (*(uint32_t *)(self + 0x204) == 0) {
        *(Pair *)(self + 0x94) = data_ov004_02159cb0;
        return;
    }
    func_02091b10(buf, data_ov004_021596c4[15]);
    n = func_0203bb94(buf, 0, 1, 0);
    *(uint32_t *)(self + 0x20c) = n;
    func_02056bc0(self + 0x48, (void *)n);
    *(uint32_t *)(self + 0x208) = 0x3c;
    *(uint32_t *)(self + 0x204) -= 1;
    func_02021338(0x91);
    *(Pair *)(self + 0x94) = data_ov004_02159cb8;
}
