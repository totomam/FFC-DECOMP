#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);

int func_ov006_021b3950(const uint8_t *a, const uint8_t *b, int32_t n) {
    int32_t la = (int32_t)func_02092864(a);
    int32_t lb = (int32_t)func_02092864(b);
    if (la < n || lb < n) {
        return 0;
    }
    if (func_02090410(a + (la - n), b + (lb - n), (uint32_t)n) == 0) {
        return 1;
    }
    return 0;
}
