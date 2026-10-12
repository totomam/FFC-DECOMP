#include "ffc/types.h"

extern void func_02056c9c(void *self, int zero);
extern void func_02087620(void *object);
extern uint32_t data_020ae6d4[];
extern uint32_t data_ov013_021c41a8[];
extern uint32_t data_ov013_021c41c4[];
extern uint32_t data_ov013_021c41c8[];

void *func_ov013_021bd048(void *self, uint32_t arg)
{
    uint8_t *b = (uint8_t *)self;
    uint32_t *p;
    uint32_t *q;
    uint32_t *t;
    uint32_t *src;
    uint32_t v0;
    uint32_t v1;

    func_02056c9c(self, 0);
    p = (uint32_t *)(b + 0x80);
    *(uint32_t *)(b + 0x80) = (uint32_t)data_020ae6d4;
    q = (uint32_t *)((uint8_t *)p + 0x10);
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    q[1] = 0;
    q[2] = 0;
    func_02087620(p + 7);
    *(uint32_t *)b = (uint32_t)data_ov013_021c41a8;
    *(uint32_t *)(b + 0x80) = (uint32_t)data_ov013_021c41c4;
    *(uint32_t *)(b + 0xc8) = arg;
    p = (uint32_t *)(b + 0x108);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    q = (uint32_t *)(b + 0x120);
    *(uint32_t *)(b + 0x120) = 0;
    q[1] = 0;
    t = (uint32_t *)(b + 0x12c);
    q[2] = 0;
    *(uint32_t *)(b + 0x12c) = 0;
    t[1] = 0;
    t[2] = 0;
    src = data_ov013_021c41c8;
    v0 = src[0];
    v1 = src[1];
    *(uint32_t *)(b + 0xb8) = v0;
    *(uint32_t *)(b + 0xbc) = v1;
    return self;
}
