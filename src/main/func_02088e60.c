#include "ffc/types.h"

typedef struct { uint32_t f0; uint32_t flags; uint64_t *ptr; } Holder;

extern Holder data_021418a4;

uint64_t func_02088e60(void) {
    if (data_021418a4.flags & 1) {
        return *data_021418a4.ptr;
    }
    return 0;
}
