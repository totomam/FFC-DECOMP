#include "ffc/types.h"

typedef struct {
    uint32_t p0;
    uint32_t f4;
    uint32_t pad[5];
    uint32_t f1c;
} S;

extern S data_02141768;

uint32_t func_02087460(void) {
    if (data_02141768.f1c == 0) {
        uint32_t r;
        if ((*(uint8_t *)0x4004000 & 3) == 1) {
            r = 1;
        } else {
            r = 0;
        }
        data_02141768.f4 = r;
        data_02141768.f1c = 1;
    }
    return data_02141768.f4;
}
