#include "ffc/types.h"

extern void *func_ov003_021464f4(void *ctx);
extern void func_ov003_02155bf0(void *p, uint32_t v);
extern void func_ov003_02155c9c(void *p, uint32_t v);

typedef struct {
    uint8_t type;
    uint8_t pad0;
    uint16_t a;
    uint16_t b;
    uint16_t pad1;
} Entry;

typedef struct {
    uint32_t pad[2];
    uint32_t count;
    uint32_t off;
} Blk;

void func_ov003_0214dbc8(void *ctx, Blk *s, uint32_t flag) {
    uint32_t i;
    uint32_t inv;

    if (flag == 0) {
        inv = 1;
    } else {
        inv = 0;
    }
    for (i = 0; i < s->count; i++) {
        Entry *e = (Entry *)((uint8_t *)s + s->off) + i;
        uint16_t a;
        uint16_t b;
        if (e == 0) {
            continue;
        }
        a = e->a;
        if (e->type == 0) {
            b = e->b;
            if (a != 0) {
                void *q = func_ov003_021464f4(ctx);
                if (q != 0) {
                    func_ov003_02155bf0(q, flag);
                }
            }
            if (b != 0) {
                void *q = func_ov003_021464f4(ctx);
                if (q != 0) {
                    func_ov003_02155bf0(q, inv);
                }
            }
        } else {
            if (a != 0) {
                void *q = func_ov003_021464f4(ctx);
                if (q != 0) {
                    func_ov003_02155c9c(q, flag);
                }
            }
        }
    }
}
