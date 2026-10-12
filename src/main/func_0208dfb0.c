#include "ffc/types.h"

typedef struct Inner { uint8_t pad[0x10]; uint32_t v; } Inner;
typedef struct Outer { uint32_t pad; Inner *in; } Outer;

extern Outer *func_0208ceec(void);
extern uint32_t func_0208cf38(uint32_t a, uint32_t b);
extern void func_02087874(void *p, uint32_t n);
extern void func_02087890(void *p, uint32_t n);
extern void func_0208cdd8(uint32_t a, void *b);
extern uint32_t func_0208ce30(uint32_t a, uint32_t b, void *c, uint32_t d);

uint32_t func_0208dfb0(void *a, void *b, uint32_t c) {
    Outer *o;
    uint32_t r;
    o = func_0208ceec();
    r = func_0208cf38(1, 8);
    if (r != 0) return r;
    func_02087874((char *)o->in + 0x10, 4);
    if (o->in->v == 1) return 3;
    if (c < 0x10) return 6;
    if (b == 0) return 6;
    func_02087890(b, c);
    func_0208cdd8(0x11, a);
    r = func_0208ce30(0x11, 2, b, c);
    if (r != 0) return r;
    return 2;
}
