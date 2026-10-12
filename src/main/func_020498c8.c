#include "ffc/types.h"

extern void func_0208763c(void *p);
extern uint32_t func_02087ca0(uint32_t zero, void *base, uint32_t idx);
extern void func_02087678(void *p);

typedef struct Glob {
    uint8_t enabled;
    uint8_t pad[3];
    uint8_t *obj;
} Glob;

typedef struct Guard {
    void *p;
    volatile uint8_t active;
} Guard;

extern Glob data_02139d44;

uint32_t func_020498c8(uint32_t idx)
{
    Guard g;
    uint8_t *obj;

    if (data_02139d44.enabled && idx < 0x100) {
        obj = data_02139d44.obj;
        g.p = (void *)(obj + 0xc);
        g.active = 1;
        if (g.active) func_0208763c(g.p);
        if (idx != 0) {
            obj = (uint8_t *)func_02087ca0(0, *(void **)(obj + 8), idx);
            if (g.active) func_02087678(g.p);
        } else {
            if (g.active) func_02087678(g.p);
            obj = 0;
        }
        return (uint32_t)obj;
    }
    return 0;
}
