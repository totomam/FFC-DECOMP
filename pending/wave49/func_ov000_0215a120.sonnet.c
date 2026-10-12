#include "ffc/types.h"

typedef struct { uint8_t pad0[0x14]; int32_t count; uint8_t *items; uint8_t pad1[1]; uint8_t flag; } L;
typedef struct { uint8_t pad[0xc]; L *list; } G;
extern G data_ov000_0217004c;
extern const uint8_t data_ov000_0216af88[];

extern int32_t func_ov000_02154ed0(uint8_t *e);
extern uint8_t *func_ov000_0215a638(void);
extern void func_ov000_02155498(uint8_t *a, uint8_t *e, uint8_t *buf);
extern int32_t func_02092948(uint8_t *a, uint8_t *b);
extern int32_t func_ov000_02154e58(uint8_t *e);
extern void func_ov001_02175c78(uint8_t *ctx, uint32_t id);
extern void func_ov000_02155478(uint8_t *e, uint32_t id);
extern void func_02086b04(uint8_t *buf, int32_t n, const uint8_t *fmt, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov000_021553c4(uint8_t *t, uint8_t *e);
extern int32_t func_02090410(const uint8_t *a, const uint8_t *b, uint32_t n);
extern void func_ov000_02159ea4(uint32_t id);
extern int32_t func_ov000_02159dd8(uint8_t *base, int32_t count, uint32_t id);
extern void func_ov000_02154f24(uint8_t *e, int32_t v);
extern void func_ov000_02154f48(uint8_t *e, int32_t v);
extern void func_ov000_02159a9c(int32_t idx);
extern void func_ov001_02175cb4(uint8_t *ctx, uint32_t id);

void func_ov000_0215a120(uint8_t *ctx, uint32_t *p) {
    uint8_t buf2[4];
    uint8_t buf[0x18];
    uint8_t *pa;
    uint8_t *pb;
    uint32_t any = 0;
    uint32_t flag = 0;
    int32_t i;
    int32_t idx;
    uint8_t *e;

    if (p[0] != 0) {
        return;
    }
    i = any;
    if (data_ov000_0217004c.list->count > 0) {
        pa = (uint8_t *)p + 0x97;
        pb = (uint8_t *)p + 0x8e;
        do {
            uint32_t off = (uint32_t)i * 12;
            if (func_ov000_02154ed0((data_ov000_0217004c.list->items + off)) == 1) {
                func_ov000_02155498(func_ov000_0215a638(), (data_ov000_0217004c.list->items + off), buf + 1);
                if (func_02092948(buf + 1, pb) != 0) {
                    continue;
                }
                if (func_ov000_02154e58((data_ov000_0217004c.list->items + off)) != 0) {
                    flag = 1;
                }
                func_ov001_02175c78(ctx, p[1]);
                func_ov000_02155478((data_ov000_0217004c.list->items + off), p[1]);
                any = 1;
            } else {
                if (func_ov000_02154ed0((data_ov000_0217004c.list->items + off)) == 3 || func_ov000_02154ed0((data_ov000_0217004c.list->items + off)) == 2) {
                    uint32_t v = *(uint32_t *)(func_ov000_0215a638() + 0x24);
                    func_02086b04(buf2, 5, data_ov000_0216af88, (uint8_t)(v >> 24), (uint8_t)(v >> 16),
                                  (uint8_t)(v >> 8), (uint8_t)v);
                    if (p[1] != func_ov000_021553c4(func_ov000_0215a638(), (data_ov000_0217004c.list->items + off))) {
                        continue;
                    }
                    if (func_02090410(buf2, pa, 4) != 0) {
                        continue;
                    }
                    if (func_ov000_02154e58((data_ov000_0217004c.list->items + off)) != 0) {
                        flag = 1;
                    }
                    func_ov001_02175c78(ctx, p[1]);
                    any = 1;
                }
            }
        } while (++i < data_ov000_0217004c.list->count);
    }
    if (any != 0) {
        G *g;
        uint32_t o;
        uint8_t one;
        func_ov000_02159ea4(p[1]);
        g = &data_ov000_0217004c;
        idx = func_ov000_02159dd8(g->list->items, g->list->count, p[1]);
        o = (uint32_t)idx * 12;
        func_ov000_02154f24(g->list->items + o, one = 1);
        if (func_ov000_02154e58(g->list->items + o) == 0) {
            return;
        }
        func_ov000_02154f48(g->list->items + o, one);
        if (flag != 0) {
            return;
        }
        func_ov000_02159a9c(idx);
        g->list->flag = one;
    } else {
        func_ov001_02175cb4(ctx, p[1]);
    }
}
