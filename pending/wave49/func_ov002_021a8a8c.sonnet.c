#include "ffc/types.h"

extern void func_ov002_021a1ad4(void *self);
extern void func_ov002_021c9084(void *o);
extern void func_ov002_021a8cd4(void *self, uint8_t *a, uint32_t *b, uint32_t c, void *o);
extern uint32_t func_ov002_021a1868(void *self, uint32_t v);
extern uint32_t func_ov002_021a16d4(void *self);
extern uint32_t func_ov002_02195fa4(uint32_t v);
extern uint32_t func_ov002_02198700(uint32_t a, uint32_t b);
extern void *func_02015c98(void *unused, uint32_t index);
extern uint32_t func_ov002_021a4204(void *self, uint32_t v, uint32_t w);
extern void func_ov002_021a428c(void *self, uint32_t a, uint32_t b, void *o);
extern uint32_t func_ov002_021c8ff4(void *o);
extern void func_ov002_021aa8b8(uint32_t a, int32_t b, uint32_t c);
extern uint32_t func_ov002_021c8ffc(void *o);
extern uint32_t func_ov002_021aa850(uint32_t object);
extern uint32_t func_ov002_021a1838(void);
extern int32_t func_ov002_021aa820(uint32_t v);
extern void func_ov002_021a1b74(void *self, uint32_t v);
extern uint32_t func_ov002_021c9234(uint32_t a, void *b, uint32_t c);
extern uint32_t func_02055a2c(void *p, uint32_t v);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_ov002_021a464c(void *self, uint32_t v);
extern int32_t func_ov002_021a1af0(void *self);
extern uint32_t func_ov002_021ac8d8(uint32_t first, uint32_t second);
extern uint32_t func_ov002_021a1918(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021c8ff8(void *o);
extern uint32_t func_ov002_021c9004(void *o);
extern uint32_t func_ov002_021c9000(void *o);
extern uint32_t func_ov002_021c9024(void *o);
extern void func_ov002_021c8e70(void *o, uint32_t *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j, uint32_t k, uint32_t l, uint32_t m, uint32_t n, uint32_t o2, uint32_t p, uint32_t q, uint32_t r, uint32_t s);
extern void *func_ov002_021c939c(void *self, void *o);
extern void func_ov002_021c8f10(void *o);
extern void func_ov002_021c906c(void *o);
extern uint32_t *data_020b8e44;

uint32_t func_ov002_021a8a8c(uint8_t *self, uint8_t *a, uint32_t *b, uint32_t c, int32_t r4)
{
    uint8_t obj84[0x38];
    uint8_t objbc[0x5c];
    uint32_t arr6c[6];
    uint32_t v54, v50, v4c, v48, v44, v40;
    uint32_t v68, v64, v60, v5c, v58;
    uint8_t *q;
    uint8_t bv;
    uint32_t off;
    uint32_t t;
    uint32_t x;
    int i;

    func_ov002_021a1ad4(self);
    func_ov002_021c9084(obj84);
    func_ov002_021a8cd4(self, a, b, c, obj84);
    v54 = func_ov002_021a1868(self, b[1]);
    t = func_ov002_021a16d4(self);
    v50 = func_ov002_02198700(func_ov002_02195fa4(t), b[2]);
    q = func_02015c98(data_020b8e44, c);
    off = *(uint32_t *)(q + 0x14);
    {
        uint8_t *pp = 0;
        if (off) pp = q + off;
        bv = *pp;
    }
    if (func_ov002_021a4204(self, v54, bv)) {
        func_ov002_021a428c(self, v54, v50, obj84 + 0x30);
    }
    func_ov002_021aa8b8(v50, -(int32_t)func_ov002_021c8ff4(obj84), 0);
    if (v54 == v50) {
        r4 -= func_ov002_021c8ff4(obj84);
    }
    r4 -= func_ov002_021c8ffc(obj84);
    func_ov002_021aa850(v54);
    if (func_ov002_021a1838() != 0 && r4 <= 0) {
        r4 = 1;
    }
    if (func_ov002_021aa820(v50) <= 0) {
        func_ov002_021a1b74(self, v50);
    }
    for (i = 0; i < 6; i++) {
        arr6c[i] = 0;
    }
    arr6c[0] = b[1];
    arr6c[1] = b[2];
    v48 = 1;
    func_02056bc0(self + 0x14, func_02055a2c(*(void **)(self + 0xf0), func_ov002_021c9234(0, arr6c, 1)));
    func_02056bc0(self + 0x14, func_ov002_021a464c(self, 1));
    if (func_ov002_021a1af0(self) > 0) {
        v48 = 0;
    }
    v44 = func_ov002_021aa820(v50) > 0 ? 0 : 1;
    v40 = r4 > 0 ? 0 : 1;
    v4c = func_ov002_021ac8d8(v54, v50);
    x = 0;
    if (func_ov002_021a1918(func_ov002_021aa850(v50), 0xe) == 0) {
        x = a[1];
    }
    v58 = func_ov002_021c8ff8(obj84);
    v5c = func_ov002_021c9004(obj84);
    v60 = func_ov002_021c8ff4(obj84);
    v64 = func_ov002_021c9000(obj84);
    v68 = func_ov002_021c8ffc(obj84);
        func_ov002_021c8e70(objbc, b, c, v58, v5c, v60, v44, v64, v68, v40, v48, 0, v4c, func_ov002_021c9024(obj84), a[0x1d], x, *(uint32_t *)(a + 4), *(uint32_t *)(a + 8), 1);
    func_02056bc0(self + 0x14, func_02055a2c(*(void **)(self + 0xf0), (uint32_t)func_ov002_021c939c(self ? self + 0x80 : self, objbc)));
    func_ov002_021c8f10(objbc);
    func_ov002_021c906c(obj84);
    return 1;
}
