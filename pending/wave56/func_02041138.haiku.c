#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_02056aec(void);
extern uint8_t *func_0205681c(uint32_t size);
extern void func_02056c9c(uint8_t *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020af340;
extern uint32_t data_020af210[];
extern Pair data_020af348;

void func_02041138(uint8_t *p) {
    uint8_t *r4;
    uint32_t r6;
    uint32_t off;

    off = 0x1c0;
    if (*(uint32_t *)(p + off) != 0) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        *(uint32_t *)(p + 0xc) = v | 2;
        return;
    }
    off -= 0x20;
    if (*(uint32_t *)(p + off) == 0) {
        *(Pair *)(p + 0x80) = data_020af340;
        return;
    }
    if (*(uint32_t *)(p + off) == 3) {
        void *r7 = func_02056aec();
        r4 = func_0205681c(0x88);
        if (r4 != 0) {
            r6 = *(uint32_t *)(p + 0x88);
            func_02056c9c(r4, 0);
            *(uint32_t *)r4 = (uint32_t)data_020af210;
            *(uint32_t *)(r4 + 0x80) = r6;
            *(uint32_t *)(r4 + 0x84) = 0;
        }
        func_02056bc0(p + 0x14, r4);
        func_02056bc0(p + 0x14, r7);
        return;
    }
    {
        uint32_t r7v = 0;
        r4 = func_0205681c(0x88);
        if (r4 != 0) {
            r6 = *(uint32_t *)(p + 0x88);
            func_02056c9c(r4, 0);
            *(uint32_t *)r4 = (uint32_t)data_020af210;
            *(uint32_t *)(r4 + 0x80) = r6;
            *(uint32_t *)(r4 + 0x84) = r7v;
        }
        func_02056bc0(p + 0x14, r4);
        *(Pair *)(p + 0x80) = data_020af348;
    }
}
