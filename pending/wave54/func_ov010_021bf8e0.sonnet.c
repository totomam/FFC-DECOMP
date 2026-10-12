#include "ffc/types.h"

extern void func_02068658(uint32_t v);
extern void *func_02052d90(const void *mar, uint32_t index);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(uint32_t *out, uint32_t v);
extern void func_020393a8(uint32_t *dst, uint32_t *src, uint32_t n);
extern void func_020686e8(uint32_t obj, uint32_t *arg);
extern void *func_020059cc(void *object);
extern uint32_t data_020b8e44;

typedef struct Vt { void *f[8]; } Vt;
typedef struct Obj { Vt *vt; } Obj;

void func_ov010_021bf8e0(void *self, void *obj)
{
    uint32_t *w;
    uint32_t rect[4];
    uint32_t t2[3];
    uint32_t t1[3];
    uint8_t i;
    uint32_t n;

    void (*fn)(uint32_t *, void *) = (void (*)(uint32_t *, void *))((Obj *)obj)->vt->f[4];
    w = (uint32_t *)self;
    fn(rect, obj);

    for (i = 0; i < 5; i++) {
        if ((uint32_t)obj == w[0x42 + i]) {
            rect[0] -= 8;
            rect[1] += 8;
            rect[2] -= 8;
            rect[3] += 8;
        }
    }

    func_02068658(w[0x4d]);

    if (w[0x3e] == w[0x3f]) {
        n = w[0x4f] - w[0x3e] * 5;
    } else {
        n = 5;
    }

    for (i = 0; i < n; i++) {
        if ((uint32_t)obj == w[0x42 + i]) {
            uint32_t *p = (uint32_t *)w[0x4e];
            uint32_t idx = w[0x3e] * 5 + i;
            uint32_t r7 = p[idx];
            uint8_t *res = (uint8_t *)func_02052d90((const void *)w[0x52], w[0x53]);
            uint16_t v = *(uint16_t *)(res + *(uint32_t *)(res + 8) + r7 * 8 + 2);
            uint32_t r1 = func_020159c8(data_020b8e44, v);
            func_02005988(t2, r1);
            func_020393a8(t1, t2, 3);
            func_020686e8(w[0x4d], t1);
            func_020059cc(t1);
            func_020059cc(t2);
        }
    }
}
