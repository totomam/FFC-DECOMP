#include "ffc/types.h"

typedef struct {
    uint8_t pad[2];
    uint16_t h;
    uint8_t *p;
} FfcData;

extern FfcData data_ov006_021bc778;
extern void func_ov006_021b0600(uint32_t arg);
extern void func_ov006_021a9be0(void);
extern uint32_t func_ov006_021b570c(uint32_t a, void (*fn)(void), uint32_t b, uint32_t c);

void func_ov006_021a9e04(void)
{
    if (data_ov006_021bc778.h == 0) {
        if (*(data_ov006_021bc778.p + 0x59) == 0) {
            func_ov006_021b0600(9);
            *(data_ov006_021bc778.p + 0x59) = 1;
        }
    } else {
        func_ov006_021b0600(0x13);
        *(uint32_t *)(data_ov006_021bc778.p + 0x38) =
            func_ov006_021b570c(0, func_ov006_021a9be0, 0, 0x78);
    }
}
