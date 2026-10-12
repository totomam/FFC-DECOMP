#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087058(void *p);
extern void func_02087678(void *p);

typedef struct {
    void *q;
    uint8_t flag;
} Local;

void func_0206a93c(uint8_t *p) {
    Local s;
    s.q = p + 0xe4;
    ((uint8_t *)&s)[4] = 1;
    if (((uint8_t *)&s)[4] != 0) {
        func_0208763c(s.q);
    }
    if (*(uint32_t *)(p + 0xc) != 0) {
        func_02087058(p + 0xd8);
    }
    if (((uint8_t *)&s)[4] != 0) {
        func_02087678(s.q);
    }
}
