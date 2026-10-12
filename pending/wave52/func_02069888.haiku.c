#include "ffc/types.h"

typedef void (*VFn)(int32_t *out, void *self, int32_t a, int32_t b, int32_t x, int32_t y);

void *func_02069888(uint8_t *self, int32_t x, int32_t y, ...) {
    uint8_t *node = *(uint8_t **)(*(uint8_t **)(self + 0x90) + 0x14);
    int32_t rect[4];
    int32_t a;
    int32_t b;
    if (node == 0) {
        return 0;
    }
    do {
        if (node[0x84] != 0 && node[0x88] == 0) {
            VFn fn = ((VFn *)(*(void **)node))[4];
            fn(rect, node, a, b, x, y);
            if (!(rect[0] > x) && !(x >= rect[2]) && !(rect[1] > y) && !(y >= rect[3])) {
                return node;
            }
        }
        node = *(uint8_t **)(node + 4);
    } while (node != 0);
    return 0;
}
