#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    uint32_t n;
    uint32_t off;
} Tbl;

uint32_t func_ov003_0216c7b8(Tbl *p, int32_t key, uint32_t i)
{
    uint32_t res = 0;
    if (i < p->n) {
        int32_t *t = (int32_t *)((uint8_t *)p + p->off);
        do {
            if (t[i] == 0) {
                if (t[i + 1] == key) {
                    return t[i + 2];
                }
                i += 3;
            } else {
                if (key >= t[i + 1] && key <= t[i + 2]) {
                    return t[i + 3];
                }
                i += 4;
            }
        } while (i < p->n);
    }
    return res;
}
