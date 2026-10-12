#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *f4;
    void *f8;
    uint8_t fc;
} Loc;

extern void func_02053234(void *object);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void);
extern void func_02052d10(void *a, void *b);
extern void func_02053290(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02045320(void *a, void *b, uint32_t c, void *d, uint32_t e, int f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020aef58[];

void func_0203eb44(void *self)
{
    uint8_t *o = (uint8_t *)self;
    struct { Loc b; Loc a; } p;
    
    
    void *r;
    uint32_t zero = 0;

    *(uint32_t *)(o + 0xbc) = zero;
    func_02053234(&p.a);
    p.a.f4 = (void *)zero;
    p.a.fc = (uint8_t)zero;
    func_020532a4(o + 0xc0, &p.a);
    if (&p.a.f4 != &((Loc *)(o + 0xc0))->f4) {
        if (*(void **)(o + 0xc4) != 0) {
            if (*(uint8_t *)(o + 0xcc) != 0) {
                func_02052d3c(*(void **)(o + 0xc4), *(void **)(o + 0xc8));
            }
            func_02052c04(*(void **)(o + 0xc4));
        }
        *(void **)(o + 0xc4) = p.a.f4;
        *(void **)(o + 0xc8) = p.a.f8;
        *(uint8_t *)(o + 0xcc) = p.a.fc;
        if (p.a.f4 != 0) {
            func_02052be0();
            if (*(uint8_t *)(o + 0xcc) != 0) {
                func_02052d10(*(void **)(o + 0xc4), *(void **)(o + 0xc8));
            }
        }
    }
    if (p.a.f4 != 0) {
        if (p.a.fc != 0) {
            func_02052d3c(p.a.f4, p.a.f8);
        }
        func_02052c04(p.a.f4);
    }
    func_02053290(&p.a);

    func_02053234(&p.b);
    p.b.f4 = (void *)zero;
    p.b.fc = (uint8_t)zero;
    func_020532a4(o + 0xd0, &p.b);
    if (&p.b.f4 != &((Loc *)(o + 0xd0))->f4) {
        if (*(void **)(o + 0xd4) != 0) {
            if (*(uint8_t *)(o + 0xdc) != 0) {
                func_02052d3c(*(void **)(o + 0xd4), *(void **)(o + 0xd8));
            }
            func_02052c04(*(void **)(o + 0xd4));
        }
        *(void **)(o + 0xd4) = p.b.f4;
        *(void **)(o + 0xd8) = p.b.f8;
        *(uint8_t *)(o + 0xdc) = p.b.fc;
        if (p.b.f4 != 0) {
            func_02052be0();
            if (*(uint8_t *)(o + 0xdc) != 0) {
                func_02052d10(*(void **)(o + 0xd4), *(void **)(o + 0xd8));
            }
        }
    }
    if (p.b.f4 != 0) {
        if (p.b.fc != 0) {
            func_02052d3c(p.b.f4, p.b.f8);
        }
        func_02052c04(p.b.f4);
    }
    func_02053290(&p.b);

    r = func_0205681c(0x480);
    if (r != 0) {
        r = func_02045320(r, *(void **)(o + 0x88), 0, *(void **)(o + 0x98), 0, -1, 0);
    }
    func_02056bc0(o + 0x14, r);
    *(uint32_t *)(o + 0x80) = data_020aef58[0];
    *(uint32_t *)(o + 0x84) = data_020aef58[1];
}
