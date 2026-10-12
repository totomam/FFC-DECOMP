#include "ffc/types.h"

extern void func_02033e04(void *o);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern uint8_t func_02036360(const void *o);
extern uint32_t func_0203608c(const void *o);
extern uint32_t func_02036368(const void *o);
extern uint32_t func_02036370(const void *o, uint32_t i);
extern void func_02033e28(void *o, uint32_t i, uint32_t v);
extern void *func_02036380(const void *o);
extern void func_02033e40(void *o, void *p);
extern void func_02033f28(void *o);
extern void func_02034030(void *o, void *a, uint32_t b, uint32_t c);
extern uint32_t *func_020340c0(void *o);
extern void func_ov011_021c44c4(void *flags, uint32_t id);
extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *dst, const void *src);
extern void *func_02032d24(void *o, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *o, void *node);
extern void *func_020059cc(void *o);
extern void func_02034014(void *o);
extern void func_02033e24(void *o);

typedef struct {
    uint32_t f0;
    uint32_t pr[2];
    uint32_t g0;
    uint32_t s18[3];
    uint32_t arr[3];
} Ctx;

void func_ov011_021c4688(uint8_t *p)
{
    uint8_t o7[0x70];
    uint8_t o6[0x70];
    uint32_t obj[13];
    Ctx c;
    int off;
    int i;
    uint32_t *r6;
    uint32_t *r7;
    uint32_t v;
    void *n;
    int made;

    func_02033e04(obj);
    func_02084b2c(obj, 0, 0x34);
    off = 0x108;
    obj[0] = func_02036360(p + off);
    obj[1] = func_0203608c(p + off);
    obj[10] = func_02036368(p + off);
    for (i = 0; i < 4; i++) {
        func_02033e28(obj, i, func_02036370(p + off, i));
    }
    func_02033e40(obj, func_02036380(p + off));

    func_02033f28(o7);
    func_02034030(o7, obj, 0, 0);
    r7 = func_020340c0(o7);

    func_02084b2c(obj, 0, 0x34);
    off += 0x60;
    obj[0] = func_02036360(p + off);
    obj[1] = func_0203608c(p + off);
    obj[10] = func_02036368(p + off);
    for (i = 0; i < 4; i++) {
        func_02033e28(obj, i, func_02036370(p + off, i));
    }
    func_02033e40(obj, func_02036380(p + off));

    func_02033f28(o6);
    func_02034030(o6, obj, 0, 0);
    r6 = func_020340c0(o6);

    for (i = 0; i < 3; i++) {
        c.arr[i] = i;
    }

    if (r6[0] - r7[0]) func_ov011_021c44c4(c.arr, 0xfb);
    if (r6[1] - r7[1]) func_ov011_021c44c4(c.arr, 0xfc);
    if (r6[2] - r7[2]) func_ov011_021c44c4(c.arr, 0xfd);
    if (r6[3] - r7[3]) func_ov011_021c44c4(c.arr, 0xfe);
    if (r6[4] - r7[4]) func_ov011_021c44c4(c.arr, 0xff);

    if (c.arr[0] & 1) {
        v = c.arr[1];
    } else {
        v = (((uint8_t *)c.arr)[0] >> 1) & 0x7f;
    }

    if (v != 0) {
        n = func_0205681c(0xb0);
        made = 0;
        if (n != 0) {
            func_020095b8(c.s18, c.arr);
            c.pr[0] = 0x80;
            c.pr[1] = 0x60;
            n = func_02032d24(n, c.pr[0], c.pr[1], c.s18, 4, 0);
            made = 1;
        }
        func_02056bc0(p + 0x14, n);
        if (made) {
            func_020059cc(c.s18);
        }
    }

    func_020059cc(c.arr);
    func_02034014(o6);
    func_02034014(o7);
    func_02033e24(obj);
}
