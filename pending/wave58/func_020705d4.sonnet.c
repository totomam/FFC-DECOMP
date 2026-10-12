#include "ffc/types.h"

extern void *func_0205681c(uint32_t id);
extern void *func_0206c2b0(void *a, void *b, int c, int d, int e, int f, int g, int h);
extern void func_02056bc0(void *object, void *node);
extern void *func_0206ce28(void *a, void *b);
extern void *func_0206ccd4(void *a);
extern void *func_02056aec(void *a);
extern void *func_0206cbf4(void *a);
extern int func_0206cb98(void *a);
extern void func_0206fc10(void *a);
extern void func_02088b50(void *a);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern int func_ov006_0219c210(uint32_t a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern int func_ov006_0219c3b0(uint32_t a, uint32_t b);
extern void func_02199640(void *a);
extern void func_ov006_0219b48c(void *a, uint32_t b);
extern int func_ov006_0219c5e8(uint32_t a);
extern void func_0206fd00(void);
extern void func_02070518(void);
extern uint8_t data_020b2070[];

void func_020705d4(uint8_t *self) {
    uint32_t state = *(uint32_t *)(self + 0x88);
    *(uint32_t *)(self + 0x88) = *(uint32_t *)(self + 0x88) + 1;

    switch (state) {
    case 0: {
        void *r1 = func_0205681c(0x3228);
        void *p = r1;
        if (p != 0) {
            r1 = func_0206c2b0(p, *(void **)(*(uint8_t **)(self + 0x80) + 0x44), 2, 2,
                               0x10000, -1, -1, 0x10000);
        }
        *(void **)(self + 0x84) = r1;
        func_02056bc0(self + 0x48, r1);
        {
            void *o84 = *(void **)(self + 0x84);
            void *r4 = func_0206ce28(o84, (uint8_t *)*(void **)(self + 0x80) + 0x4e);
            void *r0 = func_0206ccd4(*(void **)(self + 0x84));
            uint8_t *n = self + 0x14;
            func_02056bc0(n, r0);
            func_02056bc0(n, r4);
        }
        return;
    }
    case 1: {
        void *r6 = func_02056aec(*(void **)(self + 0x84));
        void *r1 = func_0206cbf4(*(void **)(self + 0x84));
        uint8_t *n = self + 0x14;
        func_02056bc0(n, r1);
        func_02056bc0(n, r6);
        if (func_0206cb98(*(void **)(self + 0x84)) == 0) {
            return;
        }
        func_0206fc10(*(void **)(self + 0x80));
        {
            void *x = func_02056aec(self);
            func_02056bc0(self + 0x14, x);
        }
        return;
    }
    case 2: {
        uint8_t buf[0x6c];
        uint8_t *t1 = buf + 0x14;
        uint8_t *t2 = buf + 0x18;
        uint8_t *o80;
        uint32_t r;

        func_02088b50(t1 + 2);
        func_02084ca4(t2 + 2, buf + 2, (uint32_t)(*(uint16_t *)(buf + 0x30)) << 1);
        buf[1] = (uint8_t)*(uint16_t *)(buf + 0x30);
        buf[0] = (uint8_t)((buf[0] & ~0xf) | (buf[0x17] & 0xf));
        buf[0] = (uint8_t)(buf[0] & ~0xf0);

        o80 = *(uint8_t **)(self + 0x80);
        r = func_ov006_0219c210(*(uint32_t *)(o80 + 0x50), buf, *(uint32_t *)(o80 + 0x44),
                                0x10000, *(uint32_t *)(o80 + 0x54));
        if (r != 0) {
            func_0206fc10(*(void **)(self + 0x80));
            *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
            return;
        }

        *(uint32_t *)(*(uint8_t **)(self + 0x80) + 0x40) = 1;
        if (func_ov006_0219c3b0(0x1fe, (uint16_t)(*(uint32_t *)(*(uint8_t **)(self + 0x80) + 0x48) - 1)) == 0) {
            func_0206fc10(*(void **)(self + 0x80));
            *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
            return;
        }

        func_02199640((void *)func_0206fd00);
        func_ov006_0219b48c((void *)func_02070518, 1);

        if (func_ov006_0219c5e8(*(uint16_t *)((uint8_t *)*(void **)(self + 0x80) + 0x4e)) != 0) {
            func_0206fc10(*(void **)(self + 0x80));
            *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
            return;
        }

        {
            void *r4 = func_02056aec(self);
            uint8_t *n = (uint8_t *)func_0205681c(0x1c);
            if (n != 0) {
                uint32_t r3 = *(uint32_t *)(self + 0x80);
                uint32_t r2 = *(uint32_t *)(n + 0xc);
                r2 &= ~0xffu;
                *(uint32_t *)(n + 0xc) = r2;
                *(uint32_t *)n = (uint32_t)data_020b2070;
                *(uint32_t *)(n + 0x14) = r3;
                *(uint32_t *)(n + 0x18) = 2;
            }
            uint8_t *q = self + 0x14;
            func_02056bc0(q, n);
            func_02056bc0(q, r4);
        }
        return;
    }
    default:
        return;
    }
}
