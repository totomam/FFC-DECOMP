/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern uint32_t data_020b2948;
extern void func_021d9ad8(uint32_t, uint32_t, uint32_t);
extern void func_020849c4(uint32_t, uint32_t, uint32_t);
extern void func_020845a8(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void func_020823d0(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t g = data_020b2948;
    uint32_t n = c;
    if (g != 0xFFFFFFFF && n > 0x1c) {
        if (g > 3) {
            uint32_t t = b + 0x5000400;
            b = (a | t) | n;
            if ((b & 3) == 0) {
                func_021d9ad8(g - 4, a, t);
                return;
            }
            func_020849c4(a, t, n);
            return;
        }
        func_020845a8(g, a, b + 0x5000400, n, 1);
        return;
    }
    func_020849c4(a, b + 0x5000400, n);
}
