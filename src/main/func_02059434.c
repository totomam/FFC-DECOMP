#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef struct {
    void *p;
    volatile uint8_t f;
} Guard;

void func_02059434(uint8_t *self) {
    Guard g;
    uint32_t i;
    g.p = (uint8_t *)(*(uint32_t *)(self + 0x10)) + 0x20;
    g.f = 1;
    if (g.f) {
        func_0208763c(g.p);
    }
    for (i = 0; i < 4; i++) {
        void **obj = *(void ***)(self + 0x14 + i * 4);
        if (obj) {
            ((void (*)(void *))((void **)*obj)[2])(obj);
        }
    }
    if (g.f) {
        func_02087678(g.p);
    }
}
