#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern void func_02087620(void *object);
extern char data_020ae6d4[];
extern char data_ov007_021c466c[];
extern char data_ov007_021c4688[];

typedef struct {
    uint32_t d;
    uint32_t e;
    uint32_t f;
} Sub;

typedef struct {
    uint32_t vt;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    Sub s;
} Blk;

typedef struct {
    uint32_t lo;
    uint32_t hi;
} Pair;

extern Pair data_ov007_021c468c;

void *func_ov007_021a7960(void *p)
{
    uint8_t *b = (uint8_t *)p;
    Blk *k;
    Sub *s;
    uint32_t *t;
    uint32_t *vp;
    uint32_t lo;
    uint32_t hi;

    func_02056c9c(p, 0);
    k = (Blk *)(b + 0x80);
    vp = (uint32_t *)(b + 0x80);
    *vp = (uint32_t)data_020ae6d4;
    k->a = 0;
    k->b = 0;
    k->c = 0;
    k->s.d = 0;
    s = &k->s;
    s->e = 0;
    s->f = 0;
    func_02087620(k + 1);
    *(uint32_t *)b = (uint32_t)data_ov007_021c466c;
    k->vt = (uint32_t)data_ov007_021c4688;
    t = (uint32_t *)(b + 0xf8);
    t[0] = 0;
    t[2] = (uint32_t)&t[1];
    t[1] = 0;
    *(Pair *)(b + 0xb8) = data_ov007_021c468c;
    return p;
}
