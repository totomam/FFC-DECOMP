#include "ffc/types.h"

extern void func_ov000_0214b930(uint8_t *p);
extern uint64_t func_020882cc(void);
extern void func_ov000_021453ac(void);

typedef struct {
    uint8_t pad[0x18];
    uint32_t (*fn18)(void);
} VT;

typedef struct {
    uint8_t pad[4];
    uint8_t *ptr;
} G;

extern G data_02141510;
extern VT data_ov000_0216bc60;

void func_ov000_02147984(void)
{
    uint8_t *x = data_02141510.ptr;
    uint8_t *r4 = *(uint8_t **)(x + 0xa4);
    uint32_t t;
    if (r4 != 0) {
        if (r4[9] != 0) {
            func_ov000_0214b930(r4);
        }
        t = (uint32_t)(func_020882cc() >> 16);
        while (data_ov000_0216bc60.fn18() != 0 && r4[8] != 0 &&
               (int32_t)((uint32_t)(func_020882cc() >> 16) - t) < 0x27) {
            func_ov000_021453ac();
        }
        r4[8] = 0;
    }
}
