#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Vec2;
typedef struct { uint32_t a; uint32_t b; uint32_t c; } Obj12;
typedef struct { void *vt; uint8_t rest[0x200]; } Big;

extern void *func_0202157c(uint32_t a, uint32_t b);
extern void *func_0203b708(uint32_t n);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *p, uint32_t idx);
extern void func_02005988(Obj12 *o, void *src);
extern void *func_02032d24(void *obj, Vec2 v, Obj12 *o, uint32_t a, uint32_t b);
extern void *func_02076444(void *p);
extern void *func_ov001_0218ece4(Big *obj, void *a, void *b);
extern void func_020059cc(Obj12 *o);
extern void *func_02056aec(void *owner);
extern void *func_02056b10(void *owner);
extern void *data_020b8e44;

void func_ov007_021a1824(void *self) {
    uint8_t *s = (uint8_t *)self;
    void *ov;
    void *r7;
    void *al;
    void *tmp;
    uint32_t sz; int used;
    Obj12 o1, o2, o3;
    Vec2 v1, v2, v3;
    Big bigobj;

    sz = 0xb0;
    r7 = func_0202157c(0x45, 0);
    void *k4 = func_0203b708(0x10);
    void *k6 = func_0203b688();
    func_02056bc0(k6, k4);
    func_02056bc0(k6, r7);
    func_02056bc0(s + 0x48, k6);

    if (s[0x84] != 0) {
        if (*(void **)(s + 0x80) == 0) {
            used = 0;
            r7 = func_0205681c(sz);
            if (r7 != 0) {
                func_02005988(&o1, func_020159c8(data_020b8e44, sz + 0x8f));
                v1.x = 0x80;
                v1.y = 0x60;
                used = 1;
                r7 = func_02032d24(r7, v1, &o1, 4, 0);
            }
            func_02056bc0(s + 0x14, r7);
            if (used) {
                func_020059cc(&o1);
            }
        } else {
            tmp = *(void **)(s + 0x80);
            bigobj.vt = (void *)0x02194a64;
            ov = func_ov001_0218ece4(&bigobj, func_02076444(tmp), tmp);
            used = 0;
            r7 = func_0205681c(sz);
            if (r7 != 0) {
                func_02005988(&o2, ov);
                v2.x = 0x80;
                v2.y = 0x60;
                used = 1;
                r7 = func_02032d24(r7, v2, &o2, 4, 0);
            }
            func_02056bc0(s + 0x14, r7);
            if (used) {
                func_020059cc(&o2);
            }
        }

        used = 0;
        r7 = func_0205681c(sz);
        if (r7 != 0) {
            func_02005988(&o3, func_020159c8(data_020b8e44, sz + 0x6d));
            v3.x = 0x80;
            v3.y = 0x60;
            used = 1;
                r7 = func_02032d24(r7, v3, &o3, 4, 0);
        }
        func_02056bc0(s + 0x14, r7);
        if (used) {
            func_020059cc(&o3);
        }
    }

    k4 = func_02056aec(s);
    k6 = func_02056b10(s + 0x48);
    {uint8_t *q = s + 0x14;
    func_02056bc0(q, k6);
    func_02056bc0(q, k4);}
}
