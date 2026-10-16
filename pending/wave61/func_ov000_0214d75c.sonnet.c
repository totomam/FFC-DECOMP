#include "ffc/types.h"
typedef struct Q { uint8_t pad[0x10]; uint16_t a; uint16_t b; uint32_t c; } Q;
typedef struct P { uint8_t pad[0xac]; int16_t fl; int8_t id; uint8_t pad2; uint16_t a; uint16_t b; uint32_t c; } P;
extern void func_ov000_0214d7a8(void);
extern Q *func_ov000_0214d1d8(void *fn, P *self, int a);
extern int func_ov000_0214d2ac(P *self);
int func_ov000_0214d75c(P *p) {
    Q *q = func_ov000_0214d1d8((void *)func_ov000_0214d7a8, p, p->id);
    if (q == 0) return -0x21;
    q->a = p->a;
    q->b = p->b;
    q->c = p->c;
    p->fl |= 2;
    return func_ov000_0214d2ac(p);
}
