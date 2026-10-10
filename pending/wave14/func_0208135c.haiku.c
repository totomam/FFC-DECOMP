/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
} Vec3;

uint32_t func_0208135c(Vec3 *a, Vec3 *b) {
    int64_t s = (int64_t)a->y * b->y + (int64_t)a->x * b->x + (int64_t)a->z * b->z;
    return (uint32_t)((uint64_t)(s + 0x800) >> 12);
}
