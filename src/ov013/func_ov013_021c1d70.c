#include "ffc/types.h"

extern void func_ov013_021bd420(void *p);

void func_ov013_021c1d70(void *param_1) {
    uint8_t *p = (uint8_t *)param_1;
    uint32_t *q = *(uint32_t **)(p + 0xc4);
    *q = 1;
    func_ov013_021bd420(*(void **)(p + 0xc0));
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
