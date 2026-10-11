#include "ffc/types.h"

extern void func_ov000_02167c24(void *a, void *b, void *c, uint32_t d);
extern void func_ov000_02167d20(void *a, void *b, void *c, uint32_t d);
extern uint8_t data_ov007_021c8ffc[];
extern uint8_t data_ov007_021c9000[];
extern uint8_t data_ov007_021c9008[];
extern uint8_t data_ov007_021c9014[];

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint8_t f8;
} Inner;

int func_ov007_021c0744(uint8_t *p)
{
    Inner *n = *(Inner **)(p + 8);

    func_ov000_02167c24(*(void **)(p + 0x18), data_ov007_021c8ffc, data_ov007_021c9000, n->f0);
    func_ov000_02167d20(*(void **)(p + 0x18), data_ov007_021c8ffc, data_ov007_021c9008, n->f4);
    func_ov000_02167d20(*(void **)(p + 0x18), data_ov007_021c8ffc, data_ov007_021c9014, n->f8);
    return 0;
}
