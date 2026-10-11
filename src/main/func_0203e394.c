#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020aeef8;
extern Pair data_020aef00;

void func_0203e394(uint32_t *p) {
    if (p[38] != 0) {
        *(Pair *)(p + 32) = data_020aeef8;
    } else {
        *(Pair *)(p + 32) = data_020aef00;
    }
}
