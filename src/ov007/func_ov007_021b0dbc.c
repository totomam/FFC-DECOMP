#include "ffc/types.h"

extern void func_020767a4(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint8_t data_ov007_021c5c2c[];

typedef struct {
    void *vtbl;
} Obj;

void *func_ov007_021b0dbc(Obj *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    func_020767a4(p, a, b, c, d, e, f);
    p->vtbl = data_ov007_021c5c2c;
    return p;
}
