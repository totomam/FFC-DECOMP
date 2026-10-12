#include "ffc/types.h"

extern int func_ov000_02168768(void *obj);
extern void *func_ov000_0216876c(void *obj, int idx);
extern int func_ov001_02180868(uint32_t x, uint32_t y);
extern int func_ov001_0217fdf8(void *p);
extern void func_ov000_021687e0(void *obj, void *arg, void *cb);
extern void func_ov001_0217fe28(void *p, uint32_t a, int limit);
extern int func_ov001_02181aa0(void *p, uint32_t a, uint32_t b);
extern void func_ov001_02180d4c(void);

typedef struct {
    uint32_t f0;
    int limit;
    uint32_t a;
    uint16_t id;
} Local;

int func_ov001_02180d58(uint8_t *self, uint32_t a, uint16_t id, uint32_t b, int limit, int *out)
{
    Local loc;
    int n, i;
    uint16_t *el;
    uint16_t *prev;

    n = func_ov000_02168768(*(void **)(self + 0x5c));
    for (i = 0; i < n; i++) {
        el = (uint16_t *)func_ov000_0216876c(*(void **)(self + 0x5c), i);
        if (el[6] == id) {
            *out = 0;
            return 1;
        }
        if (func_ov001_02180868(el[6], id) > 0) {
            break;
        }
    }

    if (func_ov001_0217fdf8(self + 0x44) < limit) {
        *out = 1;
        return 1;
    }

    loc.f0 = *(uint32_t *)(self + 0x4c);
    loc.limit = limit;
    loc.a = a;
    loc.id = id;
    func_ov000_021687e0(*(void **)(self + 0x5c), &loc, func_ov001_02180d4c);

    if (n + 1 != func_ov000_02168768(*(void **)(self + 0x5c))) {
        *out = 1;
        return 1;
    }

    func_ov001_0217fe28(self + 0x44, b, limit);

    if (n == 0) {
        if (func_ov001_02181aa0(self, *(uint16_t *)(self + 0x66), (uint16_t)(id - 1)) != 0) {
            goto fail;
        }
        return 0;
    }

    el = (uint16_t *)func_ov000_0216876c(*(void **)(self + 0x5c), n);
    if (el[6] != id) {
        goto fail;
    }
    prev = (uint16_t *)func_ov000_0216876c(*(void **)(self + 0x5c), n - 1);
    if ((uint16_t)func_ov001_02180868(id, prev[6]) <= 1) {
        goto fail;
    }
    if (func_ov001_02181aa0(self, (uint16_t)(prev[6] + 1), (uint16_t)(id - 1)) != 0) {
        goto fail;
    }
    return 0;

fail:
    *out = 0;
    return 1;
}
