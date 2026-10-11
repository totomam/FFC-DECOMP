#include "ffc/types.h"

extern uint32_t *func_ov000_0216876c(void *p);
extern void func_ov000_02168848(void *p, uint32_t x);
extern void func_ov001_02186cc0(void *p, uint32_t v);

typedef void (*fn_t)(void *, uint32_t, uint32_t, uint32_t);

void func_ov001_02186ce4(uint8_t *p, uint32_t x)
{
    uint32_t v = *func_ov000_0216876c(*(void **)(p + 4));
    ((fn_t)*(void **)(p + 0x488))(p, 2, v, *(uint32_t *)(p + 0x494));
    func_ov000_02168848(*(void **)(p + 4), x);
    func_ov001_02186cc0(p, v);
}
