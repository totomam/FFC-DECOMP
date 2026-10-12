#include "ffc/types.h"

extern void *func_ov001_0218dde0(void *obj, int idx);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_ov001_0218ddf4(void *obj);
extern int func_ov001_0218e144(void);
extern int func_02055054(uint32_t v);
extern void func_ov001_0218e14c(void *p, int v);
extern uint32_t func_02056ac8(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, uint32_t b);
extern void *func_02033094(void *a, void *b, int c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_020059cc(void *p);
extern uint32_t func_02056aec(void *p);
extern void *func_0203b708(uint32_t size);
extern void *func_02008ce8(void *a, void *b, int c, uint32_t d);
extern uint32_t func_ov001_0218b650(void *a, uint32_t b, uint32_t c, int d);
extern void *func_0203b688(void);
extern void *func_0203b6fc(void);
extern uint32_t func_02056aa4(void);
extern uint32_t data_0213e098;
extern uint32_t data_020b8e44;
extern uint32_t data_ov001_021949e4[];
extern uint32_t data_020b93b8;

void func_ov001_0218e15c(uint8_t *obj)
{
    int flag = 1;
    int i;
    uint8_t *p;
    uint8_t *q;
    int r6;
    uint8_t tmp;

    for (i = 0; i < 4; i++) {
        if (i == 1) {
            continue;
        }
        p = (uint8_t *)func_ov001_0218dde0(obj, i);
        tmp = p[0x12];
        q = p + 0x1c;
        if (tmp) {
            func_0208763c(q);
        }
        r6 = 1;
        if (*(uint32_t *)(p + 0x14) != 0) {
            r6 = 0;
        }
        if (tmp) {
            func_02087678(q);
        }
        if (r6 == 0) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        void *n;
        void *g;
        void *h;
        void *r5;
        void *r6p;
        void *a;
        uint32_t v28 = 0x80;
        uint32_t v2c = 0x60;
        uint32_t buf[4];
        uint32_t sp14;
        uint32_t sp0c;
        uint32_t sp10;
        int ok;

        n = func_ov001_0218ddf4(obj);
        if (!func_ov001_0218e144()) {
            *(uint32_t *)(obj + 0xac) = 0;
            return;
        }
        *(int *)(obj + 0xac) += func_02055054(data_0213e098);
        if (*(int *)(obj + 0xac) <= 0x78) {
            return;
        }

        func_ov001_0218e14c(n, 0);
        func_ov001_0218dde0(obj, 1);
        a = (void *)(uintptr_t)func_02056ac8();
        func_02056bc0(obj + 0x14, a);

        n = func_0205681c(0xa4);
        ok = 0;
        if (n != 0) {
            func_020159c8((void *)data_020b8e44, 0x10b);
            func_02005988(buf, 0x10b);
            ok = 1;
            n = func_02033094(n, buf, 0, v28, v2c, 4, 0);
        }
        if (ok) {
            func_020059cc(buf);
        }
        func_02056bc0(obj + 0x48, n);
        sp0c = func_02056aec(n);
        sp10 = (uint32_t)func_0203b708(0xb4);
        r6p = func_0205681c(0x94);
        if (r6p != 0) {
            r6p = func_02008ce8(r6p, n, 0, *(uint32_t *)(obj + 0x98));
        }
        sp14 = func_ov001_0218b650((void *)data_020b93b8, data_ov001_021949e4[0], data_ov001_021949e4[1], 1);
        r5 = func_0205681c(0x94);
        if (r5 != 0) {
            r5 = func_02008ce8(r5, n, 0, *(uint32_t *)(obj + 0x98));
        }
        g = func_0203b688();
        func_02056bc0(g, r5);
        func_02056bc0(g, (void *)(uintptr_t)sp14);
        func_02056bc0(g, r6p);
        h = func_0203b6fc();
        func_02056bc0(h, g);
        func_02056bc0(h, (void *)(uintptr_t)sp10);
        func_02056bc0(obj + 0x14, h);
        func_02056bc0(obj + 0x14, (void *)(uintptr_t)sp0c);
        func_ov001_0218dde0(obj, 1);
        func_02056bc0(obj + 0x14, (void *)(uintptr_t)func_02056aa4());
        return;
    }

    *(uint32_t *)(obj + 0xac) = 0;
}
