#include "ffc/types.h"

extern uint32_t func_020098e0(void);
extern void *func_0205681c(uint32_t size);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern uint8_t data_020b2140[];

typedef struct {
    void *ptr;
    uint32_t pad;
    uint32_t count;
} Thing;

void func_02071a14(Thing *t, uint32_t n) {
    void *p;
    if (n > 0x9249249) {
        func_020098e0();
    }
    p = func_0205681c(n * 28);
    if (p == 0) {
        func_02091a24(data_020b2140);
        func_0208f42c();
    }
    t->ptr = p;
    t->count = n;
}
