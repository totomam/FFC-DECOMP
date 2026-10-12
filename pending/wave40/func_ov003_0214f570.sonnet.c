#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_ov003_0214f7ec(void);
extern void func_ov003_0214f718(void *p, uint32_t idx, uint32_t val, uint32_t f);
extern int func_0209a398(uint32_t a, uint32_t b);
extern uint32_t func_0201e9bc(uint32_t a);
extern void func_02021338(uint32_t a);
extern void func_0205f498(uint32_t a);

void func_ov003_0214f570(uint8_t *p)
{
    uint32_t i;
    uint32_t r6;

    for (i = 0; i < 5; i++) {
        if (*(uint32_t *)(p + (i << 2) + 0x80) != 0) {
            if (i == 4) {
                r6 = func_ov003_0214f7ec();
                func_ov003_0214f718(p, i, r6, 0x42800000);
                if (func_0209a398(*(uint32_t *)(p + 0x94), r6) == 0) {
                    continue;
                }
                if (func_0201e9bc(data_020b93b8)) {
                    func_02021338(0xb1);
                } else {
                    func_02021338(0xb0);
                }
                *(uint32_t *)(p + 0x94) = r6;
            } else {
                func_0205f498(*(uint32_t *)(*(uint8_t **)(*(uint8_t **)(p + (i << 2) + 0x80) + 0x50) + 0x94));
            }
        }
    }
}
