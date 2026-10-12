#include "ffc/types.h"

typedef struct {
    uint32_t w[17];
} Blob;

extern void func_020849ac(uint32_t a, void *b, uint32_t c);
extern int func_0208d87c(void *p, void *fn, uint32_t n);
extern void func_0208d3e4(void *p);
extern uint32_t func_0208d65c(void);
extern int func_ov006_021afab4(void);
extern void func_ov006_021afb78(void);
extern uint8_t *data_ov006_021bc7e0;
extern Blob data_ov006_021b891c;

int func_ov006_021afa28(void)
{
    uint8_t *base;
    int ret;

    ret = 0;
    func_020849ac(0, data_ov006_021bc7e0 + 0x1300, 0x348);
    if (func_0208d87c(data_ov006_021bc7e0, func_ov006_021afb78, 3) != 2) {
        return ret;
    }
    do {
        func_0208d3e4(data_ov006_021bc7e0 + 0x168c);
    } while (*(uint16_t *)((base = data_ov006_021bc7e0) + 0x168c) != 2);

    *(Blob *)(base + 0x1648) = data_ov006_021b891c;
    *(uint8_t **)(base + 0x1648) = base + 0xf00;
    *(uint16_t *)(data_ov006_021bc7e0 + 0x1650) = (uint16_t)func_0208d65c();

    if (func_ov006_021afab4() != 0) {
        return 1;
    }
    return 0;
}
