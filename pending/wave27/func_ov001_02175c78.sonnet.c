#include "ffc/types.h"

extern int func_ov001_0217ef6c(void *a, void *b);
extern int func_ov001_02178044(void *a, int q);
extern uint8_t data_ov001_02190100[];

int func_ov001_02175c78(uint32_t **p, int q)
{
    uint8_t *s;

    if (p == 0 || (s = (uint8_t *)*p) == 0) {
        return 2;
    }
    if (*(uint32_t *)(s + 0x108) != 0) {
        return 0;
    }
    if (*(uint32_t *)(s + 0x1f4) == 4) {
        func_ov001_0217ef6c(p, data_ov001_02190100);
        return 2;
    }
    return func_ov001_02178044(p, q);
}
