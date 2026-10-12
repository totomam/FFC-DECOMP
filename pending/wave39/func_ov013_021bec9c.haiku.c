#include "ffc/types.h"

extern int func_0208de98(void *cb, void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov013_021becf4(void);

void func_ov013_021bec9c(uint8_t *p)
{
    uint32_t idx = *(uint32_t *)(p + 0x138);
    uint8_t *tbl = *(uint8_t **)(p + 0x12c);
    uint32_t *ent = (uint32_t *)(tbl + idx * 8);
    uint32_t raw = *(uint16_t *)(*(uint8_t **)(p + 0xf4) + 0xf90);
    uint32_t mask = 1;
    int ret;

    ret = func_0208de98((void *)func_ov013_021becf4, p, ent[0], (uint16_t)ent[1], (uint16_t)(raw & ~mask), 14, 3);
    if (ret != 2) {
        p[0x13c] = 1;
    }
}
