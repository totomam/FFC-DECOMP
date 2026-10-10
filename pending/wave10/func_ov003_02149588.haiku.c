#include "ffc/types.h"

typedef struct {
    uint16_t e;
    uint32_t f;
    uint16_t g;
    uint16_t pad;
    uint16_t h;
    uint32_t i;
} Q;

extern void *func_0205681c(uint32_t size);
extern void *func_ov003_021494c0(void *obj, uint32_t a, uint32_t b, uint16_t e, uint32_t f, uint16_t g, uint16_t h, uint32_t i, uint32_t c, uint32_t d);
extern uint32_t data_ov003_021797c4;

void *func_ov003_02149588(uint32_t a, uint32_t b, uint32_t c, uint32_t d, ...)
{
    uint32_t *obj = (uint32_t *)func_0205681c(0x30);
    if (obj) {
        func_ov003_021494c0(obj, a, b, ((Q *)(&d + 1))->e, ((Q *)(&d + 1))->f, ((Q *)(&d + 1))->g, ((Q *)(&d + 1))->h, ((Q *)(&d + 1))->i, ((uint32_t *)&c)[0], ((uint32_t *)&c)[1]);
        obj[0] = (uint32_t)&data_ov003_021797c4;
        obj[0xa] = ((uint32_t *)&c)[0];
        obj[0xb] = ((uint32_t *)&c)[1];
    }
    return obj;
}
