#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef void (*Fn)(void*);
extern Pair data_ov007_021c2f40;
extern Pair data_ov007_021c2f48;
extern uint32_t data_ov007_021c2c14[];
extern uint32_t data_ov007_021c2d6c[];
extern void *func_0203bb94(uint32_t, int, int, int);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *);
extern void *func_0205681c(uint32_t);
extern void func_02056c9c(void *, int);
extern uint32_t func_0203c030(void *object);
void func_ov007_0219ce90(uint8_t *p) {
    uint8_t *o, *n, *r7;
    uint32_t *q;
    if (p[0x90] != 0) {
        *(Pair*)(p + 0x80) = data_ov007_021c2f40;
        return;
    }
    o = func_0203bb94(data_ov007_021c2c14[1], 1, 0, 0);
    (*(Fn**)o)[10](o);
    func_02056bc0(p + 0x48, o);
    r7 = func_02056aec(o);
    n = func_0205681c(0x94);
    if (n != 0) {
        uint32_t v = *(uint32_t*)(p + 0x8c);
        func_02056c9c(n, 0);
        *(uint32_t*)n = (uint32_t)data_ov007_021c2d6c;
        *(uint8_t**)(n + 0x80) = p + 0x90;
        *(uint32_t*)(n + 0x84) = v;
        *(uint32_t*)(n + 0x88) = 0x3c;
        *(uint32_t*)(n + 0x8c) = 0xf;
        n[0x90] = 1;
        n[0x91] = 0;
    }
    {
        void *t = (void*)func_0203c030((void*)0xf);
        uint8_t *l = p + 0x14;
        func_02056bc0(l, t);
        func_02056bc0(l, n);
        func_02056bc0(l, r7);
    }
    *(Pair*)(p + 0x80) = data_ov007_021c2f48;
}
