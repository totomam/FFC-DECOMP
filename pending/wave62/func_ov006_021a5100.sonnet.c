/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern uint8_t *data_ov006_021bc6fc;
extern void func_ov006_021a4b14(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b5770(void *a, void *b);
extern void func_ov006_021a5140(void);
void func_ov006_021a5100(void *p) {
    uint8_t *g = data_ov006_021bc6fc;
    uint32_t v = (uint8_t)**(uint32_t **)(g + 0xc0);
    v += 0xc;
    func_ov006_021a4b14(g[0x11d], 3, v);
    if ((int32_t)v >= 0xc0) {
        func_ov006_021b5770(p, (void *)func_ov006_021a5140);
    }
}
