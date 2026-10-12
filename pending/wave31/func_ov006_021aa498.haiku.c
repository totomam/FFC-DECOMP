#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t data_ov006_021b94bc[2];
extern uint32_t *data_ov006_021bc780;
extern int func_ov006_021b1430(uint32_t a);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021a6508(uint32_t *p, int v);
extern void func_ov006_021aa078(void);
extern void func_ov006_021aa2d0(void);

void func_ov006_021aa498(void)
{
    struct {
        uint32_t idx;
        uint32_t fn[2];
    } s;
    uint32_t *tbl;
    uint32_t **gp;

    tbl = s.fn;
    *(Pair *)s.fn = *(Pair *)data_ov006_021b94bc;

    if (func_ov006_021b1430(data_ov006_021b94bc[1]) != 0) {
        return;
    }

    gp = &data_ov006_021bc780;
    if (*((uint8_t *)*gp + 0x2a) == 0) {
        uint32_t *r2 = (uint32_t *)(*gp)[1];
        *r2 &= 0xc1fffcffu;
        func_ov006_021a64c8((void *)func_ov006_021aa078);
    } else {
        func_ov006_021a6508(&s.idx, 0);
        ((void (*)(uint32_t *))tbl[s.idx])(*gp + 2);
        func_ov006_021a64c8((void *)func_ov006_021aa2d0);
    }
}
