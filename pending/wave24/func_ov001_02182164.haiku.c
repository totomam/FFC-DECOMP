#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *list);
extern void *func_ov000_0216876c(void *list, int32_t idx);
extern void func_ov001_02181f60(void *obj);

void func_ov001_02182164(void *self)
{
    int32_t i;

    i = func_ov000_02168768(*(void **)((uint8_t *)self + 0x10)) - 1;
    while (i >= 0) {
        void *item = func_ov000_0216876c(*(void **)((uint8_t *)self + 0x10), i);
        func_ov001_02181f60(*(void **)item);
        i--;
    }
}
