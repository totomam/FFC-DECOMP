#include "ffc/types.h"

extern void *func_ov002_02196414(void *object);
extern void func_0201cf34(void *a, void *b);
extern void *data_020b93b8;

int func_ov002_0219ae5c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t buf[0x98];
    uint8_t *o;
    uint32_t idx;

    o = (uint8_t *)func_ov002_02196414(*(void **)(p + 0xc8));
    if (*(uint16_t *)(o + 0x314) == 0) {
        return 0;
    }
    if (*(uint32_t *)(o + 8) == 1) {
        return 0;
    }
    if (*(uint32_t *)(p + 0xd8) != *(uint32_t *)(p + 0xd4)) {
        return 0;
    }
    func_0201cf34(data_020b93b8, buf);
    idx = ((*(uint32_t *)(buf + 0x1c)) << 8) >> 16;
    if (idx + 1 > *(uint16_t *)(o + 0x314)) {
        return 1;
    }
    return 0;
}
