#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Q;

extern int func_0205ecc8(void *self, Q q);
extern void *func_0205681c(uint32_t size);
extern void *func_0205eaa8(void *p, Q q, uint32_t e, uint32_t f, uint8_t g, uint8_t h);
extern int func_0205ec84(void *self, void *p);

int func_0205eea8(void *self, Q q, uint32_t e, uint32_t f, uint8_t g, uint8_t h)
{
    void *p;

    func_0205ecc8(self, q);
    p = func_0205681c(0x20);
    if (p != 0) {
        p = func_0205eaa8(p, q, e, f, g, h);
    }
    return func_0205ec84(self, p);
}
