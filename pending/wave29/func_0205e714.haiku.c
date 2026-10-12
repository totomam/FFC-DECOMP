#include "ffc/types.h"

extern char data_020b101c[];
extern void func_02059a78(void *a, uint32_t b);
extern void func_0205847c(uint32_t a, uint32_t b);
extern void func_0205d620(void *p);
extern void func_02062868(void *p);

typedef struct Obj {
    void *vt;
    uint32_t f04[6];
    void *p1c;
    void *p20;
    uint32_t f24;
    uint32_t f28[2];
    uint32_t f30;
    uint32_t f34;
} Obj;

Obj *func_0205e714(Obj *s)
{
    s->vt = data_020b101c;
    func_02059a78(((void **)s->p1c)[5], s->f24);
    func_0205847c(s->f30, s->f34);
    if (s->p20 != 0) {
        void **o = (void **)s->p20;
        ((void (*)(void *))((void **)*o)[1])(o);
    }
    func_0205d620((uint8_t *)s + 0x38);
    func_02062868(s);
    return s;
}
