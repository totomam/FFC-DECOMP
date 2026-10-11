#include "ffc/types.h"

extern void *func_02074080(void *arg);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);

void func_ov007_021b3edc(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    void *val;

    if (*(void **)(p + 0xb8) != 0) {
        val = func_02074080(*(void **)(p + 0xb8));
        func_02056bc0(p + 0x14, val);
    }

    val = func_02056aec(p);
    func_02056bc0(p + 0x14, val);
}
