#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aa778(const void *object);

uint32_t func_ov002_02198700(uint32_t *base, uint32_t key)
{
    uint32_t i;
    uint32_t j;
    uint32_t elem;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < func_ov002_021a18bc((const void *)base[70 + i]); j++) {
            elem = func_ov002_021a18c4((const void *)base[70 + i], j);
            if (key == func_ov002_021aa778((const void *)elem)) {
                return elem;
            }
        }
    }
    return 0;
}
