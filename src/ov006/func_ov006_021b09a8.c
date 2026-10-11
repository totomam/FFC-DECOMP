#include "ffc/types.h"

typedef struct {
    uint32_t r0;
    uint32_t r4;
    uint32_t r8;
    uint32_t rc;
    uint32_t r10;
    uint32_t r14;
    uint8_t b18;
} Obj;

typedef struct {
    uint32_t x;
    Obj *obj;
} Glob;

extern Glob data_ov006_021bc7ec;
extern uint32_t func_ov006_021b570c(uint32_t a, void (*f)(void), uint32_t c, uint32_t d);
extern void func_ov006_021b0a70(void);

void func_ov006_021b09a8(void)
{
    data_ov006_021bc7ec.obj->b18 = 1;
    data_ov006_021bc7ec.obj->r14 = func_ov006_021b570c(0, func_ov006_021b0a70, 0, 0x78);
}
