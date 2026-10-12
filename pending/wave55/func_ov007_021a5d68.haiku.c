#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Vec2;

extern void func_020559d4(void *p);
extern uint32_t func_0206cb98(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *heap, uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, Vec2 v, void *c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *obj);
extern void func_02056bc0(void *obj, void *node);
extern void func_02036e54(void *elem, uint32_t flag);
extern uint32_t func_0201f164(void *d);
extern void func_0201f0cc(void *d, uint32_t x, void *elem);
extern void *func_02033094(void *obj, void *p, uint32_t a, Vec2 v, uint32_t d, uint32_t e);
extern void *func_02056aec(void *obj);
extern void *func_02008ce8(void *obj, void *a, void *b, uint32_t c);
extern void *func_ov007_0219b460(void *d, uint32_t a, uint32_t b, uint32_t c);

extern void *data_020b8e44;
extern uint32_t data_ov007_021c4318[2];
extern void *data_020b93b8;
extern uint32_t data_ov007_021c4320[2];
extern uint32_t data_ov007_021c4328[2];

void func_ov007_021a5d68(void *self)
{
    uint8_t *a = (uint8_t *)self;
    uint32_t t1[4];
    uint32_t t2[3];
    uint32_t t3[3];
    Vec2 v1;
    Vec2 v2;
    Vec2 v3;
    uint32_t i;
    uint32_t zero;
    uint32_t flag;
    void *r4;
    void *r6;
    void *r7;
    void *s;
    void *h;

    func_020559d4(a + 0x80);
    if (func_0206cb98(*(void **)(a + 0xc0)) == 0) {
        return;
    }

    zero = 0;
    if (*(uint8_t *)(a + 0xf0)) {
        r4 = (void *)zero;
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            h = func_020159c8(data_020b8e44, 0x2c);
            func_02005988(t1, h);
            v1.x = 0x80;
            v1.y = 0x60;
            r6 = func_02032d24(r6, v1, t1, 4, zero);
            r4 = (void *)1;
        }
        if (r4 != 0) {
            func_020059cc(t1);
        }
        func_02056bc0(a + 0x14, r6);
        *(uint32_t *)(a + 0xb8) = data_ov007_021c4318[0];
        *(uint32_t *)(a + 0xbc) = data_ov007_021c4318[1];
        return;
    }

    for (i = 0; i < *(uint32_t *)(a + 0xd8); i++) {
        flag = (((uint32_t *)(*(uint8_t **)(a + 0xe0)))[i >> 5] & (1u << (i & 31))) != 0;
        func_02036e54(*(uint8_t **)(a + 0xd4) + i * 0x18, flag);
        func_0201f0cc(data_020b93b8, func_0201f164(data_020b93b8), *(uint8_t **)(a + 0xd4) + i * 0x18);
    }

    r4 = func_0205681c(0xa4);
    flag = 0;
    if (r4 != 0) {
        h = func_020159c8(data_020b8e44, 0x36);
        func_02005988(t2, h);
        v2.x = 0x80;
        v2.y = 0x60;
        flag = 1;
        r4 = func_02033094(r4, t2, zero, v2, 4, zero);
    }
    if (flag) {
        func_020059cc(t2);
    }
    func_02056bc0(a + 0x48, r4);
    s = func_02056aec(r4);

    r6 = func_0205681c(0x94);
    if (r6 != 0) {
        r6 = func_02008ce8(r6, r4, *(void **)(a + 0xc0), 0);
    }
    r7 = func_ov007_0219b460(data_020b93b8, data_ov007_021c4320[0], data_ov007_021c4320[1], 1);

    r4 = func_0205681c(0x94);
    if (r4 != 0) {
        r4 = func_02008ce8(r4, r4, *(void **)(a + 0xc0), 0);
    }
    func_02056bc0(a + 0x14, r4);
    func_02056bc0(a + 0x14, r7);
    func_02056bc0(a + 0x14, r6);
    func_02056bc0(a + 0x14, s);

    r6 = func_0205681c(0xb0);
    r4 = (void *)zero;
    if (r6 != 0) {
        h = func_020159c8(data_020b8e44, 0x2d);
        func_02005988(t3, h);
        v3.x = 0x80;
        v3.y = 0x60;
        r6 = func_02032d24(r6, v3, t3, 4, zero);
        r4 = (void *)1;
    }
    if (r4 != 0) {
        func_020059cc(t3);
    }
    func_02056bc0(a + 0x14, r6);
    *(uint32_t *)(a + 0xb8) = data_ov007_021c4328[0];
    *(uint32_t *)(a + 0xbc) = data_ov007_021c4328[1];
}
