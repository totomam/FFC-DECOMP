#include "ffc/types.h"

extern int func_ov000_021479dc(uint32_t *out);
extern int func_ov000_0214b600(uint32_t *out);
extern int func_ov000_02147a14(uint32_t *out);

struct X {
    uint8_t pad0[8];
    uint8_t b8;
    uint8_t b9;
};

struct Y {
    uint8_t pad[0xa4];
    struct X *x;
};

struct G {
    uint32_t a;
    struct Y *y;
};

extern struct G data_02141510;

int func_ov000_02147a70(uint32_t *out)
{
    struct X *x = data_02141510.y->x;
    if (x != 0) {
        if ((uint8_t)(x->b8 + 0xf6) <= 1) {
            return func_ov000_021479dc(out);
        }
        if (x->b9 != 0) {
            return func_ov000_0214b600(out);
        }
        return func_ov000_02147a14(out);
    }
    *out = 0;
    return 0;
}
