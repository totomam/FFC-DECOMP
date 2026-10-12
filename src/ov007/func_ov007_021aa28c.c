#include "ffc/types.h"

typedef struct { uint32_t a, b; } V2;
extern void func_02021338(uint32_t a);
extern void func_02069288(void *object);
extern void func_020692f0(void *object);
extern uint32_t func_020692e0(void *object);
extern void func_020692a4(void *object);
extern uint32_t func_020655dc(void *object, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020655b8(void *object);
extern uint32_t func_ov007_021aa408(void *object, V2 v);
extern uint32_t func_020692e8(void *object);
extern void func_ov007_021aa054(void *object);
extern void func_ov007_021a9d64(void *object, uint32_t a);
extern V2 data_ov007_021c4cb4[];
extern uint32_t data_ov007_021c49f0[];
extern V2 data_ov007_021c4d30;

typedef struct VT { void *p[32]; } VT;
typedef struct Obj { VT *vt; } Obj;
#define VF(o, off) (((void **)(((Obj *)(o))->vt))[(off) / 4])

void func_ov007_021aa28c(uint8_t *s)
{
    uint32_t off;
    uint8_t i;
    uint32_t flag;
    V2 buf;
    uint8_t *o;

    off = 0xbd;
    func_02021338(0xbd);
    off += 0x77;
    if (s[off] >= 0xc) {
        for (i = 0; i < 0xa; i++)
            func_02069288(*(void **)(s + i * 4 + 0xc8));
        func_020692f0(*(void **)(s + s[0x135] * 4 + 0xc8));
        o = *(uint8_t **)(s + 0xc0);
        if (func_020692e0(o)) {
            func_020692a4(o);
            o = *(uint8_t **)(o + 0x98);
            ((void (*)(void *, uint32_t, uint32_t))VF(o, 0x38))(o, 1, 1);
        }
    }
    off = 0x4d << 2;
    s[off]--;
    {
        V2 *p = &data_ov007_021c4cb4[s[off]];
        uint32_t *g = data_ov007_021c49f0;
        buf.a = p->a + g[9];
        buf.b = p->b + g[10];
    }
    ((void (*)(void *, V2))VF(*(void **)(s + off - 0x14), 0xc))(*(void **)(s + off - 0x14), buf);
    ((void (*)(void *))VF(*(void **)(s + off - 0x14), 0x28))(*(void **)(s + off - 0x14));
    ((void (*)(void *))VF(*(void **)(s + s[off] * 4 + 0xf0), 0x2c))(*(void **)(s + s[off] * 4 + 0xf0));

    flag = 1;
    func_02056bc0(s + 0x14, (void *)func_020655dc(*(void **)(*(uint8_t **)(s + 0xc4) + 0x98), 4, flag));
    func_02056bc0(s + 0x14, (void *)func_020655b8(*(void **)(*(uint8_t **)(s + 0xc4) + 0x98)));
    if (s[off] == 0) {
        func_02056bc0(s + 0x14, (void *)func_ov007_021aa408(*(void **)(s + 0xc4), data_ov007_021c4d30));
    } else if (func_020692e8(*(void **)(s + 0xc4))) {
        func_02056bc0(s + 0x14, (void *)func_020655dc(*(void **)(*(uint8_t **)(s + 0xc4) + 0x98), 3, flag));
    } else {
        func_02056bc0(s + 0x14, (void *)func_020655dc(*(void **)(*(uint8_t **)(s + 0xc4) + 0x98), 2, flag));
    }
    func_ov007_021aa054(s);
    func_ov007_021a9d64(s, 1);
}
