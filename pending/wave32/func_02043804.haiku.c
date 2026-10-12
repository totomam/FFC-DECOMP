#include "ffc/types.h"

extern void func_0202a9ac(void *cursor);

int func_02043804(void *self, int key)
{
    void *cur = *(void **)((uint8_t *)self + 0x9c);
    void *end = (uint8_t *)self + 0x94;

    while (cur != end) {
        if (key == *(int32_t *)((uint8_t *)cur + 0xc)) {
            return 1;
        }
        func_0202a9ac(&cur);
    }
    return 0;
}
