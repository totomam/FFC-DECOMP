#include "ffc/types.h"

extern void func_02091a24(const void *);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t);
extern void *func_0205327c(void *destination, const void *source);
extern void func_02052be0(void);
extern void func_02052d10(void *, void *);
extern void func_0201a058(void *, const void *);
extern void func_020095b8(void *, const void *);
extern void func_020258b4(void *, void *);
extern void func_02056844(void *);
extern uint8_t data_ov003_0217a200[];
extern uint8_t data_ov003_0217a058[];
extern uint8_t data_020ad89c[];

#define W(b, o) (*(uint32_t *)((uint8_t *)(b) + (o)))
#define B(b, o) (*(uint8_t *)((uint8_t *)(b) + (o)))

void *func_ov003_0215baf0(uint32_t *p, uint32_t *a, int flag2, int flag3, uint8_t *s)
{
    uint8_t *obj;
    uint8_t *d;
    uint8_t *q;
    uint8_t *r4;
    uint8_t *ret;
    uint8_t * volatile pp;

    if (p[0] == 0xFFFFFFFF) {
        func_02091a24(data_ov003_0217a200);
        func_0208f42c();
    }
    obj = (uint8_t *)func_0205681c(0xb8);
    if (obj == 0) {
        func_02091a24(data_ov003_0217a058);
        func_0208f42c();
    }
    ret = obj;
    pp = ((uint8_t *)p + 4);
    d = obj + 0xc;
    if (d != 0) {
        W(d, 0) = W(s, 0);
        W(d, 4) = (uint32_t)data_020ad89c;
        q = d + 4;
        func_0205327c(q + 4, s + 8);
        W(q, 8) = W(s, 0xc);
        W(q, 0xc) = W(s, 0x10);
        B(q, 0x10) = B(s, 0x14);
        if (W(q, 8) != 0) {
            func_02052be0();
            if (B(q, 0x10) != 0) {
                func_02052d10((void *)W(q, 8), (void *)W(q, 0xc));
            }
        }
        func_0201a058(q + 0x14, s + 0x18);
        W(q, 0x3c) = W(s, 0x40);
        W(q, 0x40) = W(s, 0x44);
        B(q, 0x44) = B(s, 0x48);
        if (W(q, 0x3c) != 0) {
            func_02052be0();
            if (B(q, 0x44) != 0) {
                func_02052d10((void *)W(q, 0x3c), (void *)W(q, 0x40));
            }
        }
        W(q, 0x48) = W(s, 0x4c);
        W(q, 0x4c) = W(s, 0x50);
        B(q, 0x50) = B(s, 0x54);
        if (W(q, 0x48) != 0) {
            func_02052be0();
            if (B(q, 0x50) != 0) {
                func_02052d10((void *)W(q, 0x48), (void *)W(q, 0x4c));
            }
        }
        W(q, 0x54) = W(s, 0x58);
        W(q, 0x58) = W(s, 0x5c);
        B(q, 0x5c) = B(s, 0x60);
        if (W(q, 0x54) != 0) {
            func_02052be0();
            if (B(q, 0x5c) != 0) {
                func_02052d10((void *)W(q, 0x54), (void *)W(q, 0x58));
            }
        }
        W(q, 0x60) = W(s, 0x64);
        W(q, 0x64) = W(s, 0x68);
        B(q, 0x68) = B(s, 0x6c);
        if (W(q, 0x60) != 0) {
            func_02052be0();
            if (B(q, 0x68) != 0) {
                func_02052d10((void *)W(q, 0x60), (void *)W(q, 0x64));
            }
        }
        W(q, 0x6c) = W(s, 0x70);
        W(q, 0x70) = W(s, 0x74);
        W(q, 0x74) = W(s, 0x78);
        W(q, 0x78) = W(s, 0x7c);
        W(q, 0x7c) = W(s, 0x80);
        W(q, 0x80) = W(s, 0x84);
        W(q, 0x84) = W(s, 0x88);
        W(q, 0x88) = W(s, 0x8c);
        W(q, 0x8c) = W(s, 0x90);
        W(q, 0x90) = W(s, 0x94);
        W(q, 0x94) = W(s, 0x98);
        func_020095b8(q + 0x98, s + 0x9c);
        B(q, 0xa4) = B(s, 0xa8);
    }
    r4 = ret;
    ret = 0;
    W(r4, 4) = 0;
    W(r4, 0) = 0;
    if (r4 + 8 != 0) {
        W(r4, 8) = (uint32_t)a;
    }
    if (flag2) {
        a[0] = (uint32_t)r4;
    } else {
        a[1] = (uint32_t)r4;
    }
    p[0] = p[0] + 1;
    func_020258b4(r4, (void *)p[1]);
    if (flag3) {
        p[3] = (uint32_t)r4;
    }
    if (ret != 0) {
        func_02056844(ret);
    }
    return r4;
}
