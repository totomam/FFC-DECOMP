#include "ffc/types.h"

extern void func_ov002_021c9084(void *obj);
extern uint32_t func_ov002_021aa778(const void *object);
extern void func_ov002_021c9028(void *obj, uint32_t v);
extern void func_ov002_021a0fd4(void *a, void *b, uint32_t c, uint32_t d, void *obj);
extern uint32_t func_0203b688(void);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov002_021c8ff4(void *obj);
extern uint32_t func_ov002_021aacac(uint32_t node, uint32_t c, int32_t d);
extern void func_02056bc0(uint32_t object, uint32_t node);
extern uint32_t func_ov002_021aa820(const void *object);
extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a1838(uint32_t v);
extern uint32_t func_ov002_021c8ffc(void *obj);
extern uint32_t func_ov002_021ac8d8(const void *first, const void *second);
extern uint32_t func_ov002_021a16ec(void *a);
extern void func_ov002_021c8e38(void *out, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov002_021c8ff8(void *obj);
extern uint32_t func_ov002_021c9004(void *obj);
extern uint32_t func_ov002_021c9000(void *obj);
extern uint32_t func_ov002_021c9024(void *obj);
extern void func_ov002_021c8e70(void *out, void *a, uint32_t d, uint32_t e,
    uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4, uint32_t s5,
    uint32_t s6, uint32_t s7, uint32_t s8, uint32_t s9, uint32_t s10, uint32_t s11,
    uint32_t s12, uint32_t s13, uint32_t s14);
extern uint32_t func_ov002_021c939c(void *obj, void *a);
extern uint32_t func_02055a2c(uint32_t a, uint32_t b);
extern void func_ov002_021c8f10(void *obj);
extern void func_ov002_021c8e40(void *obj);
extern void func_ov002_021c906c(void *obj);

uint32_t func_ov002_021a0e58(uint8_t *p, uint8_t *q, uint32_t c, uint32_t d)
{
    uint8_t tmpC[92];
    uint8_t tmpB[56];
    uint8_t tmpA[12];
    volatile uint32_t e5c;
    volatile uint32_t e58;
    volatile uint32_t e54;
    volatile uint32_t x50;
    volatile uint32_t x4c;
    volatile uint32_t b4;
    volatile uint32_t ret;
    volatile uint32_t flag;
    uint32_t node;
    uint32_t f2;
    uint32_t a4;
    uint32_t r5v, r7v, r0v, res;

    func_ov002_021c9084(tmpB);
    func_ov002_021c9028(tmpB, func_ov002_021aa778(c));
    func_ov002_021a0fd4(p, q, c, d, tmpB);
    ret = func_0203b688();
    node = func_0205681c(0x1c);
    if (node != 0) {
        node = func_ov002_021aacac(node, c, -(int32_t)func_ov002_021c8ff4(tmpB));
    }
    func_02056bc0(ret, node);

    flag = 0;
    a4 = func_ov002_021aa820(c);
    if ((int32_t)(a4 - func_ov002_021c8ff4(tmpB)) <= 0) {
        if (func_ov002_021a1838(func_ov002_021aa850(c)) == 0) {
            flag = 1;
        }
    }

    f2 = 0;
    b4 = func_ov002_021aa820(q);
    if ((int32_t)(b4 - func_ov002_021c8ffc(tmpB)) <= 0) {
        if (func_ov002_021a1838(func_ov002_021aa850(q)) == 0) {
            f2 = 1;
        }
    }

    x4c = func_ov002_021ac8d8(q, c);
    x50 = func_ov002_021a16ec(p);
    func_ov002_021c8e38(tmpA, x50, func_ov002_021aa778(q), func_ov002_021aa778(c));

    e54 = func_ov002_021c8ff8(tmpB);
    r5v = func_ov002_021c9004(tmpB);
    r7v = func_ov002_021c8ff4(tmpB);
    e58 = func_ov002_021c9000(tmpB);
    e5c = func_ov002_021c8ffc(tmpB);
    r0v = func_ov002_021c9024(tmpB);

    func_ov002_021c8e70(tmpC, tmpA, d, e54,
        r5v, r7v, flag, e58, e5c, f2, 1, 1, x4c, r0v, 0, 0, 3, 0, 1);

    res = func_ov002_021c939c(p ? p + 0x80 : p, tmpC);
    res = func_02055a2c(*(uint32_t *)(p + 0xf0), res);
    func_02056bc0(ret, res);

    func_ov002_021c8f10(tmpC);
    func_ov002_021c8e40(tmpA);
    func_ov002_021c906c(tmpB);
    return ret;
}
