#include "ffc/types.h"

uint16_t func_ov006_0219ae1c(uint16_t *p, int32_t len) {
    uint32_t sum = 0;
    int32_t i;
    for (i = len >> 1; i > 0; i--) {
        sum += *p++;
    }
    sum = (sum >> 16) + (uint16_t)sum;
    sum += sum >> 16;
    return (uint16_t)(sum ^ 0xffff);
}
