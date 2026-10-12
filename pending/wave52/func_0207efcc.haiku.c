#include "ffc/types.h"

extern int32_t func_0207ef1c(void *s, void *buf, uint32_t n);

typedef struct {
    uint32_t a;
    uint16_t b;
    uint16_t c;
    uint32_t d;
    uint32_t flag;
    uint32_t len;
    uint8_t data[1];
} Out;

typedef struct {
    uint8_t pad0[8];
    uint32_t cur;
    uint8_t pad1[0x1a];
    uint16_t cnt;
    uint32_t pos;
    uint8_t pad3[4];
    Out *out;
    uint32_t flag;
} Ctx;

typedef struct {
    uint32_t cur;
    uint32_t pos;
} Stream;

int32_t func_0207efcc(Ctx *p) {
    Stream s;
    uint8_t buf[4];
    Out *o;
    int32_t b;
    uint32_t len;
    int32_t r;
    int32_t one = 1;

    o = p->out;
    s.cur = p->cur;
    s.pos = p->pos;
    r = func_0207ef1c(&s, buf, one);
    if (r != 0) {
        return r;
    }
    b = buf[0];
    len = b & 0x7f;
    o->len = len;
    o->flag = (b >> 7) & one;
    if (len == 0) {
        return one;
    }
    if (p->flag == 0) {
        r = func_0207ef1c(&s, o->data, len);
        if (r != 0) {
            return r;
        }
        o->data[len] = 0;
    } else {
        s.pos += len;
    }
    if (o->flag == 0) {
        o->a = p->cur;
        o->b = p->cnt;
        p->cnt++;
    } else {
        r = func_0207ef1c(&s, buf + 2, 2);
        if (r == 0) {
            o->a = p->cur;
            o->b = (*(uint16_t *)(buf + 2)) & 0xfff;
            o->c = 0;
            o->d = 0;
        }
    }
    if (r != 0) {
        return r;
    }
    p->pos = s.pos;
    return r;
}
