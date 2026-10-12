#include "ffc/types.h"

extern void *func_ov003_021464f4(void *ctx, uint32_t id);
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
    uint32_t i = 0;
    if (i >= s->count) return;
    {
        uint32_t inv = (flag == 0);
        do {
            Entry *e = (Entry *)((uint8_t *)s + s->off) + i;
            void *q;
            if (e != 0) {
                if (e->type == 0) {
                    if (e->a != 0) {
                        q = func_ov003_021464f4(ctx, e->a);
                        if (q != 0) func_ov003_02155bf0(q, flag);
                    }
                    if (e->b != 0) {
                        q = func_ov003_021464f4(ctx, e->b);
                        if (q != 0) func_ov003_02155bf0(q, inv);
                    }
                } else {
                    if (e->a != 0) {
                        q = func_ov003_021464f4(ctx, e->a);
                        if (q != 0) func_ov003_02155c9c(q, flag);
                    }
                }
            }
            i++;
        } while (i < s->count);
    }
}
