#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint8_t pad[0x80]; uint32_t f80; uint32_t f84; } Obj;

extern void func_0203755c(void *obj);
extern void func_020213f0(uint32_t v);
extern void func_020211d4(uint32_t v, uint32_t z);
extern void *func_0205681c(uint32_t size);
extern void *func_ov008_021a70f4(void *p);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020afe88;

void func_02048efc(void *p)
{
    Obj *o = (Obj *)p;
    void *n;
    uint32_t a, b;

    func_0203755c(p);
    func_020213f0(*(uint32_t *)((uint8_t *)p + 0x8c));
    func_020211d4(*(uint32_t *)((uint8_t *)p + 0x90), 0);
    n = func_0205681c(0x84);
    if (n != 0) {
        n = func_ov008_021a70f4(n);
    }
    func_02056bc0((uint8_t *)p + 0x14, n);
    a = data_020afe88.a;
    b = data_020afe88.b;
    o->f80 = a;
    o->f84 = b;
}
