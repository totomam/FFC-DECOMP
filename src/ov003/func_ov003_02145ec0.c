#include "ffc/types.h"

extern uint8_t data_ov003_02179804[];
extern uint8_t data_ov003_02179824[];
extern void *data_0213df18;
extern void func_02056c4c(void *p);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bed8(int a, int b, int c, int d, uint32_t e, uint32_t f);
extern void func_0203bf28(int a, int b, int c, int d, uint32_t e, uint32_t f);
extern void func_0204f550(void *p);
extern void func_02056858(void *p);
extern void func_ov003_0214e2cc(void *p);
extern void func_02052d3c(void *p, uint32_t v);
extern void func_02052c04(void *p);
extern void *func_02053290(void *p);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);

void *func_ov003_02145ec0(uint8_t *s)
{
    uint8_t *o;

    *(void **)s = data_ov003_02179804;
    *(void **)(s + 0x80) = data_ov003_02179824;
    func_02056c4c(s + 0x48);

    if (s[0x3d0] == 0) {
        func_0203be8c();
        if (**(uint32_t **)(s + 0x214) == 0) {
            func_0203bea0();
        }
        func_0203bed8(5, 3, 4, 1, 0, 0);
        if (**(uint32_t **)(s + 0x214) == 0) {
            func_0203bf28(5, 2, 4, 1, 0, 0);
        }
        func_0204f550(data_0213df18);
    }

    if (*(void **)(s + 0x400) != 0) {
        func_02056858(*(void **)(s + 0x400));
        *(uint32_t *)(s + 0x400) = 0;
    }
    if (*(void **)(s + 0x404) != 0) {
        func_02056858(*(void **)(s + 0x404));
        *(uint32_t *)(s + 0x404) = 0;
    }

    func_ov003_0214e2cc(s + 0x3e0);
    func_ov003_0214e2cc(s + 0x3d4);

    o = s + 0x384;
    if (*(void **)(o + 4) != 0) {
        if (o[0xc] != 0) {
            func_02052d3c(*(void **)(o + 4), *(uint32_t *)(o + 8));
        }
        func_02052c04(*(void **)(o + 4));
    }
    func_02053290(o);

    o = s + 0x374;
    if (*(void **)(o + 4) != 0) {
        if (o[0xc] != 0) {
            func_02052d3c(*(void **)(o + 4), *(uint32_t *)(o + 8));
        }
        func_02052c04(*(void **)(o + 4));
    }
    func_02053290(o);

    o = s + 0x364;
    if (*(void **)(o + 4) != 0) {
        if (o[0xc] != 0) {
            func_02052d3c(*(void **)(o + 4), *(uint32_t *)(o + 8));
        }
        func_02052c04(*(void **)(o + 4));
    }
    func_02053290(o);

    o = s + 0x354;
    if (*(void **)(o + 4) != 0) {
        if (o[0xc] != 0) {
            func_02052d3c(*(void **)(o + 4), *(uint32_t *)(o + 8));
        }
        func_02052c04(*(void **)(o + 4));
    }
    func_02053290(o);

    o = s + 0x344;
    if (*(void **)(o + 4) != 0) {
        if (o[0xc] != 0) {
            func_02052d3c(*(void **)(o + 4), *(uint32_t *)(o + 8));
        }
        func_02052c04(*(void **)(o + 4));
    }
    func_02053290(o);

    func_02050c28(s + 0x8c);
    func_02056db0(s);
    return s;
}
