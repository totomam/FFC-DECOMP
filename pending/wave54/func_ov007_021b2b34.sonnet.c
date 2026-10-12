#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;

extern void func_02092784(void *dst, void *src, void *p);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern int func_ov007_021b2870(void *a);
extern void *func_0203b708(uint32_t size);
extern void *func_ov001_0218dde0(void *a, int idx);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021b2760(void *a, uint32_t v);
extern void *func_02073c00(uint32_t a, void *e, uint32_t b, uint32_t c);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *p, uint32_t n);
extern void func_02005988(void *p, void *n);
extern void *func_02033094(void *a, void *b, uint32_t c, P d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);

extern uint32_t data_ov007_021c60c8[2];
extern uint32_t data_ov007_021c60d8[];
extern void *data_020b8e44;
extern uint32_t data_ov007_021c60d0[2];

void func_ov007_021b2b34(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint8_t *e;
    uint8_t *obj;
    void *m;
    void *r;
    P lv;
    uint8_t buf[12];
    P pa;
    int flag;
    uint8_t c7;
    uint8_t *q;

    if (*(int32_t *)(p + 0x100) >= *(int32_t *)(p + 0xfc)) {
        P s = *(P *)data_ov007_021c60c8;
        *(P *)(p + 0x3114) = s;
        return;
    }

    *(int32_t *)(p + 0x108) = 1;
    func_02092784(p + 0x10c + *(int32_t *)(p + 0x100) * 0xb0, data_ov007_021c60d8, p + 0x108);
    *(uint32_t *)(p + 0x108) = (uint32_t)(func_0209a76c(*(uint32_t *)(p + 0x108), 0x64) >> 32);

    if (func_ov007_021b2870(p)) {
        (*(int32_t *)(p + 0x100))++;
        return;
    }

    {
        int32_t v = *(int32_t *)(p + 0x104);
        if (v > 0 && (uint32_t)(func_0209a76c(v, 3) >> 32) == 0) {
            void *t = func_0203b708(0x3c);
            func_02056bc0(func_ov001_0218dde0(p, 0), t);
        }
    }

    (*(int32_t *)(p + 0x104))++;
    {
        uint8_t *base = p + 0x10c;
        int32_t off = *(int32_t *)(p + 0x100) * 0xb0;
        func_ov007_021b2760(p, *(uint32_t *)(base + off + 0xac));
        e = base + off;
        r = func_02073c00(*(uint32_t *)(p + 0xb8), e, *(uint32_t *)(p + 0x2d0c), *(uint32_t *)(e + 0xac));
        func_02056bc0(func_ov001_0218dde0(p, 0), r);
    }

    obj = func_ov001_0218dde0(p, 3);
    c7 = obj[0x12];
    q = obj + 0x1c;
    if (c7) {
        func_0208763c(q);
    }
    flag = (*(void **)(obj + 0x14) == 0);
    if (c7) {
        func_02087678(q);
    }

    if (flag) {
        uint32_t z = 0;
        int built = 0;
        m = func_0205681c(0xa4);
        if (m) {
            lv.a = 0x80;
            lv.b = 0x60;
            void *tmp = func_020159c8(data_020b8e44, 0x60 + 0xe2);
            func_02005988(buf, tmp);
            m = func_02033094(m, buf, z, lv, 4, z);
            built = 1;
        }
        func_02056bc0(func_ov001_0218dde0(p, 3), m);
        if (built) {
            func_020059cc(buf);
        }
    }

    *(P *)(p + 0x3114) = *(P *)data_ov007_021c60d0;
}
