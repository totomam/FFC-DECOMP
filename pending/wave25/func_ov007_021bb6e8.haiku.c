#include "ffc/types.h"

extern void func_ov007_021bc074(void);
extern void func_ov007_021bc098(void *p);

void func_ov007_021bb6e8(void *param_1, uint32_t param_2)
{
    uint8_t *p = (uint8_t *)param_1;
    if (param_2 == *(uint32_t *)(p + 0xd0)) {
        func_ov007_021bc074();
    }
    if (*(uint32_t *)(p + 0xbc) != 2) {
        if (param_2 == *(uint32_t *)(p + 0xd8)) {
            func_ov007_021bc098(param_1);
        }
    }
}
