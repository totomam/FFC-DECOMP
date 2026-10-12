#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;

extern void *data_020b93b8;
extern void *data_020b8e44;
extern P data_ov011_021cace8;

extern void func_02036750(void *p);
extern void func_0201f1f0(void *obj, uint32_t idx, void *buf);
extern void func_0201f1a8(void *obj, uint32_t idx, void *buf);
extern void func_020367a8(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void *func_02033094(void *a, void *b, void *c, P d, uint32_t e, uint32_t f);
extern void func_020059cc(void *p);
extern void func_02056bc0(void *obj, void *node);
extern void *func_02056aec(void *obj);
extern void *func_02008ce8(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_ov011_021be77c(void *obj, P a, uint32_t c);
extern int32_t func_020215a4(int32_t a, int32_t b);
extern void *func_0203bf90(uint32_t a);
extern void *func_0203bf7c(uint32_t a);
extern void *func_0203b6fc(void);

void func_ov011_021be614(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t obj[3];
    P pr;
    uint32_t sp0c;
    int32_t v10;
    uint32_t v14;
    uint8_t buf[0x58];
    uint8_t i;
    void *r4, *r5, *r6, *r1v;
    void **pdata;

    if (*(int32_t *)(p + 0x118) == 1) {
        pdata = &data_020b93b8;
        for (i = 0; i < 3; i++) {
            func_02036750(buf);
            func_0201f1f0(*pdata, i + 1, buf);
            func_0201f1a8(*pdata, i + 4, buf);
            func_020367a8(buf);
        }
        r6 = 0;
        r5 = 0;
        r4 = func_0205681c(0xa4);
        if (r4 != 0) {
            pr.x = 0x80;
            pr.y = 0x60;
            func_02005988(obj, func_020159c8(data_020b8e44, 0x36));
            r5 = 1;
            r4 = func_02033094(r4, obj, r6, pr, 4, 0);
        }
        if (r5) {
            func_020059cc(obj);
        }
        func_02056bc0((uint8_t *)p + 0x48, r4);
        sp0c = (uint32_t)func_02056aec(r4);
        r5 = func_0205681c(0x94);
        if (r5 != 0) {
            r5 = func_02008ce8(r5, r4, 0, 0);
        }
        r6 = func_ov011_021be77c(data_020b93b8, data_ov011_021cace8, 1);
        r1v = func_0205681c(0x94);
        if (r1v != 0) {
            r1v = func_02008ce8(r1v, r4, 0, 0);
        }
        { uint8_t *q14 = p + 0x14;
        func_02056bc0(q14, r1v);
        func_02056bc0(q14, r6);
        func_02056bc0(q14, r5);
        func_02056bc0(q14, (void *)sp0c); }
    }
    r6 = func_02056aec(p);
    v10 = func_020215a4(-1, 0x19);
    v14 = (uint32_t)func_0203bf90(0x1e);
    r4 = func_0203bf7c(0x1e);
    r5 = func_0203b6fc();
    func_02056bc0(r5, r4);
    func_02056bc0(r5, (void *)v14);
    func_02056bc0(r5, (void *)v10);
    void *q = p + 0x14;
    func_02056bc0(q, r5);
    func_02056bc0(q, r6);
}
