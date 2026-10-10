#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern void func_ov006_021a4b14(uint8_t a, uint8_t b, int c);
extern void func_ov006_021b5770(void *p, void (*f)(void));
extern void func_ov006_021a43f4(void);

void func_ov006_021a4398(void *p)
{
    uint8_t *g = data_ov006_021bc6fc;
    uint32_t val = **(uint32_t **)(g + 0x90);
    int v = (int)(uint8_t)val - 12;
    if (v > 0x7d) {
        func_ov006_021a4b14(g[0x11d], 2, v);
        return;
    }
    func_ov006_021a4b14(g[0x11d], 2, 0x7d);
    func_ov006_021a4b14(data_ov006_021bc6fc[0x11d], 3, 0xc0);
    func_ov006_021b5770(p, func_ov006_021a43f4);
}
