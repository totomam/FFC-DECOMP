#include "ffc/types.h"

extern uint32_t func_ov000_0215b5a8(void);

typedef struct {
    uint32_t a;
    uint8_t *b;
} S;

extern S data_ov000_02170064;

uint32_t func_ov000_0215b5f8(void) {
    if (data_ov000_02170064.b == 0) {
        return 0;
    }
    if (func_ov000_0215b5a8() == 0xff) {
        return 0;
    }
    if (data_ov000_02170064.b[0x366] == 2) {
        return 1;
    }
    return 0;
}
