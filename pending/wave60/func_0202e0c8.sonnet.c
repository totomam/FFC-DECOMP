/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void func_0202de9c(void *p);
extern uint32_t data_020aadd0;
extern uint32_t data_020adb58;
void *func_0202e0c8(uint32_t *p) {
    p[0] = (uint32_t)&data_020aadd0;
    p[3] &= ~0xff;
    func_0202de9c(p + 5);
    p[0] = (uint32_t)&data_020adb58;
    return p;
}
