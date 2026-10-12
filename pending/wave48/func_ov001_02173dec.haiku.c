#include "ffc/types.h"

extern int32_t func_ov001_02172124(void *ctx, uint32_t addr, int32_t n);
extern int32_t func_ov001_021721f8(void *ctx, uint32_t addr, int32_t n);

typedef struct Src {
    int32_t pad[2];
    int32_t off;
    int32_t total;
} Src;

typedef struct Obj {
    Src *src;
    int32_t pos;
} Obj;

int32_t func_ov001_02173dec(Obj *obj, void *ctx) {
    uint8_t buf[8];
    Src *src;
    int32_t total;
    int32_t r;
    int32_t n;

    src = obj->src;
    total = src->total;
    if (total == 0) {
        return 1;
    }
    if (*(int32_t *)((uint8_t *)ctx + 0x198) == 0) {
        for (;;) {
            r = func_ov001_02172124(ctx, src->off + obj->pos, total - obj->pos);
            if (r == -1) {
                return 0;
            }
            obj->pos += r;
            src = obj->src;
            total = src->total;
            if (total == obj->pos) {
                goto done;
            }
            if (r == 0) {
                return 2;
            }
        }
    }
    for (;;) {
        n = total - obj->pos;
        if (n >= 0x3f01) {
            n = 0x3f01;
        }
        r = func_ov001_021721f8(ctx, src->off + obj->pos, n);
        if (r == 0) {
            return 0;
        }
        obj->pos += n;
        src = obj->src;
        total = src->total;
        if (total == obj->pos) {
            goto done;
        }
        if (r != 1) {
            return 2;
        }
    }
done:
    if (*(int32_t *)((uint8_t *)*(void **)((uint8_t *)ctx + 0x164) + 0x14) == 0) {
        return 1;
    }
    buf[3] = 0;
    buf[4] = 0;
    buf[5] = 0;
    n = 4 - (src->total % 4);
    if (n != 4 && n > 0) {
        if (func_ov001_021721f8(ctx, (uint32_t)(buf + 3), n) != 0) {
            return 1;
        }
        return 0;
    }
    return 1;
}
