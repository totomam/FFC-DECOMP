#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;

extern uint32_t data_0213e098;
extern char data_020b0b68[];
extern char data_020b0b54[];
extern uint32_t data_ov013_021c41e8[2];
extern uint32_t data_ov013_021c41f0[2];
extern uint32_t data_ov013_021c41f8[2];
extern uint32_t data_ov013_021c4200[2];

extern uint32_t func_02055054(uint32_t v);
extern void func_0209a978(uint32_t a, uint32_t b);
extern void func_020212a4(void);
extern void func_ov013_021bd11c(void *p, uint32_t n);
extern void *func_02056aec(void *p);
extern uint32_t func_0203bf90(uint32_t n);
extern uint32_t func_0203bf7c(uint32_t n);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);

void func_ov013_021bd5b8(void *p)
{
    uint8_t *base = (uint8_t *)p;
    uint32_t state = *(uint32_t *)(base + 0xcc);
    uint32_t *q;
    uint8_t *l;
    uint32_t v, r7, s;
    void *r6;
    uint8_t *r5;
    uint32_t *d;
    uint32_t v1, v0;

    switch (state) {
    case 4:
    default:
        q = *(uint32_t **)(base + 0xc8);
        *q = 1;
        v = func_02055054(data_0213e098);
        func_0209a978(0x1e, v);
        func_020212a4();
        func_ov013_021bd11c(p, 3);
        r6 = func_02056aec(p);
        s = func_0203bf90(0x1e);
        r7 = func_0203bf7c(0x1e);
        r5 = (uint8_t *)func_0205681c(0x34);
        if (r5 != 0) {
            *(uint32_t *)(r5 + 0xc) &= ~0xffu;
            *(void **)r5 = data_020b0b68;
            func_02087620(r5 + 0x1c);
            r5[0x10] = (uint8_t)(r5[0x10] & ~0xffu);
            r5[0x11] = (uint8_t)(r5[0x11] & ~0xffu);
            r5[0x12] = (uint8_t)(r5[0x12] & ~0xffu);
            *(uint32_t *)(r5 + 0x14) = 0;
            *(uint8_t **)(r5 + 0x18) = r5 + 0x14;
            *(void **)r5 = data_020b0b54;
            r5[0x11] = (uint8_t)(1 | (r5[0x11] & ~0xffu));
        }
        func_02056bc0(r5, (void *)r7);
        func_02056bc0(r5, (void *)s);
        l = base + 0x14;
        func_02056bc0(l, r5);
        func_02056bc0(l, r6);
        return;
    case 0:
        q = *(uint32_t **)(base + 0xc8);
        *(uint8_t *)((uint8_t *)q + 0x5c) = 0;
        *(P *)(base + 0xb8) = *(P *)data_ov013_021c41e8;
        return;
    case 1:
        *(P *)(base + 0xb8) = *(P *)data_ov013_021c41f0;
        return;
    case 2:
        q = *(uint32_t **)(base + 0xc8);
        *(uint8_t *)((uint8_t *)q + 0x5c) = 1;
        *(P *)(base + 0xb8) = *(P *)data_ov013_021c41f8;
        return;
    case 3:
        q = *(uint32_t **)(base + 0xc8);
        *(uint8_t *)((uint8_t *)q + 0x5c) = 1;
        *(P *)(base + 0xb8) = *(P *)data_ov013_021c4200;
        return;
    }
}
