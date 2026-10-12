#include "ffc/types.h"

typedef struct { uint32_t a, b; } S2;
#define FLD32(base, off) (*(uint32_t *)((uint8_t *)(base) + (off)))

extern void *data_020b93b8;
extern void *data_020b8e44;
extern S2 data_ov001_021948d4;
extern S2 data_ov001_021948dc;

extern void func_0201ffb8(void *, void *);
extern void func_0201ffa0(void *, void *);
extern void *func_02084b2c(void *, int, uint32_t);
extern void func_02093bc8(void *, void *);
extern void func_0201fd50(void *, void *);
extern void func_ov001_0218c510(void *);
extern void *func_0205681c(uint32_t);
extern void *func_020159c8(void *, int);
extern void func_02005988(void *, void *);
extern void *func_02033094(void *, void *, uint32_t, S2, uint32_t, uint32_t);
extern void func_020059cc(void *);
extern void func_02056bc0(void *, void *);
extern uint32_t func_02056aec(void *);
extern void *func_02008ce8(void *, void *, uint32_t, uint32_t);
extern uint32_t func_ov001_0218b650(void *, S2, uint32_t);
extern uint32_t func_0203c250(void);
extern uint32_t func_02061128(uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t func_0203c23c(void);
extern uint32_t func_0203b6fc(void);

void func_ov001_0218d158(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t buf[44];
    uint32_t cnt[4];
    uint32_t obj[3];
    S2 sx;
    uint32_t state;
    uint32_t f;
    int i;
    void *r5;
    void *r6;
    void *r7;
    void *x;
    uint32_t vv;
    uint32_t c5, c6, c7;
    uint8_t *s;

    func_0201ffb8(data_020b93b8, cnt);
    func_02084b2c(buf, 0, 0xb0);
    cnt[0]++;
    f = FLD32(p, 0x66c);
    if (f == 0) {
        cnt[1]++;
        state = 1;
    } else if (f == 1) {
        cnt[2]++;
        state = 2;
    } else {
        cnt[3]++;
        state = 3;
    }
    buf[0] = state;
    func_0201ffa0(data_020b93b8, cnt);

    func_02093bc8(&buf[1], p + 0x6e4);
    buf[6] = FLD32(p, 0x6fc);
    buf[7] = FLD32(p, 0x6f8);
    func_02093bc8(&buf[8], p + 0x700);

    for (i = 0; i < 5; i++) {
        uint8_t *a = p + i * 4;
        uint8_t *b = (uint8_t *)buf + i * 4;
        FLD32(b, 0x4c) = FLD32(a, 0x73c);
        FLD32(b, 0x68) = FLD32(a, 0x818);
        FLD32(b, 0x7c) = FLD32(a, 0x8e0);
        FLD32(b, 0x90) = FLD32(a, 0x8f4);
    }

    buf[24] = FLD32(p, 0x764);
    buf[25] = FLD32(p, 0x768);
    buf[41] = FLD32(p, 0x6d8);
    buf[42] = FLD32(p, 0x6dc);
    buf[43] = FLD32(p, 0x6e0);

    func_0201fd50(data_020b93b8, buf);
    func_ov001_0218c510(p);

    r7 = 0;
    r6 = 0;
    r5 = func_0205681c(0xa4);
    if (r5 != 0) {
        void *t;
        sx.a = 0x80;
        sx.b = 0x60;
        t = func_020159c8(data_020b8e44, 0x36);
        func_02005988(obj, t);
        r6 = (void *)1;
        r5 = func_02033094(r5, obj, 0, sx, 4, 0);
    }
    if (r6 != 0) {
        func_020059cc(obj);
    }

    func_02056bc0(p + 0x48, r5);
    vv = func_02056aec(r5);
    r6 = func_0205681c(0x94);
    if (r6 != 0) {
        r6 = func_02008ce8(r6, r5, 0, FLD32(p, 0x98));
    }

    r7 = (void *)(uintptr_t)func_ov001_0218b650(data_020b93b8, data_ov001_021948d4, 1);

    x = func_0205681c(0x94);
    {
        void *r1v = x;
        if (x != 0) {
            r1v = func_02008ce8(x, r5, 0, FLD32(p, 0x98));
        }
        s = p + 0x14;
        func_02056bc0(s, r1v);
        func_02056bc0(s, r7);
        func_02056bc0(s, r6);
        func_02056bc0(s, (void *)(uintptr_t)vv);
    }

    c7 = func_02061128(func_0203c250(), 0x20, 0, 0);
    c5 = func_02061128(func_0203c23c(), 0x20, 0, 0);
    c6 = func_0203b6fc();
    func_02056bc0((void *)(uintptr_t)c6, (void *)(uintptr_t)c5);
    func_02056bc0((void *)(uintptr_t)c6, (void *)(uintptr_t)c7);
    func_02056bc0(p + 0x14, (void *)(uintptr_t)c6);

    *(S2 *)(p + 0xb0) = data_ov001_021948dc;
}
