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
    int32_t r;
    int32_t n;
    uint8_t buf[8];
    uint8_t *p;

    if (obj->src->total == 0) {
        return 1;
    }
    if (*(int32_t *)((uint8_t *)ctx + 0x198) == 0) {
        for (;;) {
            r = func_ov001_02172124(ctx, obj->src->off + obj->pos, obj->src->total - obj->pos);
            if (r == -1) {
                return 0;
            }
            obj->pos += r;
            if (obj->src->total == obj->pos) {
                if (*(int32_t *)((uint8_t *)*(void **)((uint8_t *)ctx + 0x164) + 0x14) != 0) {
                p = buf + 3;
                p[0] = 0;
                p[1] = 0;
                p[2] = 0;
                n = 4 - (obj->src->total % 4);
                if (n != 4 && n > 0) {
                    if (func_ov001_021721f8(ctx, (uint32_t)p, n) == 0) {
                        return 0;
                    }
                }
                }
                return 1;
            }
            if (r == 0) {
                return 2;
            }
        }
    }
    for (;;) {
        n = obj->src->total - obj->pos;
        if (n >= 0x3f01) {
            n = 0x3f01;
        }
        r = func_ov001_021721f8(ctx, obj->src->off + obj->pos, n);
        if (r == 0) {
            return 0;
        }
        obj->pos += n;
        if (obj->src->total == obj->pos) {
            if (*(int32_t *)((uint8_t *)*(void **)((uint8_t *)ctx + 0x164) + 0x14) != 0) {
            p = buf;
            p[0] = 0;
            p[1] = 0;
            p[2] = 0;
            n = 4 - (obj->src->total % 4);
            if (n != 4 && n > 0) {
                if (func_ov001_021721f8(ctx, (uint32_t)p, n) == 0) {
                    return 0;
                }
            }
            }
            return 1;
        }
        if (r != 1) {
            return 2;
        }
    }
}
