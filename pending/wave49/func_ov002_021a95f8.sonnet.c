#include "ffc/types.h"

extern void *data_020b8e44;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov002_021d5274;
extern Pair data_ov002_021d527c;
extern uint32_t data_0209df60;

extern void *func_02015c98(void *unused, uint32_t index);
extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021aaa88(void *object);
extern int32_t func_02017aa4(void *a, uint32_t b, uint32_t c, int32_t d);
extern int32_t func_ov002_021a16fc(uint32_t obj);
extern uint32_t func_ov002_021c85d8(void *obj, uint32_t v);
extern uint32_t func_ov002_021c92c0(uint32_t a, uint32_t b);
extern uint32_t func_02055a2c(void *a, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_ov002_021c91b4(uint32_t a);
extern uint32_t func_ov002_0219acac(void *a, uint32_t b);
extern uint32_t func_ov002_021a9804(uint32_t a, Pair b, int32_t d);
extern uint32_t func_ov002_021a3a10(void *a);
extern uint32_t func_02021610(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t a);
extern uint32_t func_ov002_021a1398(void *a, uint32_t b, uint32_t c);
extern uint32_t func_ov002_0219ffe8(uint32_t a);
extern uint32_t func_ov002_021c9204(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0203b708(uint32_t a);
extern uint32_t func_0203b720(void);
extern uint32_t func_ov002_0219ff70(void *a);

void func_ov002_021a95f8(uint8_t *a, void *b, uint32_t c, uint32_t d)
{
    uint8_t *p;
    uint8_t *q;
    uint32_t r6;
    uint32_t r1;
    uint32_t v;
    uint32_t t;
    int32_t r4;
    int32_t r7;
    int32_t sp0;
    void *m;

    p = (uint8_t *)func_02015c98(data_020b8e44, c);
    r1 = *(uint32_t *)(p + 0x14);
    q = 0;
    if (r1 != 0) {
        q = p + r1;
    }
    r6 = func_ov002_021aa850(d);
    r1 = func_ov002_021aaa88(b);
    r4 = func_02017aa4(data_020b8e44, r1, q[2], *(int16_t *)(q + 4));
    v = (uint32_t)func_ov002_021a16fc(r6);
    if (v == 0) {
        return;
    }
    r4 = (int32_t)v - r4;
    if (r4 <= 0) {
        r4 = 0;
    }
    if (v == (uint32_t)r4) {
        return;
    }
    r7 = (int32_t)v - r4;
    if ((uint32_t)a == r6) {
        sp0 = r4;
    } else {
        sp0 = func_ov002_021a16fc((uint32_t)a);
    }

    t = func_ov002_021c85d8(a + 0x144, 0);
    if (t != 0) {
        r1 = 0x1174;
    } else {
        r1 = 0x1175;
    }
    r1 = func_ov002_021c92c0(0, r1);
    r1 = func_02055a2c(*(void **)(a + 0xf0), r1);
    func_02056bc0(a + 0x14, r1);
    r1 = func_ov002_021c91b4(0);
    r1 = func_ov002_0219acac(*(void **)(a + 0xf0), r1);
    func_02056bc0(a + 0x14, r1);
    {
        r1 = func_ov002_021a9804(r6, data_ov002_021d5274, r4);
    }
    func_02056bc0(a + 0x14, r1);

    if (func_ov002_021a3a10(a) != 1) {
        r1 = func_02021610(0x427, 0);
        func_02056bc0(a + 0x14, r1);
    }
    m = func_0205681c(0x1c);
    r1 = (uint32_t)m;
    if (m != 0) {
        r1 = func_ov002_021a1398(m, r6, 0);
    }
    func_02056bc0(a + 0x14, r1);
    {
        uint32_t fl = func_ov002_0219ffe8(r6);
        r1 = 0;
        if (fl != 0) {
            r1 = 1;
        }
    }
    r1 = func_ov002_021c9204(0, r1, 1);
    r1 = func_02055a2c(*(void **)(a + 0xf0), r1);
    func_02056bc0(a + 0x14, r1);
    {
        r1 = func_ov002_021a9804((uint32_t)a, data_ov002_021d527c, sp0 + r7);
    }
    func_02056bc0(a + 0x14, r1);

    if (func_ov002_021a3a10(a) != 1) {
        r1 = func_0203b708(data_0209df60);
        func_02056bc0(a + 0x14, r1);
    }
    if (func_ov002_021a3a10(a) != 1) {
        r1 = func_02021610(0x429, 0);
        func_02056bc0(a + 0x14, r1);
    }
    m = func_0205681c(0x1c);
    r1 = (uint32_t)m;
    if (m != 0) {
        r1 = func_ov002_021a1398(m, (uint32_t)a, 0);
    }
    func_02056bc0(a + 0x14, r1);

    t = func_ov002_021c85d8(a + 0x144, 0);
    r4 = 0;
    if (t == 0) {
        r4 = 1;
    }
    r1 = func_ov002_021c9204(0, r4, 0);
    r1 = func_02055a2c(*(void **)(a + 0xf0), r1);
    func_02056bc0(a + 0x14, r1);
    r1 = func_0203b720();
    func_02056bc0(a + 0x14, r1);
    r1 = func_ov002_0219ff70(a);
    func_02056bc0(a + 0x14, r1);
}
