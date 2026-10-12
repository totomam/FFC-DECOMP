#include "ffc/types.h"

extern void *func_ov002_02196414(void *object);
extern void func_0201cf34(void *a, void *b);
extern void *data_020b93b8;

int func_ov002_0219adf4(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint8_t *obj;
    uint32_t buf[0x26];
    uint32_t v;

    obj = (uint8_t *)func_ov002_02196414(*(void **)(self + 0xc8));
    if (*(uint32_t *)(obj + 0x310) == 0) {
        return 0;
    }
    if (*(uint32_t *)(obj + 8) == 1) {
        return 0;
    }
    if (*(uint32_t *)(self + 0xd8) != *(uint32_t *)(self + 0xd4)) {
        return 0;
    }
    func_0201cf34(data_020b93b8, buf);
    v = ((buf[7] << 8) >> 16) + 1;
    if (v > *(uint32_t *)(obj + 0x310)) {
        return 1;
    }
    return 0;
}
