#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);

typedef struct {
    uint8_t pad[0x68];
    int32_t head;
    int32_t idx;
} S170;

extern int32_t data_ov006_021bb1f4[];
extern S170 data_ov006_021bb170;

int32_t func_ov006_021a0460(void) {
    int32_t r4;
    int32_t idx;

    func_02088978();
    idx = data_ov006_021bb170.idx;
    if (data_ov006_021bb170.head == idx) {
        r4 = 0;
    } else {
        r4 = data_ov006_021bb1f4[idx];
        idx = idx + 1;
        data_ov006_021bb170.idx = idx;
        if (idx >= 4) {
            data_ov006_021bb170.idx = 0;
        }
    }
    func_0208898c();
    return r4;
}
