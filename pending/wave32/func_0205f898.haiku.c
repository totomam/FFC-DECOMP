#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_0205f430(void *p);
extern uint32_t func_020581cc(const void *first, const void *second);
extern void func_02058188(const void *a, const void *b);
extern void func_02087678(void *p);

typedef struct {
    void *s;
    volatile uint8_t flag;
} Local;

void func_0205f898(uint8_t *self, void *r1)
{
    Local loc;
    loc.s = (uint8_t *)*(void **)(self + 0x28) + 0x20;
    loc.flag = 1;
    if (loc.flag != 0) {
        func_0208763c(loc.s);
    }
    func_0205f430(r1);
    func_020581cc(*(void **)(self + 0x28), r1);
    func_02058188(*(void **)(self + 0x28), r1);
    if (loc.flag != 0) {
        func_02087678(loc.s);
    }
}
