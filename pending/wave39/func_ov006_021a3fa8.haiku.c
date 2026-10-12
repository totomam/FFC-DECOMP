#include "ffc/types.h"

extern uint32_t func_0208d570(void);
extern uint32_t func_0208d5b4(void);
extern void func_ov006_021b3e20(int a, uint8_t b, void *c);
extern uint8_t data_ov006_021b80e0[];

typedef struct {
    uint32_t w0;
    uint16_t h4;
} Obj;

typedef struct {
    Obj *obj;
    uint32_t pad;
    int8_t idx;
} Ctx;

extern Ctx *data_ov006_021bc6f8;

void func_ov006_021a3fa8(void)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint32_t r6 = 0;
    uint16_t saved;

    saved = *ime;
    *ime = 0;
    if (func_0208d570() != 0x8000) {
        r6 = func_0208d5b4();
    }
    (void)*ime;
    *ime = saved;

    func_ov006_021b3e20(0, (data_ov006_021b80e0 + data_ov006_021bc6f8->idx * 4)[r6],
                        data_ov006_021bc6f8->obj);

    data_ov006_021bc6f8->obj->w0 = (data_ov006_021bc6f8->obj->w0 & 0xfe00ff00) | 0x00e50026;
    data_ov006_021bc6f8->obj->h4 = (data_ov006_021bc6f8->obj->h4 & 0xfffff3ff) | (8 << 8);
}
