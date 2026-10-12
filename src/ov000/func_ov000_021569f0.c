#include "ffc/types.h"

extern void func_ov000_0215716c(void *self, void *p, uint32_t n);
extern void func_ov000_02156cdc(void *self, void *p);
extern void func_02084b2c(void *self, uint32_t zero, uint32_t n);

typedef void (*free_fn)(uint32_t a, void *p, uint32_t b);

void func_ov000_021569f0(void *a0)
{
    uint8_t *s;
    free_fn fp;

    s = (uint8_t *)a0;
    fp = *(free_fn *)(s + 0x1014);
    if (a0 == 0) {
        return;
    }
    func_ov000_0215716c(a0, s + 0x1a74, 0x20);
    func_ov000_02156cdc(a0, s + 0x1a44);
    func_ov000_02156cdc(a0, s + 0x1a34);
    if (*(void **)(s + 0x1a08) != 0) {
        fp(0, *(void **)(s + 0x1a08), 0);
        *(void **)(s + 0x1a08) = 0;
    }
    if (*(void **)(s + 0x1a0c) != 0) {
        fp(0, *(void **)(s + 0x1a0c), 0);
        *(void **)(s + 0x1a0c) = 0;
    }
    func_02084b2c(a0, 0, 0x1c50);
}
