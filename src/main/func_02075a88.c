#include "ffc/types.h"

typedef struct {
    uint32_t pad[0x10];
    uint32_t *inner;
} Outer;

int func_02075a88(Outer *o) {
    if (o->inner[10] != 0) {
        return 1;
    }
    return 0;
}
