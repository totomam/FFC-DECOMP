#include "ffc/types.h"

extern uint32_t func_02096978(uint32_t x);

typedef struct {
    uint8_t pad[0xb0];
    uint32_t mask;
    int32_t obj[4];
    int32_t cmp[4];
} S;

uint32_t func_ov002_021bdcf8(S *s)
{
    uint32_t mask = s->mask;
    int i;
    for (i = 0; i < 4; i++) {
        if (mask & (1u << i)) {
            int32_t o = s->obj[i];
            int32_t *c = &s->cmp[i];
            float f = (float)o * 4096.0f;
            float r;
            if (f < 0.0f) {
                r = -(float)func_02096978((uint32_t)(-((float)o * 4096.0f)));
            } else {
                r = (float)func_02096978((uint32_t)f);
            }
            if (*c != (int32_t)r) {
                return 1;
            }
        }
    }
    return 0;
}
