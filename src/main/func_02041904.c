#include "ffc/types.h"

extern void *func_0205681c(uint32_t id);
extern void func_0203758c(void);
extern uint32_t func_ov009_021a0394(void *obj, uint8_t *b, uint8_t *c, int d, uint8_t e, uint8_t f);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_0203afd0(void *obj, uint8_t *b, uint8_t *c, uint32_t d, uint32_t e, uint8_t f);
extern void func_02037598(void);

void func_02041904(uint8_t *p)
{
    uint32_t st = *(uint32_t *)(p + 0x144);
    *(uint32_t *)(p + 0x144) = st + 1;
    switch (st) {
    case 0: {
        void *o;
        uint32_t res;
        if (!p[0x14c]) {
            func_0203758c();
        }
        o = func_0205681c(0x22c);
        res = (uint32_t)o;
        if (o) {
            res = func_ov009_021a0394(o, p + 0x80, p + 0xe0, 1, p[0x14c], p[0x14d]);
        }
        func_02056bc0(p + 0x14, res);
        break;
    }
    case 1: {
        void *o;
        uint32_t res;
        o = func_0205681c(0x1cc);
        res = (uint32_t)o;
        if (o) {
            res = func_0203afd0(o, p + 0x80, p + 0xe0, *(uint32_t *)(p + 0x140), 0, p[0x14d]);
        }
        *(uint32_t *)(p + 0x148) = res;
        func_02056bc0(p + 0x14, res);
        break;
    }
    case 2:
        if (!p[0x14c]) {
            func_02037598();
        }
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        break;
    }
}
