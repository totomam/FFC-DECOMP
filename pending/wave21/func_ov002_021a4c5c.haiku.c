#include "ffc/types.h"

extern int func_ov002_021a4b28(void *p);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);

void func_ov002_021a4c5c(uint8_t *self)
{
    if (func_ov002_021a4b28(*(void **)(self + 0x80)) == 0) {
        void *node = func_02056aec(self);
        func_02056bc0(self + 0x14, node);
    }
}
