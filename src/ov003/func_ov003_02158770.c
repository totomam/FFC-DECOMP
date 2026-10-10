#include "ffc/types.h"

typedef struct {
    uint8_t pad[4];
    uint8_t v;
} Inner;

int func_ov003_02158770(uint8_t *p) {
    Inner *q = *(Inner **)(p + 0xa8);
    if (q->v == 2) {
        return 1;
    }
    return 0;
}
