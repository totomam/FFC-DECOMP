#include "ffc/types.h"
typedef struct { uint8_t pad[8]; uint8_t t; uint8_t pad2[0x2b]; int32_t cnt; } S;
extern S* func_ov000_02146820(uint32_t a, uint32_t b);
extern void func_ov000_02146a60(uint32_t a, uint32_t b);
extern void func_ov000_021469ac(uint32_t a, uint32_t b, uint32_t c);
int func_ov000_02146af0(uint32_t a, uint32_t b, uint32_t c) {
    S* s = func_ov000_02146820(a, b);
    if (s != 0) {
        if (s->t == 1) {
            func_ov000_02146a60(a, b);
        } else if (s->t == 3) {
            s->cnt--;
            func_ov000_02146a60(a, b);
        } else {
            func_ov000_021469ac(a, b, c);
        }
        return 1;
    }
    return 0;
}
