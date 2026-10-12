#include "ffc/types.h"

typedef struct Slot {
    uint8_t pad0[4];
    uint32_t active;
    int32_t limit;
    uint8_t pad1[0x18];
    uint32_t lo;
    uint32_t hi;
    uint32_t pad2;
} Slot;

typedef void (*SlotFn)(int, uint8_t *, int32_t, uint32_t);

extern int func_ov000_0215b6dc(int a);
extern void func_ov000_02159014(int code, uint32_t addr);
extern int func_02092a04(const uint8_t *a, const uint8_t *b, uint32_t n);
extern void func_ov000_02162674(uint8_t *p, int32_t len);
extern int func_02090410(const uint8_t *a, const uint8_t *b, uint32_t n);
extern void func_02084ca4(const uint8_t *src, uint32_t *dst, uint32_t n);
extern int func_ov000_0215b5f8(void);
extern int func_ov000_0215b4b0(void);
extern void func_ov000_021644a4(int slot, int i, uint8_t *p, int32_t len, int zero);
extern uint64_t func_020882cc(void);
extern const uint8_t data_ov000_0216b2c4[];
extern const uint8_t data_ov000_0216b2c0[];
extern uint8_t *data_ov000_0217096c;

void func_ov000_021646ec(int a, uint8_t *p0, int32_t len0)
{
    uint8_t *p = p0;
    int32_t len = len0;
    uint32_t mask;
    int idx;
    int flag;
    int found;
    uint8_t i;
    uint8_t *base;
    Slot *s;
    SlotFn fn;

    idx = func_ov000_0215b6dc(a);
    flag = 0;
    found = 0;
    if (idx == 0xff) {
        func_ov000_02159014(6, 0xfffe8298);
        return;
    }
    if ((uint32_t)len >= 0x14) {
        if (func_02092a04(p, data_ov000_0216b2c4, 4) == 0) {
            func_ov000_02162674(p, len);
            return;
        }
    }
    if (len >= 8) {
        if (func_02090410(p, data_ov000_0216b2c0, 3) == 0) {
            flag = 1;
        }
    }
    if (flag == 1) {
        idx = p[3];
        func_02084ca4(p + 4, &mask, 4);
        if (func_ov000_0215b5f8() == 0) {
            int cur = func_ov000_0215b4b0();
            found = 1;
            if (!(mask & (1u << cur))) {
                return;
            }
        } else {
            for (i = 0; i < 0x20; i++) {
                if (mask & (1u << i)) {
                    if (i == func_ov000_0215b4b0()) {
                        found = 1;
                    } else {
                        func_ov000_021644a4(idx, i, p, len, 0);
                    }
                }
            }
        }
        if (found == 0) {
            return;
        }
    }

    base = data_ov000_0217096c;
    s = (Slot *)(base + 0x38 * idx);
    if (flag == 1) {
        p += 8;
        len -= 8;
    }
    if (s->active == 0) {
        return;
    }
    if (s->limit < len) {
        return;
    }
    fn = *(SlotFn *)(base + 0x704);
    if (fn != 0) {
        fn(idx, p, len, *(uint32_t *)(base + 0x714));
    }
    if (*(uint32_t *)(data_ov000_0217096c + 0x708) != 0) {
        if (s->pad2 != 0) {
            uint64_t v = func_020882cc();
            s->lo = (uint32_t)v;
            s->hi = (uint32_t)(v >> 32);
        }
    }
}
