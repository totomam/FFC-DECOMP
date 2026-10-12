#include "ffc/types.h"

extern void func_02052be0(void *a);
extern void func_02052d10(void *a, void *b);
extern void func_02027b70(void *r);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02027c9c(void *r);
extern void func_02028894(void *dst, void *src, uint32_t *ctx);
extern void func_02028928(void *r);
extern void func_02035c18(void *r);
extern void func_02028a7c(void *r);

typedef struct {
    void *a;
    void *b;
    uint8_t f;
} Ref;

#define OFF(p, o, T) (*(T *)((uint8_t *)(p) + (o)))

void func_02029a0c(void *self) {
    uint8_t *p = (uint8_t *)self;

    if (OFF(p, 0x6c, int)) {
        Ref r;
        r.a = OFF(p, 0x3c, void *);
        r.b = OFF(p, 0x40, void *);
        r.f = OFF(p, 0x44, uint8_t);
        if (r.a) {
            func_02052be0(r.a);
            if (r.f) {
                func_02052d10(r.a, r.b);
            }
        }
        func_02027b70(&r);
        if (r.a) {
            if (r.f) {
                func_02052d3c(r.a, r.b);
            }
            func_02052c04(r.a);
        }
        OFF(p, 0x6c, int) = 0;
        OFF(p, 0x84, int) = 0;
    }

    if (OFF(p, 0x70, int)) {
        Ref r;
        r.a = OFF(p, 0x48, void *);
        r.b = OFF(p, 0x4c, void *);
        r.f = OFF(p, 0x50, uint8_t);
        if (r.a) {
            func_02052be0(r.a);
            if (r.f) {
                func_02052d10(r.a, r.b);
            }
        }
        func_02027c9c(&r);
        if (r.a) {
            if (r.f) {
                func_02052d3c(r.a, r.b);
            }
            func_02052c04(r.a);
        }
        OFF(p, 0x70, int) = 0;
        OFF(p, 0x88, int) = 0;
    }

    if (OFF(p, 0x74, int)) {
        Ref r3;
        Ref r4;
        uint32_t w;
        uint32_t t;
        r3.a = OFF(p, 0x54, void *);
        r3.b = OFF(p, 0x58, void *);
        r3.f = OFF(p, 0x5c, uint8_t);
        if (r3.a) {
            func_02052be0(r3.a);
            if (r3.f) {
                func_02052d10(r3.a, r3.b);
            }
        }
        w = OFF(p, 0x94, uint32_t);
        func_02028894(&r4, &r3, &w);
        func_02028928(&r4);
        func_02035c18(&t);
        if (r4.a) {
            if (r4.f) {
                func_02052d3c(r4.a, r4.b);
            }
            func_02052c04(r4.a);
        }
        func_02035c18(&w);
        if (r3.a) {
            if (r3.f) {
                func_02052d3c(r3.a, r3.b);
            }
            func_02052c04(r3.a);
        }
        OFF(p, 0x74, int) = 0;
        OFF(p, 0x8c, int) = 0;
    }

    if (OFF(p, 0x78, int)) {
        Ref r;
        r.a = OFF(p, 0x60, void *);
        r.b = OFF(p, 0x64, void *);
        r.f = OFF(p, 0x68, uint8_t);
        if (r.a) {
            func_02052be0(r.a);
            if (r.f) {
                func_02052d10(r.a, r.b);
            }
        }
        func_02028a7c(&r);
        if (r.a) {
            if (r.f) {
                func_02052d3c(r.a, r.b);
            }
            func_02052c04(r.a);
        }
        OFF(p, 0x78, int) = 0;
        OFF(p, 0x90, int) = 0;
    }
}
