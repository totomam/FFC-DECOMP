#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void *func_02069210(void *object);
extern void *func_0203b918(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069404(void *object, uint32_t value);
extern char data_ov001_02194b90[];

void *func_ov001_0218ea60(void *this, uint32_t p1, uint32_t p2, S s)
{
    void *o;
    void **vt;

    func_02069210(this);
    *(void **)this = data_ov001_02194b90;
    *(void **)((char *)this + 0x94) = func_0203b918(p2, p1, 2, 1);
    o = *(void **)((char *)this + 0x94);
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)o)[14])(o, 2, 0);
    o = *(void **)((char *)this + 0x94);
    ((void (*)(void *, S))(*(void ***)o)[3])(o, s);
    o = *(void **)((char *)this + 0x94);
    ((void (*)(void *, uint32_t))(*(void ***)o)[8])(o, 3);
    o = *(void **)((char *)this + 0x94);
    ((void (*)(void *))(*(void ***)o)[10])(o);
    func_02056bc0((char *)this + 0x48, *(void **)((char *)this + 0x94));
    func_02069320(this, 2);
    func_02069404(this, 4);
    return this;
}
