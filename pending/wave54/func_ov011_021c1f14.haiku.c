#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t data_ov011_021cad98[2];

extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern uint32_t func_0203bda0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02032640(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_ov011_021c2e64(void *self);
extern void func_ov009_0219a358(uint32_t v);
extern void func_020697ac(void *self);
extern void func_ov011_021c21fc(void *self);
extern void func_ov011_021c23bc(void *self);
extern void func_02035f58(void *s);
extern void func_ov009_021ad6ac(void *self, uint32_t idx, void *s);
extern void func_ov011_021c2600(void *self, uint8_t v, void *s);
extern void *func_02035fd0(void *object);
extern void func_ov011_021c26a0(void *self);
extern void func_ov009_0219a330(uint32_t v);

void func_ov011_021c1f14(void *self, uint32_t idx)
{
    uint8_t *p = (uint8_t *)self;
    int32_t state = *(int32_t *)(p + 0x2bc);
    uint32_t sbuf[24];
    uint32_t r;

    if (state < 0xb) {
        return;
    }
    switch (state) {
    case 0xb:
        p[0x27a] = (p[0x27b] == 0) ? 2 : 3;
        r = func_020159c8(data_020b8e44, 0xb1);
        *(uint32_t *)(p + 0x174) = func_0203bda0(data_ov011_021cad98[0], data_ov011_021cad98[1], r, 4, 0, 0);
        func_02032640(*(uint32_t *)(p + 0x174), 1);
        func_02056bc0(p + 0x48, *(uint32_t *)(p + 0x174));
        func_ov011_021c2e64(self);
        func_ov009_0219a358(*(uint32_t *)(p + 0xec + idx * 4));
        *(uint32_t *)(p + 0x33c) = *(uint32_t *)(p + 0xd8);
        func_020697ac(self);
        break;
    case 0xc:
    case 0xd:
        break;
    case 0xe:
        func_02035f58(sbuf);
        func_ov009_021ad6ac(self, idx, sbuf);
        func_ov011_021c2600(self, p[0x279], sbuf);
        func_02035fd0(sbuf);
        break;
    case 0xf:
        func_ov011_021c26a0(self);
        break;
    case 0x10:
        func_ov011_021c21fc(self);
        break;
    case 0x11:
        func_ov011_021c23bc(self);
        break;
    default:
        if (state == -2) {
            func_ov009_0219a330(*(uint32_t *)(p + 0xec + idx * 4));
        }
        break;
    }
}
