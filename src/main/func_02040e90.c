#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *node, uint32_t arg);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern uint32_t data_020af210[];
extern Pair data_020af318;
extern Pair data_020af320;
extern Pair data_020af328;
extern Pair data_020af330;

void func_02040e90(uint8_t *obj)
{
    uint32_t state;
    void *n;
    void *r7;
    uint32_t r6;

    if (*(uint32_t *)(obj + 0x1c0) != 0) {
        state = *(uint32_t *)(obj + 0xa0);
        if (state != 2 && state != 1 && state != 5) {
            uint32_t v = *(uint32_t *)(obj + 0xc);
            v &= ~0xffu;
            v |= 2;
            *(uint32_t *)(obj + 0xc) = v;
            return;
        }
    }

    state = *(uint32_t *)(obj + 0xa0);
    switch (state) {
    case 6:
        r7 = func_02056aec(obj);
        n = func_0205681c(0x88);
        if (n != 0) {
            r6 = *(uint32_t *)(obj + 0x88);
            func_02056c9c(n, 0);
            *(uint32_t **)n = data_020af210;
            *(uint32_t *)((uint8_t *)n + 0x80) = r6;
            *(uint32_t *)((uint8_t *)n + 0x84) = 0;
        }
        obj = (uint8_t *)((uint32_t)obj + 0x14u);
        func_02056bc0(obj, n);
        func_02056bc0(obj, r7);
        break;
    case 3:
        n = func_0205681c(0x88);
        if (n != 0) {
            r6 = *(uint32_t *)(obj + 0x88);
            func_02056c9c(n, 0);
            *(uint32_t **)n = data_020af210;
            *(uint32_t *)((uint8_t *)n + 0x80) = r6;
            *(uint32_t *)((uint8_t *)n + 0x84) = 0;
        }
        func_02056bc0(obj + 0x14, n);
        *(Pair *)(obj + 0x80) = data_020af318;
        break;
    case 4:
        *(Pair *)(obj + 0x80) = data_020af320;
        break;
    case 1:
    case 2:
        *(Pair *)(obj + 0x80) = data_020af328;
        break;
    case 5:
        *(Pair *)(obj + 0x80) = data_020af330;
        break;
    default:
        break;
    }
}
