#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint32_t f4;
    uint8_t pad8[0x14];
    uint32_t f1c;
} DataS;

extern DataS data_02141768;

uint32_t func_02087460(void) {
    if (data_02141768.f1c == 0) {
        uint32_t r1 = ((*(uint8_t *)0x4004000 & 3) == 1);
        data_02141768.f4 = r1;
        data_02141768.f1c = 1;
    }
    return data_02141768.f4;
}
