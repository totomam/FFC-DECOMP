/* cflags: -O0 */
#include "ffc/types.h"
extern uint32_t func_ov006_0219f090(void *s);
extern void func_ov006_0219ef5c(void *d, void *s, ...);
extern char data_ov006_021b8b80[];
extern char data_ov006_021b8b8c[];
int func_ov006_0219dd50(uint32_t *p)
{
    p[0] = func_ov006_0219f090(data_ov006_021b8b80);
    func_ov006_0219ef5c(p + 1, data_ov006_021b8b80, p[0]);
    p[9] = 1;
    p[10] = func_ov006_0219f090(data_ov006_021b8b8c);
    if (p[10] > 13) return -1;
    func_ov006_0219ef5c(p + 11, data_ov006_021b8b8c);
    return 0;
}
