#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    void *c;
    void *d;
    uint32_t e;
    uint16_t f;
    uint32_t g;
} Sub;

typedef struct {
    uint32_t a;
    uint32_t b;
    Sub *s;
} Ent;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c[0x100];
    uint8_t d[0x100];
    uint32_t e;
    uint32_t f;
    uint32_t g;
} Out;

extern void *func_020903cc(void *object, int c, uint32_t n);
extern void func_ov001_0217ef6c(void *pp, void *msg);
extern Ent *func_ov001_0217cacc(void **pp, int32_t idx);
extern void func_ov001_0217ec78(void *dst, void *src, uint32_t n);
extern uint8_t data_ov001_0219017c[];
extern uint8_t data_ov001_0219018c[];

uint32_t func_ov001_02175d6c(void **pp, int32_t idx, Out *out)
{
    uint8_t *c;
    Ent *e;
    int32_t count;

    if (pp == 0 || (c = (uint8_t *)*pp) == 0) {
        return 2;
    }
    if (*(void **)(c + 0x108) != 0) {
        func_020903cc(out, 0, 0x214);
        return 0;
    }
    if (out == 0) {
        func_ov001_0217ef6c(pp, data_ov001_0219017c);
        return 2;
    }
    count = *(int32_t *)(c + 0x5d0);
    if (idx < 0 || idx >= count) {
        func_ov001_0217ef6c(pp, data_ov001_0219018c);
        return 2;
    }
    e = func_ov001_0217cacc(pp, idx);
    if (e == 0) {
        func_ov001_0217ef6c(pp, data_ov001_0219018c);
        return 2;
    }
    out->a = e->a;
    out->b = e->s->b;
    if (e->s->c != 0) {
        func_ov001_0217ec78(out->c, e->s->c, 0x100);
    } else {
        out->c[0] = 0;
    }
    if (e->s->d != 0) {
        func_ov001_0217ec78(out->d, e->s->d, 0x100);
    } else {
        out->d[0] = 0;
    }
    out->e = e->s->e;
    out->f = e->s->f;
    out->g = e->s->g;
    return 0;
}
