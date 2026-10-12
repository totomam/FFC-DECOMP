#include "ffc/types.h"

extern void func_02054254(void);
extern void func_020543b8(void);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t arg);
extern void func_02005988(void *out, uint32_t value);
extern void *func_02032d24(void *node, uint32_t a, uint32_t b, void *buf, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *func_02056aec(void *object);
extern void *func_ov007_021a6d5c(void *obj, uint32_t a, uint32_t b);
extern void *func_02060634(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c43e0[];
extern void *data_0213df20;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t buf[3];
} Loc;

void func_ov007_021a6a34(uint8_t *self)
{
    Loc L;
    uint32_t cnt;
    void *node;
    void *r;
    void *ret;
    int flag;

    if (*(uint32_t *)(self + 0x80) == 0) {
        func_02054254();
        func_020543b8();
    }

    cnt = *(uint32_t *)(self + 0x80) + 1;
    *(uint32_t *)(self + 0x80) = cnt;

    if (cnt >= 0x12c) {
        uint32_t *pp = *(uint32_t **)(self + 0x84);
        *pp = 0;

        flag = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            uint32_t v = func_020159c8(data_020b8e44, 0x32);
            func_02005988(L.buf, v);
            L.a = 0x80;
            L.b = 0x60;
            node = func_02032d24(node, L.a, L.b, L.buf, 4, 0);
            flag = 1;
        }
        func_02056bc0(self + 0x14, node);
        if (flag) {
            func_020059cc(L.buf);
        }
        r = func_02056aec(self);
        {
            uint32_t *d = data_ov007_021c43e0;
            uint32_t a1 = *d++;
            uint32_t a2 = *d++;
            node = func_ov007_021a6d5c(*(void **)(self + 0x88), a1, a2);
        }
        ret = func_02060634(*(void **)((uint8_t *)*(void **)data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
        func_02056bc0(self + 0x14, ret);
        func_02056bc0(self + 0x14, node);
        func_02056bc0(self + 0x14, r);
    }
}
