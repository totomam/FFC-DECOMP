#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    uint32_t n;
    volatile uint32_t off;
} Tbl;

#define W(b, k) (*(int32_t *)((uint8_t *)(b) + (k) * 4))

uint32_t func_ov003_0216c7b8(Tbl *p, int32_t key, uint32_t i)
{
    uint32_t res = 0;
    if (i < p->n) {
        do {
            uint8_t *t = (uint8_t *)p + p->off;
            if (W(t, i) == 0) {
                if (key == W(t, i + 1)) {
                    res = W((uint8_t *)p + p->off, i + 2);
                    break;
                }
                i += 3;
            } else {
                if (key >= W(t, i + 1) && key <= W(t, i + 2)) {
                    res = W((uint8_t *)p + p->off, i + 3);
                    break;
                }
                i += 4;
            }
        } while (i < p->n);
    }
    return res;
}
