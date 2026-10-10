#include "ffc/types.h"

extern uint8_t data_ov007_021c80a8[];
extern void func_02056844(uint32_t);
extern void func_ov001_0218e0a8(uint8_t *);

uint8_t *func_ov007_021bcf54(uint8_t *p) {
    *(uint8_t **)p = data_ov007_021c80a8;
    func_02056844(*(uint32_t *)(p + 0x2e0));
    func_ov001_0218e0a8(p);
    return p;
}
