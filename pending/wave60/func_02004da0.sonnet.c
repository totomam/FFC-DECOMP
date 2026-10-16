/* cflags: -nothumb -O0 */
#include "ffc/types.h"
extern uint8_t data_02fe0000[];
void func_02004da0(void) {
    void (**p)(void) = (void (**)(void))(data_02fe0000 + 0x4000 - 0x40 - 0x40 - 0x800 + 4);
    while (*p != 0) {
        (*p)();
        *p++ = 0;
    }
}
