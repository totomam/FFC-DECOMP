#include "ffc/types.h"

extern void func_02074240(void *a, void *b, void *c, int d, void *e, uint32_t f);
extern void func_ov007_021bc678(void);
extern uint8_t data_ov007_021c1654[];
extern uint8_t data_ov007_021c81cc[];

void func_ov007_021bcdec(uint8_t *p)
{
    func_02074240(*(void **)(p + 0xb0), data_ov007_021c81cc, data_ov007_021c1654, 0x5a,
                  (void *)func_ov007_021bc678, *(uint32_t *)(p + 0x1d4));
}
