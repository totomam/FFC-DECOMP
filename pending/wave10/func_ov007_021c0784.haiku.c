#include "ffc/types.h"

extern int32_t func_021682d0(void *a, void *b, uint32_t c);
extern int32_t func_ov000_0216847c(void *a, void *b, uint32_t c);
extern uint8_t data_ov007_021c901c[];
extern uint8_t data_ov007_021c9028[];

int32_t func_ov007_021c0784(void *self) {
    uint32_t *s = (uint32_t *)self;
    uint32_t r4 = s[3];

    if (func_021682d0((void *)s[7], data_ov007_021c901c, r4) == 0) {
        goto ret5;
    }
    if (func_ov000_0216847c((void *)s[7], data_ov007_021c9028, r4 + 4) != 0) {
        goto ret0;
    }
ret5:
    return 5;
ret0:
    return 0;
}
