#include "ffc/types.h"

extern uint8_t data_ov006_021bc7ec[];
extern void func_ov006_021b3dc8(void *p, int32_t a, int32_t *b, int32_t *c);
extern void func_ov006_021b3cec(void *p, int32_t a, int32_t b, int32_t c);
extern void func_ov006_021b5770(int32_t a, void (*fn)(void));
extern void func_ov006_021b0ac8(void);

void func_ov006_021b0a70(int32_t a)
{
    int32_t x;
    int32_t y;

    func_ov006_021b3dc8(*(void **)(*(uint8_t **)(data_ov006_021bc7ec + 4) + 0x10), 0, &x, &y);
    x -= 8;
    if (x > 0x98) {
        func_ov006_021b3cec(*(void **)(*(uint8_t **)(data_ov006_021bc7ec + 4) + 0x10), -1, x, 0x21);
        return;
    }
    x = 0x98;
    func_ov006_021b3cec(*(void **)(*(uint8_t **)(data_ov006_021bc7ec + 4) + 0x10), -1, x, 0x21);
    func_ov006_021b5770(a, func_ov006_021b0ac8);
}
