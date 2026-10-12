#include "ffc/types.h"

struct Obj {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t flags;
    uint32_t f10;
    uint32_t a;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t type;
    char *name;
    uint32_t f2c;
    uint32_t f30;
    char **arr;
    int n;
    uint32_t f3c;
    char *extra;
    uint32_t p44;
    uint32_t p48;
};

extern void *func_0205681c(uint32_t size);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02092878(void *dst, const void *src);
extern char data_020b23a8;

struct Obj *func_020743ac(uint32_t a, const char *s, const char **list, int n,
                          const char *extra, uint32_t p6, uint32_t p7)
{
    int i;
    uint32_t sz = 1;
    struct Obj *o = (struct Obj *)func_0205681c(0x4c);
    if (o != 0) {
        o->flags &= ~0xffu;
        o->a = a;
        o->f18 = 0;
        o->f1c = 0;
        o->vt = &data_020b23a8;
        o->type = 3;
        o->name = 0;
        o->f2c = 0;
        o->f30 = 0;
        o->arr = 0;
        o->n = n;
        o->f3c = 0;
        o->extra = 0;
        o->p44 = p6;
        o->p48 = p7;
        o->name = func_02056830(sz * (func_02092864((const uint8_t *)s) + 1));
        func_02092878(o->name, s);
        o->arr = func_02056830(o->n * 4);
        if (o->n > 0) {
            i = 0;
            do {
                o->arr[i] = func_02056830(sz * (func_02092864((const uint8_t *)list[i]) + 1));
                func_02092878(o->arr[i], list[i]);
                i++;
            } while (i < o->n);
        }
        if (extra != 0) {
            o->extra = func_02056830(sz * (func_02092864((const uint8_t *)extra) + 1));
            func_02092878(o->extra, extra);
        }
    }
    return o;
}
