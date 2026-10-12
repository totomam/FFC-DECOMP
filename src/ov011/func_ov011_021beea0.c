#include "ffc/types.h"

extern void func_02069288(void *object);
extern void func_ov011_021bd618(void *object, int32_t a, int32_t b);

void func_ov011_021beea0(uint8_t *p)
{
    uint8_t i;
    for (i = 0; i < 3; i++) {
        uint32_t off = i * 4;
        func_02069288(*(void **)(p + off + 0xc4));
        if (*(int16_t *)(p + 0x124) == i + 1) {
            func_ov011_021bd618(*(void **)(p + off + 0xc4), 0, 1);
        } else {
            func_ov011_021bd618(*(void **)(p + off + 0xc4), 0, 0);
        }
    }
}
