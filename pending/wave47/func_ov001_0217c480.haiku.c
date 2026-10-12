#include "ffc/types.h"

typedef struct Obj {
    uint32_t tag;
    uint32_t pad4;
    void *owner;
    uint16_t id;
    uint8_t pad_e[2];
    uint32_t pad10[3];
    uint8_t *buf;
    int32_t cap;
    int32_t len;
} Obj;

extern Obj *func_ov001_0217c148(void *ctx, void *a, uint32_t b);
extern Obj *func_ov001_0217c188(void *ctx, int32_t n, int32_t z);
extern uint32_t func_ov000_0214f148(void *a);
extern void func_ov000_021652a8(int32_t x0, int32_t x1, int32_t x2, const void *data, uint32_t r, uint32_t b);
extern uint8_t *func_ov000_021653e4(uint8_t *buf, int32_t size);
extern void func_ov000_021653f4(uint8_t *buf);
extern void func_ov001_0217ef6c(void *ctx, const void *s);
extern void func_ov001_021788f0(void *ctx, int32_t x, int32_t y);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern const char data_ov001_02191104[];
extern const char data_ov001_0219114c[];
extern const char data_ov001_02190ff8[];

void func_ov001_0217c480(void *a, uint32_t b, const void *c, int32_t d, uint32_t x5, void *e6)
{
    Obj *o;
    int32_t len;
    int32_t cap;
    uint8_t *buf;
    uint8_t *nb;

    o = func_ov001_0217c148(e6, a, b);
    if (o != 0) {
        goto main_path;
    }
    o = func_ov001_0217c188(e6, -1, 0);
    if (o == 0) {
        func_ov000_021652a8(1, 2, 1, data_ov001_02191104, func_ov000_0214f148(a), b);
        return;
    }
    o->tag = 0x68;
    o->owner = a;
    o->id = (uint16_t)b;

main_path:
    len = o->len;
    cap = o->cap;
    buf = o->buf;
    if (d > cap - len) {
        if (d < 0x4000) {
            cap = len + 0x4000;
        } else {
            cap = len + d;
        }
        nb = func_ov000_021653e4(buf, cap + 1);
        if (nb == 0) {
            func_ov000_021652a8(1, 2, 1, data_ov001_0219114c, func_ov000_0214f148(a), b);
            func_ov000_021653f4(buf);
            func_ov001_0217ef6c(e6, data_ov001_02190ff8);
            func_ov001_021788f0(e6, 1, 0);
            return;
        }
        buf = nb;
    }

    func_02090380(buf + len, c, d);
    o->buf = buf;
    o->len = o->len + d;
    o->cap = cap;
    buf[o->len] = 0;
}
