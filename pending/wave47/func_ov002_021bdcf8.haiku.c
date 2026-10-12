#include "ffc/types.h"

extern uint32_t func_0209a484(uint32_t x);
extern uint32_t func_0209b5bc(uint32_t x, float y);
extern uint32_t func_0209a33c(uint32_t x, uint32_t y);
extern uint32_t func_0209b338(uint32_t x, uint32_t y);
extern uint32_t func_0209a400(void);
extern uint32_t func_02096978(void);
extern uint32_t func_02099dd8(void);
extern uint32_t func_0209ab5c(void);

typedef struct {
    uint8_t pad[0xb0];
    uint32_t mask;
    uint32_t obj[4];
    uint32_t cmp[4];
} S;

uint32_t func_ov002_021bdcf8(S *s)
{
    uint32_t mask = s->mask;
    float k = 4096.0f;
    int i;
    for (i = 0; i < 4; i++) {
        if (mask & (1u << i)) {
            uint32_t *q = &s->obj[i];
            uint32_t t = func_0209b5bc(func_0209a484(*q), k);
            if (func_0209a33c(t, 0)) {
                func_0209a400();
                func_02096978();
                func_02099dd8();
            } else {
                t = func_0209b5bc(func_0209a484(*q), k);
                func_0209b338(0, t);
                func_0209a400();
                func_02096978();
                t = func_02099dd8();
                func_0209b338(0, t);
            }
            t = func_0209ab5c();
            if (s->cmp[i] != t) {
                return 1;
            }
        }
    }
    return 0;
}
