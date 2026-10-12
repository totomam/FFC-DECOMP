#include "ffc/types.h"

extern char data_020ae230[];
extern char data_020ae1cc[];

extern void *func_02069210(void *object);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02069320(void *object, uint32_t value);

typedef struct { uint32_t a; uint32_t b; } Pair;

#define VT(o, off) (*(void **)((char *)(*(void **)(o)) + (off)))
#define F94(p) (*(void **)((uint8_t *)(p) + 0x94))

void *func_02033824(void *obj, void *a, uint8_t b)
{
    uint8_t *p = (uint8_t *)obj;
    Pair q;

    func_02069210(obj);
    *(void **)p = data_020ae230;
    p[0x98] = b;
    F94(p) = func_0203b95c(((void **)data_020ae1cc)[1], a, 0, 1);
    ((void (*)(void *))VT(F94(p), 0x28))(F94(p));
    ((void (*)(void *, uint32_t))VT(F94(p), 0x20))(F94(p), 0);
    if (p[0x98]) {
        q.a = 0x60;
    } else {
        q.a = 0xa0;
    }
    q.b = 0x68;
    ((void (*)(void *, Pair))VT(F94(p), 0xc))(F94(p), q);
    func_02056bc0(p + 0x48, F94(p));
    ((void (*)(void *, uint32_t))VT(obj, 0x1c))(obj, 0);
    if (!b) {
        func_02069320(obj, 2);
    }
    return obj;
}
