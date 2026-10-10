#include "ffc/types.h"

extern void func_0207b2cc(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02089d8c(void *a, void *b);
extern void func_0208a4d4(void *a);

void func_0207b320(void *a, uint32_t b, uint32_t c, uint32_t d) {
    func_0207b2cc(a, c, d, d);
    func_02089d8c(a, (uint8_t *)a + b);
    func_0208a4d4(a);
}
