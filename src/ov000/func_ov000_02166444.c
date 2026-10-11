#include "ffc/types.h"

typedef struct {
    uint32_t word;
    uint16_t half;
} Rec;

int func_ov000_02166444(Rec *a, Rec *b) {
    if (a->word != b->word) {
        return 1;
    }
    if (a->half != b->half) {
        return 1;
    }
    return 0;
}
