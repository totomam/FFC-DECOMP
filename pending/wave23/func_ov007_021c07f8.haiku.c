#include "ffc/types.h"

extern int32_t func_ov003_021682d0(void *a, void *b, uint32_t c);
extern uint8_t data_ov007_021c9038[];
extern uint8_t data_ov007_021c9048[];

int32_t func_ov007_021c07f8(void *self) {
    uint32_t *s = (uint32_t *)self;
    uint32_t r4 = s[3];

    if (func_ov003_021682d0((void *)s[7], data_ov007_021c9038, r4) == 0) {
        goto ret5;
    }
    if (func_ov003_021682d0((void *)s[7], data_ov007_021c9048, r4 + 4) != 0) {
        goto ret0;
    }
ret5:
    return 5;
ret0:
    return 0;
}
