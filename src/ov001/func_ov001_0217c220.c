#include "ffc/types.h"

extern int func_ov001_0217c8f0(void *ctx, uint32_t v, void *out);
extern void func_ov001_0217ef6c(void *ctx, void *d);
extern void func_ov000_02166b94(uint32_t a, uint16_t b, void *out);
extern int func_ov000_02166c04(uint32_t a, uint16_t b, uint32_t dst, uint32_t n);
extern void func_ov001_0217ef50(void *ctx, uint32_t v, void *d);
extern void func_ov001_021788f0(void *ctx, uint32_t a, uint32_t b);
extern uint8_t data_ov001_02190f58[];
extern uint8_t data_ov001_02191068[];

int func_ov001_0217c220(uint32_t *ctx, uint32_t *out) {
    uint32_t base = ctx[0];
    uint32_t obj;
    uint32_t sel;

    if (func_ov001_0217c8f0(ctx, out[4], &obj) == 0) {
        func_ov001_0217ef6c(ctx, data_ov001_02190f58);
        return 3;
    }
    if (((uint32_t *)obj)[3] != 0) {
        func_ov000_02166b94(((uint32_t *)((uint32_t *)obj)[3])[7],
                            *(uint16_t *)&((uint32_t *)((uint32_t *)obj)[3])[8], &sel);
        if (sel == 1) {
            if (sel == 0) {
                goto store;
            }
        }
        if (func_ov000_02166c04(((uint32_t *)((uint32_t *)obj)[3])[7],
                                *(uint16_t *)&((uint32_t *)((uint32_t *)obj)[3])[8],
                                base + 0x220, 10000) != 5) {
            func_ov001_0217ef50(ctx, 5, data_ov001_02191068);
            func_ov001_021788f0(ctx, 3, 0);
            return 3;
        }
    store:
        out[2] = ((uint32_t *)((uint32_t *)obj)[3])[7];
        *(uint16_t *)&out[3] = *(uint16_t *)&((uint32_t *)((uint32_t *)obj)[3])[8];
    }
    out[0] = 0x67;
    return 0;
}
