#include "ffc/types.h"

extern uint8_t data_020b2bb0[];
extern uint8_t data_020b2bfc[];
extern uint8_t data_020b2c48[];
extern uint8_t data_02144828[];
extern uint8_t data_02141510[];
extern uint8_t data_021447e0[];
extern uint8_t data_02144804[];

extern int32_t func_020876c0(void *p);
extern void func_0208763c(void *p);
extern int32_t func_0208ffc8(void *a, uint32_t b, uint32_t c);
extern void func_02087678(void *p);

int32_t func_020900cc(void *p0, uint32_t p1, uint32_t p2)
{
    uint32_t idx;
    uint32_t off;
    uint32_t soff;
    uint8_t *slot;
    int32_t r;

    idx = 4;
    if (p0 == data_020b2bb0) {
        idx = 2;
    } else if (p0 == data_020b2bfc) {
        idx = 3;
    } else if (p0 != data_020b2c48) {
        idx = 5;
    }

    soff = idx * 0x18;
    slot = data_02144828 + soff;
    off = idx << 2;

    if (func_020876c0(slot) == 0) {
        *(uint32_t *)(data_021447e0 + off) = *(uint32_t *)(*(uint8_t **)(data_02141510 + 4) + 0x6c);
        *(uint32_t *)(data_02144804 + off) = 1;
    } else {
        if (*(uint32_t *)(data_021447e0 + off) == *(uint32_t *)(*(uint8_t **)(data_02141510 + 4) + 0x6c)) {
            *(uint32_t *)(data_02144804 + off) += 1;
        } else {
            func_0208763c(slot);
            *(uint32_t *)(data_021447e0 + off) = *(uint32_t *)(*(uint8_t **)(data_02141510 + 4) + 0x6c);
            *(uint32_t *)(data_02144804 + off) = 1;
        }
    }

    r = func_0208ffc8(p0, p1, p2);
    *(uint32_t *)(data_02144804 + off) -= 1;
    if (*(uint32_t *)(data_02144804 + off) == 0) {
        func_02087678(slot);
    }
    return r;
}
