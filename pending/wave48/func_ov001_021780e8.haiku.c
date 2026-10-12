#include "ffc/types.h"

extern int32_t func_ov001_0217c8f0(void *a, void *b, void *out);
extern void func_ov001_0217ef6c(void *a, void *data);
extern void func_ov001_02178324(void *a, void *p, void *data);
extern void func_ov001_02178340(void *a, void *p, uint32_t v);
extern void func_ov001_0217823c(void *a, void *b, int32_t v);
extern void func_ov000_021653f4(void *p);
extern void func_ov001_0217ca70(void *a, void *fn, uint32_t v);
extern void func_ov000_02168738(void *p);
extern uint8_t data_ov001_02190548[];
extern uint8_t data_ov001_02190588[];
extern uint8_t data_ov001_02190328[];
extern uint8_t data_ov001_02190594[];
extern uint8_t data_ov001_0219034c[];
extern void func_ov001_021780c0(void);

int32_t func_ov001_021780e8(void *a, void *b, uint32_t c)
{
    uint8_t *r4 = *(uint8_t **)a;
    uint32_t *out;
    uint32_t saved;
    uint8_t *p;

    if (func_ov001_0217c8f0(a, b, &out) == 0) {
        func_ov001_0217ef6c(a, data_ov001_02190548);
        return 2;
    }

    if (c == 1) {
        p = r4 + 0x210;
        func_ov001_02178324(a, p, data_ov001_02190588);
        func_ov001_02178324(a, p, data_ov001_02190328);
        func_ov001_02178340(a, p, *(uint32_t *)(r4 + 0x198));
        func_ov001_02178324(a, p, data_ov001_02190594);
        func_ov001_02178340(a, p, *(uint32_t *)out);
        func_ov001_02178324(a, p, data_ov001_0219034c);
    }

    func_ov001_0217823c(a, b, 1);

    if (((uint32_t *)out)[2] != 0) {
        saved = ((uint32_t *)((uint32_t *)out)[2])[0];
        func_ov000_021653f4((void *)((uint32_t *)((uint32_t *)out)[2])[2]);
        ((uint32_t *)((uint32_t *)out)[2])[2] = 0;
        func_ov000_021653f4((void *)((uint32_t *)((uint32_t *)out)[2])[3]);
        ((uint32_t *)((uint32_t *)out)[2])[3] = 0;
        func_ov000_021653f4((void *)out[2]);
        out[2] = 0;
        *(uint32_t *)(r4 + 0x5d0) = *(uint32_t *)(r4 + 0x5d0) - 1;
        func_ov001_0217ca70(a, (void *)func_ov001_021780c0, saved);
    }

    if (out[3] != 0) {
        saved = ((uint32_t *)out[3])[0];
        func_ov000_021653f4((void *)((uint32_t *)out[3])[2]);
        ((uint32_t *)out[3])[2] = 0;
        func_ov000_021653f4((void *)((uint32_t *)out[3])[3]);
        ((uint32_t *)out[3])[3] = 0;
        func_ov000_021653f4((void *)((uint32_t *)out[3])[4]);
        ((uint32_t *)out[3])[4] = 0;
        func_ov000_021653f4((void *)((uint32_t *)out[3])[5]);
        ((uint32_t *)out[3])[5] = 0;
        func_ov000_021653f4((void *)out[3]);
        out[3] = 0;
        if (((uint32_t *)out[3])[14] != 0) {
            func_ov000_02168738((void *)((uint32_t *)out[3])[14]);
            ((uint32_t *)out[3])[14] = 0;
        }
        *(uint32_t *)(r4 + 0x5d0) = *(uint32_t *)(r4 + 0x5d0) - 1;
        func_ov001_0217ca70(a, (void *)func_ov001_021780c0, saved);
    }

    return 0;
}
