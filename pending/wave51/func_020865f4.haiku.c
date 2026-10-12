#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Entry;

extern uint32_t data_02fe0020;
extern Entry data_02141458[];

uint32_t func_020865f4(uint32_t x) {
    int i;
    uint32_t *p = &data_02fe0020;
    for (i = 0; i < 32; i++, p++) {
        if (x & 1) {
            if (i >= 8 && i <= 11) {
                return data_02141458[i - 8].a;
            }
            if (i >= 3 && i <= 6) {
                return data_02141458[i + 5].a;
            }
            return *p;
        }
        x >>= 1;
    }
    return 0;
}
