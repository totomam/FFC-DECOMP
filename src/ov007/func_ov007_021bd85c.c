#include "ffc/types.h"

extern uint8_t data_ov007_021c81cc[];
extern void func_02074468(uint32_t a, void *b, uint32_t c, uint8_t d);

void func_ov007_021bd85c(uint8_t *p) {
    func_02074468(*(uint32_t *)(p + 0xb0), data_ov007_021c81cc,
                  *(uint32_t *)(p + 0x1d4), *(uint8_t *)(p + 0x1d8));
}
