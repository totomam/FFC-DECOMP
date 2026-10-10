#include "ffc/types.h"

extern void *func_ov003_0214d454(void *a);
extern void func_02056bc0(void *object, void *node);

void func_ov003_021770e4(uint8_t *p)
{
    void *node = func_ov003_0214d454(*(void **)(p + 0x80));
    func_02056bc0(*(uint8_t **)(p + 0x80) + 0x48, node);
}
