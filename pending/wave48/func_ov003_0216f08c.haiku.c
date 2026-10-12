#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t zero);
extern void func_02053234(void *object);
extern void func_02018568(void *out, uint32_t a, uint32_t b);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void *func_02053290(void *object);
extern uint32_t func_02052d90(uint32_t a, uint32_t b);
extern char data_ov003_0217b4e4[];
extern uint32_t data_ov003_0217b50c[2];
extern uint32_t data_020b8e44;

struct Loc {
    void *a;
    uint32_t b;
    uint32_t c;
    uint8_t d;
};

void *func_ov003_0216f08c(uint8_t *obj, uint32_t p1, uint32_t p2, uint32_t p3)
{
    struct Loc loc;
    struct Loc *s;
    struct Loc *tp;
    uint32_t a0, a1;

    func_02056c9c(obj, 0);
    *(void **)obj = data_ov003_0217b4e4;
    *(uint32_t *)(obj + 0x88) = p1;
    *(uint32_t *)(obj + 0x8c) = p2;
    *(uint32_t *)(obj + 0x90) = p3;
    *(uint32_t *)(obj + 0x94) = 0;
    s = (struct Loc *)(obj + 0x98);
    func_02053234(s);
    s->b = 0;
    s->d = 0;
    *(uint8_t *)(obj + 0xac) = 1;
    a0 = data_ov003_0217b50c[0];
    a1 = data_ov003_0217b50c[1];
    *(uint32_t *)(obj + 0x80) = a0;
    *(uint32_t *)(obj + 0x84) = a1;
    func_02018568(&loc, data_020b8e44, *(uint32_t *)(obj + 0x8c));
    func_020532a4(obj + 0x98, &loc);

    uint32_t lb;
    if (&loc.b != &((struct Loc *)(obj + 0x98))->b) {
        if (*(uint32_t *)(obj + 0x9c) != 0) {
            if (*(uint8_t *)(obj + 0xa4) != 0) {
                func_02052d3c(*(uint32_t *)(obj + 0x9c), *(uint32_t *)(obj + 0xa0));
            }
            func_02052c04(*(uint32_t *)(obj + 0x9c));
        }
        lb = loc.b;
        *(uint32_t *)(obj + 0x9c) = lb;
        *(uint32_t *)(obj + 0xa0) = loc.c;
        *(uint8_t *)(obj + 0xa4) = loc.d;
        if (lb != 0) {
            func_02052be0();
            if (*(uint8_t *)(obj + 0xa4) != 0) {
                func_02052d10(*(uint32_t *)(obj + 0x9c), *(uint32_t *)(obj + 0xa0));
            }
        }
    }

    tp = &loc;
    if (tp->b != 0) {
        if (tp->d != 0) {
            func_02052d3c(tp->b, tp->c);
        }
        func_02052c04(tp->b);
    }
    func_02053290(tp);
    *(uint32_t *)(obj + 0xa8) = func_02052d90(*(uint32_t *)(obj + 0x9c), *(uint32_t *)(obj + 0xa0));
    return obj;
}
