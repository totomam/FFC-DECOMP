#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t n);
extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t *func_0202c548(uint32_t *a, void *b);
extern int func_0202e10c(void *a, void *b);
extern void func_0202b24c(void *a, void *b);
extern void func_02056b88(void *a);
extern uint8_t data_020adf00[];
extern uint8_t data_0209e320[];

int func_0203043c(uint8_t *p, uint32_t flags)
{
    uint32_t *o;
    int i;

    func_02084b2c(p + 0x459, 0, 0x20);
    if (flags & 4) {
        o = func_0205681c(0x1b8);
        if (o != 0) {
            o = func_0202c548(o, *(void **)(p + 0x98));
        }
        *(uint32_t **)(p + 0x8c) = o;
        o[6] = 1;
        o[7] = 0xffff;
        o = *(uint32_t **)(p + 0x8c);
        o[3] &= ~0xffu;
        for (i = 3; i < 6; i++) {
            if (p[0x3f8 + i] == 1) {
                if (func_0202e10c(p + 0xd8 + 0x32 * i, data_020adf00) == 0) {
                    o = *(uint32_t **)(p + 0x8c);
                    o[0x66] = 1;
                }
            }
        }
        func_0202b24c(*(void **)(p + 0x8c), data_0209e320);
        *(uint32_t **)(p + 0x90) = *(uint32_t **)(p + 0x8c);
        func_02056b88(p + 0x48);
        return 2;
    }
    return -2;
}
