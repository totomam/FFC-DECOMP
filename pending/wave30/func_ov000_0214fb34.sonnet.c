#include "ffc/types.h"

extern int64_t func_0209a76c(int32_t a, int32_t b);
extern uint32_t func_ov000_0214fa18(void);

typedef struct { uint32_t pad; uint8_t *base; } GlobTbl;
extern GlobTbl data_ov000_0216e214;

uint16_t func_ov000_0214fb34(uint32_t a) {
    uint32_t r5;
    int32_t i = 0;
    do {
        r5 = (uint32_t)(func_0209a76c(a + i, 13) >> 32);
        if (*(uint32_t *)(data_ov000_0216e214.base + 0x12d4) & (1u << (r5 + 1))) {
            if (func_ov000_0214fa18() & (1u << r5)) {
                break;
            }
        }
        i++;
    } while (i < 13);
    return (uint16_t)((uint32_t)(func_0209a76c(a + i, 13) >> 32) + 1);
}
