#include "ffc/types.h"

typedef void (*VFn)(void *);

extern void *data_020b93b8;
extern uint32_t data_ov011_021cacf0[];
extern uint32_t data_ov011_021cace4[];

extern void func_02036750(void *p);
extern void func_0201f1f0(void *a, uint32_t b, void *c);
extern uint32_t func_02036890(void *p);
extern void func_0200a630(void *dst, const void *src);
extern void func_ov005_02197140(void *obj, void *arg);
extern void *func_0200a678(void *object);
extern void func_02005988(void *dst, const void *src);
extern void func_02068ddc(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern void *func_020367b8(void *object);
extern void func_02068e18(void *obj, void *arg);
extern uint32_t func_0201b924(const void *object);
extern void func_ov005_021971b4(void *obj);
extern void func_ov005_021971c4(void *obj);
extern void func_020367a8(void *p);

typedef struct {
    uint8_t pad[0xd0];
    void *a[3];
    void *b[3];
    void *c[3];
} S011;

void func_ov011_021be7b4(S011 *s)
{
    uint32_t t1[3];
    uint32_t t2[3];
    uint32_t t3[3];
    uint32_t t0[3];
    uint8_t x[0x58];
    uint8_t i;

    func_02036750(x);
    for (i = 0; i < 3; i++) {
        uint32_t n = i + 1;
        func_0201f1f0(data_020b93b8, n, x);
        if (func_02036890(x) == 0) {
            func_0200a630(t1, data_ov011_021cacf0);
            func_ov005_02197140(s->a[i], t1);
            func_0200a678(t1);
            func_02005988(t2, data_ov011_021cace4);
            func_02068ddc(s->b[i], t2);
            func_020059cc(t2);
            {
                void *o = s->c[i];
                VFn *vt = *(VFn **)o;
                vt[10](o);
            }
        } else {
            func_0200a630(t3, func_020367b8(x));
            func_ov005_02197140(s->a[i], t3);
            func_0200a678(t3);
            func_0200a630(t0, func_020367b8(x));
            func_02068e18(s->b[i], t0);
            func_0200a678(t0);
            {
                void *o = s->c[i];
                VFn *vt = *(VFn **)o;
                vt[11](o);
            }
        }
        if (n == func_0201b924(data_020b93b8)) {
            func_ov005_021971b4(s->a[i]);
            {
                void *o = s->b[i];
                VFn *vt = *(VFn **)o;
                vt[11](o);
            }
        } else {
            {
                void *o = s->b[i];
                VFn *vt = *(VFn **)o;
                vt[10](o);
            }
            func_ov005_021971c4(s->a[i]);
        }
    }
    func_020367a8(x);
}
