#include "ffc/types.h"

extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern char data_ov009_021afab0[];
extern char data_ov009_021afab4[];
extern char data_ov009_021afab8[];
extern char data_ov009_021afabc[];

void func_ov009_0219989c(void *self, int n)
{
    char buf[0x3c];
    void *o;

    if (n == 0) {
        o = *(void **)((char *)self + 0x80);
        ((void (*)(void *))(((void **)*(void **)o)[11]))(o);
        char *d0 = data_ov009_021afab0;
        char *b0 = buf + 0x30;
        func_02005988(b0, d0);
        func_02068ddc(*(void **)((char *)self + 0x80), b0);
        func_020059cc(b0);

        o = *(void **)((char *)self + 0x84);
        ((void (*)(void *))(((void **)*(void **)o)[11]))(o);
        b0 = buf + 0x24;
        func_02005988(b0, d0);
        func_02068ddc(*(void **)((char *)self + 0x84), b0);
        func_020059cc(b0);
        return;
    }

    if (n > 0) {
        func_02091b10(buf + 3, (uint32_t)data_ov009_021afab4, n);
        func_02091b10(buf, (uint32_t)data_ov009_021afab8);
    } else {
        char *q = buf + 3;
        func_02091b10(q, (uint32_t)data_ov009_021afab4, -n);
        if (buf[3] != 0) {
            do {
                *q += 0x20;
                q++;
            } while (*q != 0);
        }
        func_02091b10(buf, (uint32_t)data_ov009_021afabc);
    }

    o = *(void **)((char *)self + 0x80);
    ((void (*)(void *))(((void **)*(void **)o)[10]))(o);
    func_02005988(buf + 0x18, buf + 3);
    func_02068ddc(*(void **)((char *)self + 0x80), buf + 0x18);
    func_020059cc(buf + 0x18);

    o = *(void **)((char *)self + 0x84);
    ((void (*)(void *))(((void **)*(void **)o)[10]))(o);
    func_02005988(buf + 0x0c, buf);
    func_02068ddc(*(void **)((char *)self + 0x84), buf + 0x0c);
    func_020059cc(buf + 0x0c);
}
