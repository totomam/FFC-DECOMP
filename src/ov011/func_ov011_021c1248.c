#include "ffc/types.h"

extern void func_ov011_021c1868(void *obj);
extern void func_02091b10(void *object, uint32_t first, ...);
extern void *func_0203bb94(void *obj, int a, int b, int c);
extern void func_02056bc0(void *object, void *node);
extern void func_ov011_021c11f0(void *obj, int v);
extern void func_02021338(uint32_t x);

extern void *func_0203b720(void);
extern uint8_t data_ov011_021cb12c[];
extern uint32_t data_ov011_021cb15c[];

typedef struct { uint32_t a, b; } S;
extern uint32_t func_ov011_021c1310(void *obj, S s, int c);
typedef struct Obj {
    uint8_t pad0[0x14];
    uint8_t sub14[0x2b4 - 0x14];
    void *inner;
    uint8_t pad1[0x2c4 - 0x2b8];
    int32_t state;
} Obj;

void func_ov011_021c1248(Obj *p, int v)
{
    uint8_t buf[0x44];
    int r7;
    int old;
    void *o;

    if (v <= 4) {
        old = p->state;
        r7 = 0;
        if (old == 6) {
            r7 = 1;
        }
        if (old != v) {
            p->state = v;
            func_ov011_021c1868(p);
            func_02091b10(buf, (uint32_t)data_ov011_021cb12c, v);
            o = func_0203bb94(buf, 1, 0, 0);
            p->inner = o;
            func_02056bc0((uint8_t *)p + 0x48, o);
            o = p->inner;
            ((void (*)(void *))(*(void ***)o)[10])(o);
            o = p->inner;
            ((void (*)(void *, int))(*(void ***)o)[8])(o, 2);
            {
                S a;
                a.a = 0;
                a.b = 0xa0;
                o = p->inner;
                ((void (*)(void *, S))(*(void ***)o)[3])(o, a);
            }
            if (r7) {
                func_ov011_021c11f0(p, v);
                return;
            }
            func_02021338(0xb7);
            {
                uint32_t r4 = func_ov011_021c1310(p, *(S *)data_ov011_021cb15c, v);
                void *q = func_0203b720();
                uint8_t *s14 = (uint8_t *)p + 0x14;
                func_02056bc0(s14, q);
                func_02056bc0(s14, (void *)r4);
            }
        }
    }
}
