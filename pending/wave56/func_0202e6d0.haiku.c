#include "ffc/types.h"

extern void func_020354f8(void *s);
extern void func_0202e150(void *a, void *b, void *c);
extern void func_0202f6ac(void *a, void *b);
extern void func_0202e570(void *a);
extern void func_02005988(void *o, void *b);
extern int func_020520d0(void *s, void *o);
extern void *func_020059cc(void *object);
extern uint32_t func_020522c8(void *s);
extern void *func_02056830(uint32_t n);
extern void func_020522d4(void *s, void *p, uint32_t n);
extern void func_02052208(void *s);
extern void func_0202f9e4(void *a, void *b, void *p, int r3, void *t, uint32_t c, int z);
extern void func_02056858(void *p);
extern void func_020520bc(void *s);

void func_0202e6d0(void *a, void *b, uint32_t c) {
    struct {
        uint8_t s0c[0xc];
        uint8_t t18[0x80];
        uint8_t t98[0x80];
        uint8_t s118[0x58];
    } f;
    uint8_t *p;
    int ok;
    uint32_t len;

    func_020354f8(f.s118);
    func_0202e150(b, f.t98, f.t18);
    func_0202f6ac(a, f.t98);
    func_0202e570(a);
    func_02005988(f.s0c, b);
    ok = func_020520d0(f.s118, f.s0c);
    func_020059cc(f.s0c);
    if (ok) {
        len = func_020522c8(f.s118);
        p = func_02056830((len + 1) * sizeof(uint8_t));
        p[func_020522c8(f.s118)] = 0;
        len = func_020522c8(f.s118);
        func_020522d4(f.s118, p, len);
        func_02052208(f.s118);
        func_0202f9e4(a, b, p, *(int *)((uint8_t *)a + 0x9c), f.t98, c, 0);
        if (p) {
            func_02056858(p);
        }
    }
    func_020520bc(f.s118);
}
