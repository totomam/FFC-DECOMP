#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_ov002_021b8250(uint32_t a, uint8_t *self, uint32_t idx, void *data, uint32_t flag);
extern uint32_t func_ov002_021b80e4(uint32_t a, uint8_t *self, uint32_t idx, void *data);
extern void func_020695ec(uint8_t *self, uint32_t obj);
extern void func_0200d5d4(void *object, uint32_t *slot, uint32_t value);
extern void func_ov002_021b81d8(uint32_t obj, uint32_t v);
extern void func_ov002_021b8e2c(uint8_t *self);
extern void func_02069320(uint32_t obj, uint32_t v);
extern void func_020697ac(uint8_t *self, uint32_t obj);
extern uint32_t func_ov002_021b9718(uint8_t *self, uint32_t idx, uint32_t v);
extern void func_02069670(uint8_t *self, uint32_t obj, uint32_t v, uint32_t w);
extern uint8_t data_ov002_021d62c8[];
extern uint8_t data_ov002_021d60a0[];
extern uint32_t data_ov002_021d6094[];

typedef struct { uint32_t *data; uint32_t n; uint32_t cap; } Vec;
static inline void vpush(Vec *v, uint32_t *slot) {
    if (v->n < v->cap) {
        uint32_t k = v->n;
        v->n = k + 1;
        v->data[k] = *slot;
    } else {
        uint8_t b = 0;
        func_0200d5d4(v, slot, b);
    }
}
int func_ov002_021b9514(uint8_t *p) {
    uint32_t i;
    uint8_t *data;
    uint32_t *slot;
    uint32_t r;
    uint32_t a;

    for (i = 0; i < 6; i++) {
        if (*(uint32_t *)(p + 0xe0) & (1u << i)) {
            continue;
        }
        data = data_ov002_021d62c8 + i * 28;
        if (i == 2 && *(uint32_t *)(p + 0xe8) == 0) {
            data = data_ov002_021d60a0;
        }
        slot = (uint32_t *)(p + 0xf8 + i * 4);
        if (*slot == 0) {
            r = 0;
            if (i == 5) {
                a = func_0205681c(0xb0);
                if (a) {
                    r = func_ov002_021b8250(a, p, i, data, *(uint32_t *)(p + 0xdc) == 5);
                }
            } else {
                a = func_0205681c(0xac);
                if (a) {
                    r = func_ov002_021b80e4(a, p, i, data);
                }
            }
            *slot = r;
            func_020695ec(p, *slot);
            vpush((Vec *)(p + 0x120), slot);
        }
        r = *slot;
        if (i == 1 || i == 3) {
            func_ov002_021b81d8(r, 1);
        }
    }

    func_ov002_021b8e2c(p);
    if (*(uint32_t *)(p + 0xf8)) {
        func_02069320(*(uint32_t *)(p + 0xf8), 2);
    }

    {
        uint32_t x = *(uint32_t *)(p + 0xdc);
        if (data_ov002_021d6094[1] != 7) {
            x = data_ov002_021d6094[1];
        }
        data_ov002_021d6094[1] = 7;
        if (*(uint32_t *)(p + 0xe0) & (1u << *(uint32_t *)(p + 0xdc))) {
            x = 4;
        }
        func_020697ac(p, *(uint32_t *)(p + 0xf8 + (x << 2)));
    }

    for (i = 0; i < 6; i++) {
        uint32_t obj = *(uint32_t *)(p + 0xf8 + i * 4);
        if (obj && i != 5) {
            uint32_t t = func_ov002_021b9718(p, i, 3);
            if (t) {
                func_02069670(p, obj, 3, t);
            }
            t = func_ov002_021b9718(p, i, 1);
            if (t) {
                func_02069670(p, obj, 1, t);
            }
        }
    }

    for (i = 0; i < 6; i++) {
        uint32_t obj = *(uint32_t *)(p + 0xf8 + i * 4);
        if (obj && i != 5) {
            func_02069670(p, obj, 4, *(uint32_t *)(p + 0x10c));
            func_02069670(p, obj, 2, *(uint32_t *)(p + 0x10c));
        }
    }
    return 1;
}
