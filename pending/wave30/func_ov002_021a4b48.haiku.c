#include "ffc/types.h"

extern int func_ov002_021a1a7c(void *object);
extern uint32_t func_ov002_021a16dc(const void *object);
extern void *func_ov002_02196414(void *object);
extern int func_ov002_021a4b8c(void *object, int arg);

int func_ov002_021a4b48(void *object)
{
    uint32_t state;

    if (func_ov002_021a1a7c(object) != 1) {
        return 0;
    }
    state = *(uint32_t *)((uint8_t *)func_ov002_02196414((void *)func_ov002_021a16dc(object)) + 0x31c);
    switch (state) {
    case 1:
        return 1;
    case 2:
        if (func_ov002_021a4b8c(object, 0) == 2) {
            return 1;
        }
        break;
    }
    return 0;
}
