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
    buf[0] = data_ov006_021b84c4[0];
    buf[1] = data_ov006_021b84c4[1];
    func_ov006_021af520(data_ov006_021bc73c.ptr, buf[data_ov006_021bc73c.idx], buf[data_ov006_021bc73c.idx]);
}
