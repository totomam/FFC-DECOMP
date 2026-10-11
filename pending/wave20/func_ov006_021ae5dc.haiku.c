#include "ffc/types.h"

extern void func_ov006_021af520(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov006_021b8824[];
extern uint8_t data_ov006_021bc7b4[];

typedef struct {
    uint8_t b[4];
} Buf4;

void func_ov006_021ae5dc(void)
{
    Buf4 buf;
    uint8_t v;
    void *p;
    int8_t idx;

    buf = *(Buf4 *)data_ov006_021b8824;
    idx = *(int8_t *)(data_ov006_021bc7b4 + 1);
    v = buf.b[idx];
    p = *(void **)(data_ov006_021bc7b4 + 4);
    func_ov006_021af520(p, v, v);
}
