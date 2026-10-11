#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x34];
    uint16_t f34;
    uint8_t pad1[2];
    uint16_t f38;
    uint16_t f3a;
} S;

void func_02079b54(S *volatile *p, uint16_t a, uint16_t b) {
    if (*p) {
        (*p)->f34 = 2;
        (*p)->f38 = a;
        (*p)->f3a = b;
    }
}
