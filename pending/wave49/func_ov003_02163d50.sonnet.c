#include "ffc/types.h"

extern uint32_t func_0203b6f0(void);
extern uint32_t func_0203b81c(uint32_t x);
extern void func_0205f818(uint32_t x, uint32_t y);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b918(void *o, uint32_t x, uint32_t y, uint32_t z);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_0203b95c(void *o, uint32_t x, uint32_t y, uint32_t z);
extern void func_02021338(uint32_t x);
extern void func_020655b8(void *o);
extern uint32_t data_ov003_0217a608;

struct S { uint32_t a, b; };
struct O { void **vt; };
struct A {
    void **vt;
    char p1[0x44];
    char list[0x44];
    uint32_t cnt;
    int32_t id;
    char p2[8];
    char name[0xc];
    struct O *root;
    struct O *child;
    struct O *items[8];
    uint32_t par;
};

void func_ov003_02163d50(struct A *a)
{
    uint32_t i;
    uint8_t buf[0x44];
    struct S args;
    uint32_t t;
    char *l;
    struct O *o;

    a->root = (struct O *)func_0203b6f0();
    t = func_0203b81c(a->cnt + 4);
    a->par = t;
    func_0205f818(t, 5);

    i = a->par;
    l = a->list;
    func_02056bc0(l, a->root);
    func_02056bc0(l, (void *)i);

    a->child = (struct O *)func_0203b918((char *)a + 0x80, a->par, 0, 1);
    i = 0;
    func_02064390(a->child, 0x80, 0x60);
    ((void (*)(void *, uint32_t))a->child->vt[15])(a->child, 1);
    ((void (*)(void *))a->child->vt[10])(a->child);
    func_02056bc0(a->root, a->child);
    ((void (*)(void *, void *))a->vt[4])(a, a->name);

    {
        for (; i < a->cnt; i++) {
            int8_t c = a->name[i];
            if (c == 0x20) {
                a->items[i] = 0;
            } else {
                func_02091b10(buf, &data_ov003_0217a608, c - 0x30);
                a->items[i] = (struct O *)func_0203b95c(buf, a->par, 0, 1);
                args.a = i * 8 + 0xd;
                args.b = 0x10;
                ((void (*)(void *, struct S))a->items[i]->vt[3])(a->items[i], args);
                ((void (*)(void *))a->items[i]->vt[10])(a->items[i]);
                func_02056bc0(a->root, a->items[i]);
            }
        }
    }

    if (a->id != -1) {
        func_02021338(a->id);
    }

    i = 0;
    ((void (*)(void *, uint32_t, uint32_t))a->child->vt[14])(a->child, 1, 0);

    {
        for (; i < a->cnt; i++) {
            o = a->items[i];
            if (o != 0) {
                ((void (*)(void *, uint32_t, uint32_t))o->vt[14])(o, 1, 0);
            }
        }
    }

    func_020655b8(a->child);
}
