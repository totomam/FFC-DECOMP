#include "ffc/types.h"

extern void *func_ov000_02146820(void *a);
extern void func_ov000_021469ac(void *a, void *b, void *c);
extern void func_020870e8(void);
extern void func_ov000_02146860(void *b, void *obj);
extern void func_ov000_02146940(void *obj, int v);
extern void func_020870a0(void *object);

#define SW16(x) ((uint16_t)((((int32_t)(x)) >> 8) | (((int32_t)(x)) << 8)))

void func_ov000_02146bb8(void *a, void *b, void *c)
{
    uint8_t *obj = (uint8_t *)func_ov000_02146820(a);
    uint16_t *src = (uint16_t *)b;

    if (obj == 0 || obj[8] != 2) {
        func_ov000_021469ac(a, b, c);
        return;
    }

    func_020870e8();
    *(uint32_t *)(obj + 0x24) = ((SW16(src[2]) << 16) | SW16(src[3])) + 1;
    *(uint32_t *)(obj + 0x3c) = (SW16(src[4]) << 16) | SW16(src[5]);
    *(uint16_t *)(obj + 0x38) = SW16(src[7]);
    func_ov000_02146860(b, obj);
    func_ov000_02146940(obj, 2);
    obj[8] = 4;
    if (*(uint32_t *)(obj + 4) == 1) {
        *(uint32_t *)(obj + 4) = 0;
        func_020870a0(*(void **)obj);
    }
}
