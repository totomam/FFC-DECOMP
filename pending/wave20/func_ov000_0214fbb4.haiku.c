#include "ffc/types.h"

extern uint8_t data_ov000_0216e214[];

typedef void (*cb_t)(void *);

typedef struct {
    uint16_t a;
    uint16_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
} Msg;

void func_ov000_0214fbb4(uint16_t a, uint16_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint8_t *p = *(uint8_t **)(data_ov000_0216e214 + 4);
    if (*(cb_t *)(p + 0x12d0)) {
        Msg m;
        m.a = a;
        m.b = b;
        m.c = c;
        m.d = d;
        m.e = e;
        (*(cb_t *)(p + 0x12d0))(&m);
    }
}
