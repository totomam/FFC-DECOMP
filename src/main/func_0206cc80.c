#include "ffc/types.h"

extern int func_0208d8ec(void *fn);
extern void func_0206ccb0(void);

void func_0206cc80(uint8_t *p) {
    *(uint8_t *)(p + 0x30b4) = 0;
    uint8_t *q = *(uint8_t **)(p + 0x3220);
    q[1] = 1;
    if (func_0208d8ec((void *)func_0206ccb0) != 2) {
        *(uint32_t *)(p + 0x30b0) = 1;
        *(uint8_t *)(p + 0x30b4) = 1;
    }
}
