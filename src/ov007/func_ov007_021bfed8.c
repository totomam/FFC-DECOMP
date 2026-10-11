#include "ffc/types.h"

extern uint32_t func_ov007_021bfe14(uint32_t a, uint32_t *out);
extern void func_ov007_021bf91c(uint32_t line, const void *file, uint32_t code);
extern uint32_t func_ov007_021bfec4(uint32_t a, uint32_t b);
extern void func_ov000_02159014(uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c89b8[];

uint32_t func_ov007_021bfed8(uint32_t a, uint32_t b) {
    uint32_t local;
    uint32_t r;
    r = func_ov007_021bfe14(b, &local);
    if (r != 1) {
        func_ov007_021bf91c(0x75b, data_ov007_021c89b8, r);
        func_ov000_02159014(local, func_ov007_021bfec4(a, r));
    }
    return r;
}
