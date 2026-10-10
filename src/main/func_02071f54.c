#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Vec3;

void func_02071f54(uint32_t *dst, uint32_t *src) {
    *(Vec3 *)(uintptr_t)dst[2] = *(Vec3 *)(uintptr_t)src[2];
}
