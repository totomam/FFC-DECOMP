#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern void func_02056c4c(void *arg);

void func_ov007_021aa92c(uint8_t *obj, int flag)
{
    uint8_t *p = *(uint8_t **)(obj + 0x94);
    if (p[0x148] == 0) {
        func_02021338(0xb9);
    }
    if (flag != 0) {
        void **q = *(void ***)(obj + 0x98);
        void **vt = (void **)*q;
        ((void (*)(void *, int, int))vt[0x38 / 4])(q, 2, 0);
        q = *(void ***)(obj + 0x98);
        vt = (void **)*q;
        ((void (*)(void *))vt[0x28 / 4])(q);
    } else {
        void **q = *(void ***)(obj + 0x98);
        void **vt = (void **)*q;
        ((void (*)(void *, int, int))vt[0x38 / 4])(q, 1, 0);
        q = *(void ***)(obj + 0x98);
        vt = (void **)*q;
        ((void (*)(void *))vt[0x2c / 4])(q);
        func_02056c4c(obj + 0x14);
    }
}
