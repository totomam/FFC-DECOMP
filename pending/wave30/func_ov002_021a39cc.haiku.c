#include "ffc/types.h"

extern uint32_t func_ov002_021a1a7c(void);
extern uint32_t func_ov002_021a1958(void *p, uint32_t idx);

uint32_t func_ov002_021a39cc(void *p, uint32_t skip)
{
    uint32_t i = 7;
    uint32_t n = 7;

    switch (func_ov002_021a1a7c()) {
    case 0:
        i = 0;
        n = 2;
        break;
    case 1:
        i = 3;
        n = 5;
        break;
    }

    if (i <= n) {
        do {
            if (func_ov002_021a1958(p, i) == 0 && i != skip) {
                return i;
            }
            i++;
        } while (i <= n);
    }
    return 7;
}
