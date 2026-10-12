/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_02073928(void);
extern int func_ov001_02188620(void (*fn)(void), void *a, void *b);
struct Str {
    uint32_t flag : 1;
    uint32_t len : 31;
    char *pad;
    char *heap;
    char *get() { if (flag == 0) return (char*)this + 1; return heap; }
};
struct Inner { char pad[0x13]; uint8_t x; };
struct Obj {
    char pad0[0x14];
    Inner *q;
    char pad1[0x28-0x18];
    Str s1;
    Str s2;
    void set() { q->x = 1; }
};
int func_02074680(Obj *p);
int func_02074680(Obj *p)
{
    char *b = p->s2.get();
    char *a = p->s1.get();
    int r = func_ov001_02188620(func_02073928, a, b);
    if (r != 0) p->q->x = 1;
    return r;
}
}
