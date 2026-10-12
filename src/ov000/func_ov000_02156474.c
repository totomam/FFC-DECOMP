#include "ffc/types.h"

extern void *func_02084b2c(void *dst, int c, uint32_t n);
extern int32_t func_ov000_02156ca8(uint8_t *self, uint8_t *p, int32_t v);
extern int32_t func_ov000_02156d60(uint8_t *self, int32_t v);
extern int32_t func_ov000_02156a60(uint8_t *self);

typedef struct {
    uint32_t w[7];
} Blk;

typedef int32_t (*Fn)(int32_t, int32_t);

int32_t func_ov000_02156474(uint8_t *self, uint32_t *param) {
    Fn fn = (Fn)param[3];
    int32_t r;

    func_02084b2c(self, 0, 0x1c50);
    *(int32_t *)(self + 0x1a6c) = -1;
    *(int32_t *)(self + 0x1a70) = -1;
    *(Blk *)(self + 0x1004) = *(Blk *)param;

    r = fn(0, 0xb68);
    *(int32_t *)(self + 0x1a08) = r;
    if (r == 0) {
        *(int32_t *)(self + 0x1020) = 1;
        return 1;
    }

    r = fn(0, 0x5ea);
    *(int32_t *)(self + 0x1a0c) = r;
    if (r == 0) {
        *(int32_t *)(self + 0x1020) = 1;
        return 1;
    }

    r = func_ov000_02156ca8(self, self + 0x1a44, *(int32_t *)(self + 0x100c));
    if (r == 0) {
        *(int32_t *)(self + 0x1020) = 1;
        return 1;
    }

    r = func_ov000_02156d60(self, (int32_t)param[0]);
    if (r == 0) {
        *(int32_t *)(self + 0x1020) = 1;
        return 1;
    }

    r = func_ov000_02156a60(self);
    *(int32_t *)(self + 0x1020) = r;
    if (r == 0) {
        *(uint8_t *)(self + 0x1000) = 0xff;
    }
    return *(int32_t *)(self + 0x1020);
}
