#include "ffc/types.h"

typedef struct { uint8_t v; } Flag8;
typedef struct { uint32_t a, b; } Pair;

extern int func_0206cb98(void *obj);
extern void *func_020197b4(void *mgr, uint32_t id);
extern int func_0206cb74(void *obj);
extern void func_02009888(void *dst, uint32_t val, Flag8 arg);
extern void func_ov013_021be5b0(void *self, uint16_t v, int flag);
extern void func_ov013_021be658(void *self, uint16_t v, int flag);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *mgr, uint32_t id);
extern void func_02005988(void *buf, void *src);
extern void *func_02033094(void *obj, void *buf, int n, Pair p, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov013_021c42f0[2];
extern void *data_020b8e44;
extern uint32_t data_ov013_021c42f8[2];
extern uint32_t data_ov013_021c4300[2];

void func_ov013_021be468(uint8_t *self)
{
    uint8_t *node;
    void *r6;
    uint8_t c;
    Pair ab;
    uint32_t buf[3];
    uint32_t r7;
    uint32_t six;
    int flag;

    if (func_0206cb98(*(void **)(self + 0xf4)) != 0) {
        *(Pair *)(self + 0xb8) = *(Pair *)data_ov013_021c42f0;
        return;
    }

    node = func_020197b4(data_020b8e44, *(uint32_t *)(*(uint8_t **)(self + 0xc8) + 0xc));
    *(uint32_t *)(self + 0x114) = 6;
    if (node[6] != 0) {
        *(uint32_t *)(self + 0x114) = 12;
    }

    if (func_0206cb74(*(void **)(self + 0xf4)) == 0) {
        Flag8 f;
        uint32_t *q = (uint32_t *)(self + 0x10c);
        c = 0;
        f.v = c;
        func_02009888(q - 1, *q, f);
        func_ov013_021be5b0(self, *(uint16_t *)(node + 0xe), 0);
        func_ov013_021be658(self, *(uint16_t *)(node + 0x12), 0);
        if (node[6] != 0) {
            func_ov013_021be5b0(self, *(uint16_t *)(node + 0xe), 1);
            func_ov013_021be658(self, *(uint16_t *)(node + 0x12), 1);
        }
    }

    r7 = 0;
    flag = r7;
    r6 = func_0205681c(0xa4);
    if (r6 != 0) {
        ab.a = 0x80;
        ab.b = 0x60;
        func_02005988(buf, func_020159c8(data_020b8e44, 0x1be));
        r6 = func_02033094(r6, buf, 1, ab, 4, r7);
        flag = 1;
    }

    *(void **)(self + 0x118) = r6;
    if (flag != 0) {
        func_020059cc(buf);
    }
    func_02056bc0(self + 0x48, *(void **)(self + 0x118));

    *(Pair *)(self + 0xb8) = *(Pair *)data_ov013_021c42f8;
    *(Pair *)(self + 0xc0) = *(Pair *)data_ov013_021c4300;
}
