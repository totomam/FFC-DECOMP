#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Elem;

void func_ov000_02146d18(uint8_t *p, int32_t n) {
    int32_t k = 2;
    if (n <= 2) {
        do {
            *(Elem *)(p + 0x7c + 12 * k) = *(Elem *)(p + 0x70 + 12 * k);
            k--;
        } while (k >= n);
    }
    ((Elem *)(p + 0x70))[n].a = 0;
}
