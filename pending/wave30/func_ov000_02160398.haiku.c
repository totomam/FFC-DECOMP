#include "ffc/types.h"

extern int func_ov000_0216376c(void);
extern uint8_t *func_ov000_02163350(void);
extern void *func_ov000_0215eb30(int a, uint32_t b, uint32_t c, uint16_t d, uint32_t e, uint32_t f);

void *func_ov000_02160398(void)
{
    uint8_t *p1;
    uint8_t *p2;
    uint8_t *p3;
    void *r;

    if (!func_ov000_0216376c()) {
        return 0;
    }
    p1 = func_ov000_02163350();
    p2 = func_ov000_02163350();
    p3 = func_ov000_02163350();
    r = func_ov000_0215eb30(5, *(uint32_t *)(p1 + 0x554), *(uint32_t *)(p2 + 0x558), *(uint16_t *)(p3 + 0x560), 0, 0);
    {
        uint8_t *q = func_ov000_02163350();
        *(uint32_t *)(q + 0x67c) = 0;
    }
    return r;
}
