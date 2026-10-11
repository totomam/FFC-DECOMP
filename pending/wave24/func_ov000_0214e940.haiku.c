#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern uint32_t func_ov000_0214e984(uint32_t a, uint32_t b);
extern S data_ov000_0216bcd0;
extern uint32_t data_ov000_0216bc6c;

int func_ov000_0214e940(uint32_t a, uint32_t b) {
    if (func_ov000_0214e984(a, b) == 0) {
        return -39;
    }
    data_ov000_0216bcd0.a = a;
    if (a == 0) {
        data_ov000_0216bc6c &= ~2u;
        data_ov000_0216bcd0.b = 0;
    } else {
        data_ov000_0216bc6c |= 2u;
        data_ov000_0216bcd0.b = b;
    }
    return 0;
}
