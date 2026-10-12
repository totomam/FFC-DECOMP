#include "ffc/types.h"

extern int func_0207ef1c(void *in, void *out, uint32_t n);
extern int func_0207f4bc(void *obj, uint32_t a, uint32_t b);

typedef struct {
    void *p;
    uint32_t e;
    uint32_t o1;
    uint32_t o2;
} Frame;

int func_0207f42c(uint8_t *a)
{
    Frame f;
    uint8_t *r3 = *(uint8_t **)(a + 8);
    uint32_t idx = *(uint32_t *)(a + 0x34);
    uint8_t *r2 = *(uint8_t **)(r3 + 0x20);
    uint32_t off = idx << 3;
    int r;

    if (off >= *(uint32_t *)(r2 + 8)) {
        return 11;
    }
    f.p = r3;
    f.e = *(uint32_t *)(r2 + 4) + off;
    r = func_0207ef1c(&f.p, &f.o1, 8);
    if (r == 0) {
        *(uint32_t *)(a + 0x30) = f.o1;
        *(uint32_t *)(a + 0x34) = f.o2;
        *(uint32_t *)(a + 0x38) = idx;
        r = func_0207f4bc(a, 7, 1);
    }
    return r;
}
