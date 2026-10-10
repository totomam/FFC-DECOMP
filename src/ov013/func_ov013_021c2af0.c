#include "ffc/types.h"

extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);

void func_ov013_021c2af0(void *param_1) {
    uint8_t *p = (uint8_t *)param_1;
    uint32_t *q = *(uint32_t **)(p + 0xf8);
    *q = 0;
    void *node = func_02056aec(param_1);
    func_02056bc0(p + 0x14, node);
}
