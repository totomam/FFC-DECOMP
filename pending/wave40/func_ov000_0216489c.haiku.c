#include "ffc/types.h"

extern uint32_t func_ov000_0216443c(uint32_t idx);
extern void func_ov000_02159014(uint32_t a, uint32_t b);
extern void func_02084ca4(uint8_t *dst, uint8_t *src, uint32_t n);
extern uint64_t func_020882cc(void);
extern uint8_t *data_ov000_0217096c;

typedef struct {
    uint8_t *base;
} Dummy;

void func_ov000_0216489c(uint32_t idx, uint8_t *dst, uint32_t n)
{
    uint8_t *e;
    uint32_t cur;
    uint32_t sz;

    e = data_ov000_0217096c + idx * 0x38;
    if (func_ov000_0216443c(idx) == 2) {
        if ((int32_t)(*(int32_t *)(e + 0x10) + n) > *(int32_t *)(e + 0x8)) {
            func_ov000_02159014(6, 0xfffe82ac);
            return;
        }
        func_02084ca4(dst, *(uint8_t **)(e + 0x4) + *(int32_t *)(e + 0x10), n);
    }

    cur = *(uint32_t *)(e + 0x10) + n;
    *(uint32_t *)(e + 0x10) = cur;
    sz = *(uint32_t *)(e + 0x18);
    if (cur == sz) {
        *(uint8_t *)(e + 0x1d) = 1;
        *(uint32_t *)(e + 0x10) = 0;
        *(uint32_t *)(e + 0x18) = 0;
        {
            void (*cb)(uint32_t, void *, uint32_t, void *) =
                (void (*)(uint32_t, void *, uint32_t, void *))*(uint32_t *)(data_ov000_0217096c + 0x704);
            if (cb != 0) {
                cb(idx, *(void **)(e + 0x4), sz, *(void **)(data_ov000_0217096c + 0x714));
            }
        }
    }

    if (*(uint32_t *)(data_ov000_0217096c + 0x708) != 0 && *(uint32_t *)(e + 0x2c) != 0) {
        uint64_t r = func_020882cc();
        *(uint32_t *)(e + 0x24) = (uint32_t)r;
        *(uint32_t *)(e + 0x28) = (uint32_t)(r >> 32);
    }
}
