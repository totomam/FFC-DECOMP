#include "ffc/types.h"

typedef struct { int32_t x, y; } P;
typedef void (*VFn)(int32_t *out, void *self, int32_t a, int32_t b, int32_t x, int32_t y);

void *func_02069888(uint8_t *self, P p) {
    int32_t w;
    uint8_t *node = *(uint8_t **)(*(uint8_t **)(self + 0x90) + 0x14);
    int32_t rect[4];
    if (node == 0) return 0;
    do {
        if (node[0x84] != 0 && node[0x88] == 0) {
            VFn fn = ((VFn *)(*(void **)node))[4];
            fn(rect, node, w, w, p.x, p.y);
            if (!(rect[0] > p.x) && !(p.x >= rect[2]) && !(rect[1] > p.y) && !(p.y >= rect[3])) {
                return node;
            }
        }
        node = *(uint8_t **)(node + 4);
    } while (node != 0);
    return 0;
}
