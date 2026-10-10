#include "ffc/types.h"

typedef struct {
    uint8_t idx;
    uint32_t ptr;
} S_ov006_bc748;

extern S_ov006_bc748 data_ov006_021bc748;
extern uint8_t data_ov006_021b8500[];
extern void func_ov006_021af520(void *a, uint32_t b, uint32_t c);

void func_ov006_021a7c04(void) {
    uint8_t v = data_ov006_021b8500[data_ov006_021bc748.idx];
    func_ov006_021af520((void *)data_ov006_021bc748.ptr, v, v);
}
