/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern int func_02024d70(void *p);
int func_ov003_02153cd0(uint8_t *self) {
    uint8_t *p = *(uint8_t **)(self + 0x1e4);
    if (p != 0) return func_02024d70(*(void **)(p + 0x34));
    return 1;
}
