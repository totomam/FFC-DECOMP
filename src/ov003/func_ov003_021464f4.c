#include "ffc/types.h"

extern uint8_t *func_ov003_02155b40(void *p);

uint32_t func_ov003_021464f4(uint8_t *a, uint32_t id)
{
    uint32_t i;
    uint32_t *w = (uint32_t *)a;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;

    if (w[0x41c / 4] == id) {
        return w[0x420 / 4];
    }

    for (i = 0; i < 0x32; i++) {
        uint32_t off = i * 4;
        uint8_t *p = func_ov003_02155b40((void *)*(uint32_t *)(a + off + 0xa0));

        if (*(uint16_t *)p == id) {
            int f = p[2];
            if (f != 0) {
                if (i != w[0x5d]) {
                    continue;
                }
            }
            if (f == 0 && id != 0) {
                uint16_t old;
                uint16_t v = 0;
                old = *ime;
                *ime = 0;
                w[0x420 / 4] = *(uint32_t *)(a + off + 0xa0);
                w[0x41c / 4] = id;
                (void)*ime;
                if (old != 0) {
                    v = 1;
                }
                *ime = v;
            }
            return *(uint32_t *)(a + off + 0xa0);
        }
    }
    return 0;
}
