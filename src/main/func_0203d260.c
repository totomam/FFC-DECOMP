#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern Pair data_020aed00;
extern Pair data_020aed08;

void func_0203d260(uint8_t *p) {
    if (*(uint32_t *)(p + 0xd4) == 0xffffffff) {
        *(Pair *)(p + 0x80) = data_020aed00;
    } else {
        *(Pair *)(p + 0x80) = data_020aed08;
    }
}
