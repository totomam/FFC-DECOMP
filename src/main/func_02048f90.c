#include "ffc/types.h"

extern void func_020424e0(void *p);
extern void *func_ov003_0214d454(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0216602c(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_02056aec(void *p);

void func_02048f90(uint8_t *a)
{
    void *n;

    func_020424e0(*(void **)(a + 0x94));
    n = func_ov003_0214d454();
    func_02056bc0(a + 0x14, n);
    n = func_0205681c(0x9c);
    if (n != 0) {
        n = func_ov003_0216602c(n, *(void **)(a + 0x94), 0, 0, 0x1e, 1, 0);
    }
    func_02056bc0(a + 0x14, n);
    n = func_02056aec(a);
    func_02056bc0(a + 0x14, n);
}
