#include "ffc/types.h"

typedef struct Vec {
    uint32_t x;
    uint32_t y;
} Vec;

typedef struct Pair {
    Vec b;
    Vec a;
} Pair;

typedef struct Data84 {
    uint8_t pad[0x28];
    uint32_t x;
    uint32_t y;
} Data84;

extern void func_0203c2bc(void);
extern void *func_02060610(void);
extern void *func_02056b34(void *obj);
extern void *func_02062a78(void *obj, Vec a, Vec b, uint32_t c, uint32_t d);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern Data84 data_ov004_02157e84;
extern Vec data_ov004_02157eac;

typedef struct Obj {
    uint8_t pad[0xc4];
    void *c4;
    void *c8;
    void *cc;
    void *d0;
    void *d4;
    void *d8;
    uint32_t dc;
    uint32_t e0;
} Obj;

void func_ov004_02147ad0(Obj *p)
{
    uint32_t *n;
    void *t;
    void *x10;
    void *r14;
    void *r18;
    Vec s2a;
    Vec s2b;
    Vec b;
    Vec s1a;
    Vec s1b;
    void *r4;
    void *v;
    void *q;

    p->dc = 0;
    p->e0 = 0;
    n = (uint32_t *)p->d8;
    n[3] &= ~0xffu;
    func_0203c2bc();
    t = func_02060610();
    x10 = func_02056b34(p->c8);
    s1b.x = 0x140;
    s1b.y = 0xc0;
    s1a.x = 0x100;
    s1a.y = 0xc0;
    r14 = func_02062a78(p->d4, s1a, s1b, 0x14, 2);
    b.x = data_ov004_02157e84.x;
    b.y = data_ov004_02157e84.y + 0x28;
    r18 = func_02062a78(p->d8, data_ov004_02157eac, b, 0x14, 2);
    s2b.x = 0;
    s2b.y = 0x28;
    s2a.x = 0;
    s2a.y = 0;
    r4 = func_02062a78(p->cc, s2a, s2b, 0x14, 2);
    v = func_0203b6fc();
    func_02056bc0(v, r4);
    func_02056bc0(v, r18);
    func_02056bc0(v, r14);
    q = p->c4;
    func_02056bc0(q, v);
    func_02056bc0(q, x10);
    func_02056bc0(q, t);
}
