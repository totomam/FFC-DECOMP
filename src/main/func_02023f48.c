#include "ffc/types.h"

typedef struct { uint32_t pad[6]; uint32_t n; } S1;
typedef struct { uint32_t pad[3]; uint32_t n; } S2;

void func_02023f48(uint8_t *self, uint32_t v) {
    uint32_t n;
    n = ((S1 *)(*(uint32_t **)(self + 0xe4)))->n;
    if (n != 0) {
        if (v >= (n << 4)) {
            v = (n - 1) << 4;
        }
    } else {
        n = ((S2 *)(*(uint32_t **)(self + 0xf0)))->n;
        if (n != 0 && v >= (n << 4)) {
            v = (n - 1) << 4;
        }
    }
    *(uint32_t *)(self + 0x180) = v;
}
