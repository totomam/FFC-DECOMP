#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020aef38;
extern Pair data_020aef40;

void func_0203e990(uint32_t *p) {
    if (p[57] == 0) {
        *(Pair *)(p + 32) = data_020aef38;
    } else {
        *(Pair *)(p + 32) = data_020aef40;
    }
}
