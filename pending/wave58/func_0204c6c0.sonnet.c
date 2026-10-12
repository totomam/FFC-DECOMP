#include "ffc/types.h"

extern void *func_0204de50(void *ctx);
extern void *func_0204de80(void *a);
extern void **func_0204de78(void *a);
extern uint32_t func_0204de7c(void *a);
extern void *func_0204de70(void *a);
extern uint32_t func_0204aca8(uint32_t name);
extern int32_t func_0204bfd4(void *b, void *o, uint32_t name, uint32_t *total, uint32_t one);
extern uint32_t func_0204aef4(void *buf, uint32_t len);
extern int32_t func_0204c19c(void *ctx, const void *src, uint32_t len);
extern int32_t func_0204c058(void *b, void *o, uint32_t off, uint32_t name, uint32_t x, void *y, uint32_t z);

extern uint8_t data_0209e5ab[];
extern uint8_t data_020b022c[];
extern uint8_t data_020b02a0[];
extern uint8_t data_0209e584[];
extern uint8_t data_020b02b4[];
extern uint8_t data_0209e60c[];
extern uint8_t data_020b02b8[];

struct Node {
    struct Node *f0;
    struct Node *next;
    uint32_t name;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
};

struct Obj {
    uint8_t pad[0x34];
    struct Node *list;
    uint8_t hdr[0x14];
};

int32_t func_0204c6c0(void *ctx) {
    uint8_t *p18;
    uint8_t *h;
    uint32_t v10;
    void *v0c;
    uint32_t total;
    uint8_t buf[12];
    int32_t r;
    uint32_t len;
    uint32_t sz;
    void *a = func_0204de50(ctx);
    void *b = func_0204de80(a);
    struct Obj *o = *(struct Obj **)((uint8_t *)*func_0204de78(a) + 0xc);
    v10 = func_0204de7c(a);
    v0c = func_0204de70(a);
    struct Node *n;

    total = 0;
    n = o->list;
    if (n != 0) {
        do {
            total += 0x16;
            total += func_0204aca8(n->name) + 0x29;
            if (n->f14 != 0) {
                total += 0x4b;
            }
            total += 2;
            if (n->fc == 0) {
                if (!func_0204bfd4(b, o, n->name, &total, 1)) {
                    return 3;
                }
            } else {
                total += n->f10;
            }
            total += 2;
            if (n == o->list->f0) {
                break;
            }
            n = n->next;
        } while (n != 0);
    }

    total += 0x18;
    sz = func_0204aef4(buf, total);

    if ((r = func_0204c19c(ctx, data_0209e5ab, 0x2c)) != 0) return r;
    if ((r = func_0204c19c(ctx, (uint8_t *)o + 0x3a, 0x12)) != 0) return r;
    if ((r = func_0204c19c(ctx, data_020b022c, 2)) != 0) return r;
    if ((r = func_0204c19c(ctx, data_020b02a0, 0x10)) != 0) return r;
    if ((r = func_0204c19c(ctx, buf, sz)) != 0) return r;
    if ((r = func_0204c19c(ctx, data_020b022c, 2)) != 0) return r;
    if ((r = func_0204c19c(ctx, data_020b022c, 2)) != 0) return r;

    n = o->list;
    if (n != 0) {
        p18 = (uint8_t *)ctx + 0x324;
        do {
            h = (uint8_t *)o;
            h += 0x38;
            if ((r = func_0204c19c(ctx, h, 0x14)) != 0) return r;
            if ((r = func_0204c19c(ctx, data_020b022c, 2)) != 0) return r;
            if ((r = func_0204c19c(ctx, data_0209e584, 0x26)) != 0) return r;
            len = func_0204aca8(n->name);
            if ((r = func_0204c19c(ctx, (void *)n->name, len)) != 0) return r;
            if ((r = func_0204c19c(ctx, data_020b02b4, 3)) != 0) return r;
            if (n->f14 != 0) {
                if ((r = func_0204c19c(ctx, data_0209e60c, 0x4b)) != 0) return r;
            }
            if ((r = func_0204c19c(ctx, data_020b022c, 2)) != 0) return r;
            if (n->fc == 0) {
                if ((r = func_0204c058(b, o, v10 + 0x100, n->name,
                                       *(uint32_t *)((uint8_t *)v0c + 0xc), p18, 1)) != 0) {
                    return r;
                }
            } else {
                if ((r = func_0204c19c(ctx, (void *)n->fc, n->f10)) != 0) return r;
            }
            if ((r = func_0204c19c(ctx, data_020b022c, 2)) != 0) return r;
            if (n == o->list->f0) {
                break;
            }
            n = n->next;
        } while (n != 0);
    }

    if ((r = func_0204c19c(ctx, o->hdr, 0x14)) != 0) return r;
    if ((r = func_0204c19c(ctx, data_020b02b8, 4)) != 0) return r;
    return 0;
}
