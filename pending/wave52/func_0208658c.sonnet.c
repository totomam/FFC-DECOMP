#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t flag;
    uint32_t idx;
} Entry;

extern uint32_t data_02fe0020[];
extern Entry data_02141458[];

void func_0208658c(uint32_t mask, uint32_t val) {
    int32_t i;
    for (i = 0; i < 32; i++) {
        
        if (mask & 1) {
 Entry *p = 0;
            if (i >= 8 && i <= 11) {
                p = &data_02141458[i - 8];
            } else if (i >= 28 && i <= 31) {
                p = &data_02141458[i - 24];
            } else if (i >= 3 && i <= 6) {
                p = &data_02141458[i + 5];
            } else {
                data_02fe0020[i] = val;
            }
            if (p) {
                p->a = val;
                p->idx = 0;
                p->flag = 1;
            }
        }
        mask >>= 1;
    }
}
