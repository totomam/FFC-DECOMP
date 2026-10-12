#include "ffc/types.h"

extern uint32_t func_ov002_021ab064(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021a1acc(uint32_t a);
extern uint32_t func_ov002_021acf84(uint32_t a);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);

int func_ov002_021a3828(uint32_t p, uint32_t *out, uint32_t v)
{
    uint32_t mask = func_ov002_021ab064(v, 1);
    int i = 0;
    for (;;) {
        uint32_t a;
        uint32_t b;
        uint32_t idx;
        if (i > 25) {
            *out = 0;
            return 2;
        }
        a = func_ov002_021a1acc(p);
        b = func_ov002_021acf84(v);
        idx = func_0206c184(a, b);
        if (((1u << idx) & mask) != 0) {
            *out = idx;
            break;
        }
        i++;
    }
    return 0;
}
