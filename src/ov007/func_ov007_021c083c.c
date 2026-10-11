#include "ffc/types.h"

extern void func_ov000_02167c24(uint32_t a, void *b, void *c, uint32_t d);
extern void func_ov000_02167d20(uint32_t a, void *b, void *c, uint32_t d);
extern uint8_t data_ov007_021c8ffc[];
extern uint8_t data_ov007_021c9000[];
extern uint8_t data_ov007_021c9054[];
extern uint8_t data_ov007_021c905c[];

uint32_t func_ov007_021c083c(uint32_t *p)
{
    uint32_t *n = (uint32_t *)p[2];

    func_ov000_02167c24(p[6], data_ov007_021c8ffc, data_ov007_021c9000, n[0]);
    if (n[1] != 0) {
        func_ov000_02167c24(p[6], data_ov007_021c8ffc, data_ov007_021c9054, n[1]);
    }
    func_ov000_02167d20(p[6], data_ov007_021c8ffc, data_ov007_021c905c, n[2]);
    return 0;
}
