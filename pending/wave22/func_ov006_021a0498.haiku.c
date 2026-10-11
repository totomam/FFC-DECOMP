#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x68];
    int32_t idx;
    int32_t lim;
} S;

extern S data_ov006_021bb170;
extern int32_t data_ov006_021bb1f4[];

void func_ov006_021a0498(uint32_t v) {
    int32_t idx = data_ov006_021bb170.idx;
    int32_t lim = data_ov006_021bb170.lim;
    int32_t next = idx + 1;
    if (next == lim) {
        return;
    }
    if (idx == lim + 3) {
        return;
    }
    data_ov006_021bb1f4[idx] = v;
    data_ov006_021bb170.idx = next;
    if (next < 4) {
        return;
    }
    data_ov006_021bb170.idx = 0;
}
