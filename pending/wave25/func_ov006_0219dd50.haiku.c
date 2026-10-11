#include "ffc/types.h"

extern uint32_t func_ov006_0219f090();
extern void func_ov006_0219ef5c();
extern uint8_t data_ov006_021b8b80[];
extern uint8_t data_ov006_021b8b8c[];

int func_ov006_0219dd50(void *a0)
{
    uint32_t *s = (uint32_t *)a0;
    uint32_t r;

    s[0] = func_ov006_0219f090(data_ov006_021b8b80);
    func_ov006_0219ef5c(&s[1], data_ov006_021b8b80, s[0]);
    s[9] = 1;
    r = func_ov006_0219f090(data_ov006_021b8b8c);
    s[10] = r;
    if (r > 13) {
        return -1;
    }
    func_ov006_0219ef5c(&s[11], data_ov006_021b8b8c);
    return 0;
}
