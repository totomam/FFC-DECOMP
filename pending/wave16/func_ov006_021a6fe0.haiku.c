#include "ffc/types.h"

typedef struct {
    uint8_t idx;
    uint8_t pad[3];
    uint32_t ptr;
} BssS;

extern void func_ov006_021af520(uint32_t a, uint8_t b, uint8_t c);
extern uint8_t data_ov006_021b84c4[];
extern BssS data_ov006_021bc73c;

void func_ov006_021a6fe0(void)
{
    uint8_t buf[2];
    uint8_t *w = buf;
    uint8_t *r = buf;
    w[0] = data_ov006_021b84c4[0];
    w[1] = data_ov006_021b84c4[1];
    {
        uint8_t v = r[data_ov006_021bc73c.idx];
        func_ov006_021af520(data_ov006_021bc73c.ptr, v, v);
    }
}
