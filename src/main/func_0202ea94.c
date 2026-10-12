#include "ffc/types.h"

extern void func_02052050(void *s);
extern void func_0202e150(void *a, void *b, int c);
extern void func_02005988(void *a, void *b);
extern int func_020520d0(void *a, void *b);
extern void *func_020059cc(void *object);
extern int func_020522c8(void *s);
extern void *func_02056830(uint32_t size);
extern void func_020522d4(void *s, char *buf, int len);
extern void func_02052208(void *s);
extern void func_0202f9e4(void *a, void *b, char *buf, uint32_t c, void *d, int e, uint32_t f);
extern void func_02056858(void *p);
extern void func_0205208c(void *object);

void func_0202ea94(void *r0, void *r1, uint32_t r2, uint32_t r3) {
    uint8_t str[0x58];
    uint8_t big[0x80];
    uint8_t obj10[12];
    char *buf;
    int ok;
    int esz = 1;

    func_02052050(str);
    func_0202e150(r1, big, 0);
    func_02005988(obj10, r1);
    ok = func_020520d0(str, obj10);
    func_020059cc(obj10);
    if (ok) {
        buf = (char *)func_02056830(esz * (func_020522c8(str) + 1));
        buf[func_020522c8(str)] = 0;
        func_020522d4(str, buf, func_020522c8(str));
        func_02052208(str);
        func_0202f9e4(r0, r1, buf, r2, big, 0, r3);
        if (buf) {
            func_02056858(buf);
        }
    }
    func_0205208c(str);
}
