#include "ffc/types.h"

extern void func_ov006_021b5774(uint32_t a, void *b);

typedef struct {
    uint32_t pad;
    uint8_t *p;
} Blk;

extern Blk data_ov006_021bc7ec;

void func_ov006_021b0990(void *param) {
    func_ov006_021b5774(0, param);
    *(uint32_t *)(data_ov006_021bc7ec.p + 0x14) = 0;
}
