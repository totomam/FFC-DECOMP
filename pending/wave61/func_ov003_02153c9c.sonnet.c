#include "ffc/types.h"
extern int func_02024d58(int x, int b, int c);
int func_ov003_02153c9c(uint8_t *self, int b, int c) {
    uint8_t *p = *(uint8_t **)(self + 0x1e4);
    if (p != 0) return func_02024d58(*(int *)(p + 0x34), b, c);
    return 0;
}
