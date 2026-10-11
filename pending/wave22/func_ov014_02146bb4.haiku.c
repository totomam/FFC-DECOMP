/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_0207e770(void *object);
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);

typedef struct {
    uint8_t pad[8];
    uint32_t f8;
    void *fc;
    uint8_t b10;
} S;

uint32_t func_ov014_02146bb4(void *p0, uint32_t p1) {
    S *p = (S *)p0;
    uint32_t z = 0;
    if (p->b10 == 1) {
        func_0207e770(p->fc);
        p->b10 = 0;
    }
    if (func_0207ea98(p->fc, p1, z) == 0) {
        return z;
    }
    p->f8 = p1;
    return 1;
}
