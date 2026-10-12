/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_ov012_021d0d0c(uint8_t *p, int v);
uint8_t func_ov012_021d008c(uint8_t *p);
void func_02021338(int v);
void *func_0203b688(void);
void *func_020655b8(void *p);
void *func_020655dc(void *p, int a, int b);
void func_02056bc0(void *object, void *node);
void func_ov012_021ce750(uint8_t *p);
}

struct Fl { uint32_t flag : 1; };
union U { Fl f; uint16_t w[4]; };
struct Buf {
    U u;
    uint16_t *ptr;
    inline bool isInl() { return !u.f.flag; }
    inline uint16_t *get() { return isInl() ? &u.w[1] : ptr; }
};

struct Obj {
    uint8_t pad0[0x2EC];
    Buf a;
    Buf b;
    uint8_t pad1[0x31C - 0x304];
    Buf c;
    uint8_t pad2[0x338 - 0x328];
    int8_t cnt;
    uint8_t hi;
};

extern "C" void func_ov012_021d0198(Obj *p)
{
    int8_t cnt = p->cnt;
    if (cnt > 0) {
        int idx = cnt - 1;
        if ((int)p->a.get()[idx] >= 0x30) {
            if ((int)p->a.get()[idx] <= 0x39) {
                func_ov012_021d0d0c((uint8_t *)p, 1);
            }
        }
    }
    {
        uint8_t i;
        for (i = p->cnt; i < p->hi; i++) {
            if (i != 0) {
                uint16_t *s1 = p->a.get();
                int o = i << 1;
                uint16_t *d1 = p->a.get();
                uint16_t v1 = *(uint16_t *)((uint8_t *)s1 + o);
                int j = i - 1;
                d1[j] = v1;
                uint16_t *s2 = p->b.get();
                uint16_t *d2 = p->b.get();
                d2[j] = *(uint16_t *)((uint8_t *)s2 + o);
            }
        }
    }
    {
        uint16_t *c1 = &p->c.get()[0x1d];
        int n = p->hi - 1;
        uint16_t *a1 = p->a.get();
        a1[n] = *c1;
        uint16_t *c2 = &p->c.get()[0x1d];
        int m = p->hi - 1;
        uint16_t *b1 = p->b.get();
        b1[m] = *c2;
    }
    p->cnt--;
    *((uint8_t *)p + 0x33C) = func_ov012_021d008c((uint8_t *)p);
    func_02021338(0xbd);
    void *r6 = func_0203b688();
    void *r7 = func_020655b8(*(void **)(*(uint8_t **)((uint8_t *)p + 0x25C) + 0xC4));
    void *r1 = func_020655dc(*(void **)(*(uint8_t **)((uint8_t *)p + 0x25C) + 0xC4), 4, 1);
    func_02056bc0(r6, r1);
    func_02056bc0(r6, r7);
    func_02056bc0((uint8_t *)p + 0x14, r6);
    func_ov012_021ce750((uint8_t *)p);
}
