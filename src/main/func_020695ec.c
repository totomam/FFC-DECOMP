#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);

void func_020695ec(void *object, void *node) {
    *(void **)((uint8_t *)node + 0x80) = object;
    func_02056bc0(*(void **)((uint8_t *)object + 0x90), node);
}
