/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern uint32_t func_ov006_0219f010(uint32_t a);
extern int32_t func_ov000_0214f044(void *p);
extern void func_020871d8(uint32_t a);
extern uint32_t data_ov006_021b8b20[];
extern uint8_t data_ov006_021b8b28[];
extern volatile uint32_t *const dummy_unused;
int32_t func_ov006_0219eec0(uint32_t a, uint32_t b, uint32_t c) {
    data_ov006_021b8b20[6] = func_ov006_0219f010(a);
    data_ov006_021b8b20[7] = func_ov006_0219f010(b);
    data_ov006_021b8b20[8] = func_ov006_0219f010(c);
    if (func_ov000_0214f044(data_ov006_021b8b28) < 0) return -1;
    while (*(volatile uint32_t *)0x0216bcb0 == 0) func_020871d8(100);
    return 0;
}
