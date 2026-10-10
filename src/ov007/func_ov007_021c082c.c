#include "ffc/types.h"

typedef struct {
    uint32_t pad[2];
    uint32_t *inner;
} Outer;

int func_ov007_021c082c(Outer *o) {
    if (*o->inner != 0) {
        return 0;
    }
    return 4;
}
