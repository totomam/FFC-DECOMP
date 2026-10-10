#include "ffc/types.h"

extern void func_0200bd64(void *self, void *field, uint32_t val);

typedef struct {
    uint8_t pad[0xb0];
    uint32_t f_b0;
    uint32_t f_b4;
} Obj;

void func_0200bd24(Obj *p, volatile uint32_t a, volatile uint32_t b, ...) {
    p->f_b0 = a;
    p->f_b4 = b;
    func_0200bd64(p, &p->f_b4, p->f_b4);
}
