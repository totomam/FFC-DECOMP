#include "ffc/types.h"

extern void func_02080a40(void *p);
extern void *func_020249a4(void *p, uint32_t x);
extern void *func_020249f4(void *p, uint32_t x);
extern void func_0208053c(void *a, void *b);

int func_02024a18(uint8_t *a, uint32_t b, uint8_t *c, int d) {
    uint8_t *r4;
    if (b == 0xFFFFFFFFu) {
        func_02080a40(c);
        return 1;
    }
    if (*(void **)(*(uint8_t **)(a + 0xe8) + 0xc) != 0 &&
        *(void **)(*(uint8_t **)(a + 0xe4) + 0x14) != 0) {
        r4 = func_020249a4(a, b);
    } else {
        r4 = func_020249f4(a, b);
    }
    if (r4 != 0) {
        if (d != 0) {
            func_0208053c(r4, c);
        } else {
            func_02080a40(c);
            *(uint32_t *)(c + 0x30) = *(uint32_t *)(r4 + 0x24);
            *(uint32_t *)(c + 0x34) = *(uint32_t *)(r4 + 0x28);
            *(uint32_t *)(c + 0x38) = *(uint32_t *)(r4 + 0x2c);
        }
        return 1;
    }
    return 0;
}
