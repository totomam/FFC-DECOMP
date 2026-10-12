/* cflags: -lang c++ */
#include "ffc/types.h"

struct P { uint32_t x, y; };
typedef struct P P;
struct O {
 virtual void va(); virtual void vb(); virtual void v0();
 virtual void f3(P p);
 virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
 virtual void f8(uint32_t a);
 virtual void v7();
 virtual void f10();
 virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
 virtual void f15(uint32_t a);
};
extern "C" uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern "C" uint32_t func_02092864(const uint8_t *text);
extern "C" void func_02056c4c(void *x);
extern "C" uint32_t func_0203b688(void);
extern "C" uint32_t func_0203b6f0(void);
extern "C" uint32_t func_0203b7fc(uint32_t a, uint32_t b, uint32_t c);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void func_02021338(uint32_t v);
extern "C" void *func_0203b95c(void *p, uint32_t a, uint32_t b, uint32_t c);
extern "C" uint32_t func_02064aa8(const void *object);
extern "C" void func_0205f2f0(void *object, uint32_t value);
extern "C" uint32_t func_0203b708(uint32_t v);
extern "C" uint32_t func_020655dc(void *object, uint32_t a, uint32_t b);
extern "C" void *func_02056aec(void *object);
extern "C" uint32_t func_0203b750(void);
extern "C" uint8_t data_ov002_021d6878[];
extern "C" void *data_ov002_021d685c[];

extern "C" void func_ov002_021bc240(uint8_t *obj, int32_t a, uint32_t idx)
{
    uint32_t r7;
    int32_t i;
    O *r4;
    int32_t c;
    uint8_t *x;
    uint32_t s0c;
    uint32_t s8;
    int32_t len;
    uint32_t s14;
    uint32_t tmp;
    void *q;
    P pos;
    uint8_t buf[8];

    if (a == 0) {
        return;
    }
    x = *(uint8_t **)(obj + 0x80 + (idx << 2));
    func_02086ad4(buf, (uint32_t)data_ov002_021d6878, a < 0 ? -a : a);
    len = (int32_t)func_02092864(buf);
    func_02056c4c(*(void **)(x + 0x80));
    r7 = func_0203b688();
    s8 = func_0203b6f0();
    s0c = func_0203b7fc(len, len, 1);
    func_02056bc0(*(void **)(x + 0x80), (void *)r7);
    pos.y = *(uint32_t *)(x + 0x88) - 14;
    pos.x = *(uint32_t *)(x + 0x84) - ((len * 12) / 2) + 8;
    func_02021338(a > 0 ? 0x434 : 0x435);
    i = 0;
    if (len > 0)
    for (; i < len; i++) {
        r4 = (O *)func_0203b95c(a >= 0 ? data_ov002_021d685c[2] : data_ov002_021d685c[1], s0c, 2, 1);
        r4->f8(2);
        r4->f15(2);
        r4->f10();
        r4->f3(pos);
        func_0205f2f0((void *)func_02064aa8(r4), 1);
        func_02056bc0((void *)s8, r4);
        pos.x += 12;
        c = (int8_t)buf[i];
        if (c == 0x2b) {
            c = 11;
        } else {
            c -= 0x2f;
        }
        s14 = func_0203b708(3);
        tmp = func_020655dc(r4, c, 0);
        func_02056bc0((void *)r7, (void *)tmp);
        func_02056bc0((void *)r7, (void *)s14);
    }
    q = func_02056aec((void *)s8);
    tmp = func_0203b750();
    func_02056bc0((void *)r7, (void *)tmp);
    func_02056bc0((void *)r7, q);
    func_02056bc0((void *)s8, (void *)s0c);
    x += 0x80;
    func_02056bc0(*(void **)x, (void *)s8);
}
