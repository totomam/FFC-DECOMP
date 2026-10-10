#include "ffc/types.h"

extern uint32_t *func_ov003_02153470(uint8_t *a);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_ov003_02154fc4(void);

uint32_t func_ov003_0215501c(uint8_t *a)
{
    uint32_t *p = func_ov003_02153470(a);
    if (*p == 0) {
        return 0;
    }
    func_02052d90(*(void **)(a + 0xe4), *(uint32_t *)(a + 0xe8));
    return func_ov003_02154fc4();
}
