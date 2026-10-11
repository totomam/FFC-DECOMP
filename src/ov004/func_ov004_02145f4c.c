#include "ffc/types.h"

extern void func_02054218(void);
extern void func_02054380(void);

void func_ov004_02145f4c(uint8_t *a) {
    uint8_t v = 1;
    func_02054218();
    func_02054380();
    *(uint8_t *)(*(uint8_t **)(*(uint8_t **)(a + 0x88) + 0xa0) + 0xe0) = v;
}
