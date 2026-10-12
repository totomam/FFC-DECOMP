#include "ffc/types.h"

extern void *func_ov000_0216876c(void *p);
extern void func_ov001_02181ddc(void *p);

int func_ov001_021800a4(uint8_t *a, void *b, void *c, void *d, void *e)
{
    void **h;
    uint32_t *inner;

    if (a == 0) {
        return 1;
    }
    h = (void **)func_ov000_0216876c(*(void **)(a + 0x98));
    if (h == 0) {
        return 1;
    }
    if (d == 0 || c == 0) {
        c = 0;
        d = 0;
    }
    *(uint32_t *)(a + 0x24) += 1;
    inner = *(uint32_t **)(a + 8);
    inner[0x1c / 4] += 1;
    ((int (*)(void *, void *, void *, void *, void *))*h)(a, b, c, d, e);
    *(uint32_t *)(a + 0x24) -= 1;
    inner = *(uint32_t **)(a + 8);
    inner[0x1c / 4] -= 1;
    inner = *(uint32_t **)(a + 8);
    if (inner[0x14 / 4] != 0 && inner[0x1c / 4] == 0) {
        func_ov001_02181ddc(inner);
        return 0;
    }
    return 1;
}
