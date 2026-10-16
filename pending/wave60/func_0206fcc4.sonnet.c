/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void func_0206fe40(void *p);
extern uint32_t *func_0205681c(uint32_t n);
extern void func_02055c20(void *p);
extern uint8_t data_020b0a90[];
void func_0206fcc4(uint8_t *p) {
    uint32_t *o;
    func_0206fe40(p);
    if (p[0x4d] == 0) return;
    p[0x4d] = 0;
    o = func_0205681c(0x10);
    if (o != 0) {
        o[2] = 0;
        o[3] = 0x19;
        o[0] = (uint32_t)data_020b0a90;
    }
    func_02055c20(p + 0x14);
}
