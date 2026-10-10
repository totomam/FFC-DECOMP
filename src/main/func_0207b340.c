#include "ffc/types.h"

extern void func_0207b2cc(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02089da4(void *a, void *b);
extern void func_0208a528(void *a);

void func_0207b340(void *a, uint32_t b, uint32_t c, uint32_t d) {
    func_0207b2cc(a, c, d, d);
    func_02089da4(a, (uint8_t *)a + b);
    func_0208a528(a);
}
