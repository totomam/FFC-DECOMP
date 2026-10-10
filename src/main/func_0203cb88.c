#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020aece8;
extern Pair data_020aecf0;

void func_0203cb88(uint32_t *p) {
    if (p[52] != 0) {
        *(Pair *)(p + 32) = data_020aece8;
    } else {
        *(Pair *)(p + 32) = data_020aecf0;
    }
}
