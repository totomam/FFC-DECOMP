#include "ffc/types.h"

extern uint32_t func_02074080(uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);

void func_ov007_021bc634(uint8_t *p)
{
    if (*(p + 0xb4) != 0) {
        func_02056bc0(p + 0x14, (void *)func_02074080(*(uint32_t *)(p + 0xb0)));
    }
    func_02056bc0(p + 0x14, func_02056aec(p));
}
