#include "ffc/types.h"

extern uint32_t func_0201ed9c(uint8_t *obj, uint32_t a);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern uint8_t *func_02019760(uint8_t *p);
extern void func_02036de4(void *buf, uint32_t v);
extern uint32_t func_02015938(uint8_t *p);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern uint32_t func_02036f1c(void *p);
extern void func_0200d5d4(void *vec, void *tmp, uint32_t v);
extern void func_0200d5ec(void *vec);
extern void func_02036e0c(void *buf, uint32_t v);
extern uint32_t func_02036cd8(const void *object);
extern void func_02036df8(void *buf, uint32_t v);
extern void func_02036e40(void *buf, uint32_t v);
extern void func_02036e54(void *buf, uint32_t v);
extern uint8_t *func_020197b4(uint8_t *p, uint32_t idx);
extern void func_02036e7c(void *buf, uint32_t v);
extern void func_02036e90(void *buf, uint32_t v);
extern uint32_t func_0201edb8(uint8_t *obj, uint32_t a);
extern uint8_t *data_020b8e44;

struct Vec {
    uint32_t *ptr;
    uint32_t count;
    uint32_t cap;
};

void func_0201edf0(uint8_t *obj, uint32_t a, uint8_t *x, int y, uint8_t *r5) {
    uint32_t buf[6];
    struct Vec vec;
    uint32_t tmp;
    uint32_t i;
    uint32_t idx;
    uint32_t n;
    uint32_t off;
    uint32_t k;
    uint8_t *e;
    uint8_t *q;

    if (func_0201ed9c(obj, a)) return;
    func_02084b2c(buf, 0, 0x18);
    if (y < 0) y = *(uint16_t *)x;
    if (y != 0 && r5 == 0) r5 = func_02019760(data_020b8e44);

    if (y == 0) {
        func_02036de4(buf, *(uint16_t *)(x + 2));
    } else if (y == 1) {
        vec.ptr = 0;
        vec.count = 0;
        vec.cap = 0;
        for (i = 1; i <= 0x190; i++) {
            if (func_02036f1c((void *)(*(uint32_t *)(obj + 0x50) + i * 4))) {
                off = *(uint32_t *)(r5 + *(uint32_t *)(r5 + 8) + i * 4);
                e = r5 + off;
                if (e[0] && *(uint32_t *)(e + 0x1c)) {
                    if (vec.count >= vec.cap) {
                        uint8_t pad[4];
                        uint8_t *pp;
                        tmp = i;
                        pp = &pad[1];
                        *pp = 0;
                        func_0200d5d4(&vec, &tmp, *pp);
                    } else {
                        tmp = i;
                        vec.count = vec.count + 1;
                        vec.ptr[vec.count - 1] = i;
                    }
                }
            }
        }
        func_02036de4(buf, 1);
        if (vec.count != 0) {
            n = func_0206c184(func_02015938(data_020b8e44), vec.count);
            func_02036de4(buf, vec.ptr[n]);
        }
        func_0200d5ec(&vec);
    } else if (y == 2) {
        n = *(uint32_t *)(r5 + 4) - 1;
        for (;;) {
            idx = func_0206c184(func_02015938(data_020b8e44), n) + 1;
            e = r5 + *(uint32_t *)(r5 + *(uint32_t *)(r5 + 8) + idx * 4);
            if (e[0] && *(uint32_t *)(e + 0x1c)) break;
        }
        func_02036de4(buf, idx);
    }

    func_02036e0c(buf, 0);
    idx = func_02036cd8(buf);
    off = *(uint32_t *)(r5 + *(uint32_t *)(r5 + 8) + idx * 4);
    func_02036df8(buf, (r5 + off)[9]);
    func_02036e40(buf, 0);
    func_02036e54(buf, 1);
    idx = func_02036cd8(buf);
    q = func_020197b4(data_020b8e44, idx);
    func_02036e7c(buf, q[6]);
    idx = func_02036cd8(buf);
    q = func_020197b4(data_020b8e44, idx);
    func_02036e90(buf, q[7]);

    k = 1;
    if (a > 1) k = a;
    {
        uint8_t *base = *(uint8_t **)(obj + 0x78);
        uint32_t o = (func_0201edb8(obj, a) + (k - 1) * 8) * 0x18;
        uint32_t *d = (uint32_t *)(base + o);
        d[0] = buf[0];
        d[1] = buf[1];
        d[2] = buf[2];
        d[3] = buf[3];
        d[4] = buf[4];
        d[5] = buf[5];
    }
}
