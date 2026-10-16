#include "ffc/types.h"
typedef struct { int8_t *data; int32_t size; int32_t pad; uint8_t en; } BS;
void func_020060a8(BS *b, int32_t i) {
    if (b->en != 0 && i < b->size) {
        int32_t q = i / 8;
        int32_t r = i % 8;
        int32_t m = 1 << r;
        int8_t *d = b->data;
        d[q] = d[q] | m;
    }
}
