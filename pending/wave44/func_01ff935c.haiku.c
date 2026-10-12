/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_0208679c(void);
extern uint32_t func_02087460(void);
extern void func_01ff94b0(int x);
extern void func_01ff92b4(void);
extern void func_01ff93cc(void);

void func_01ff935c(void) {
    uint32_t *src;
    uint32_t *dst;
    int i;

    while (!func_0208679c()) {
    }
    *(uint16_t *)0x4000208 = 0;
    if (func_02087460() == 1) {
        func_01ff94b0(1);
        func_01ff92b4();
        src = (uint32_t *)0x2ffe180;
        dst = (uint32_t *)0x4004040;
        for (i = 0; i < 8; i++) {
            *dst++ = *src++;
        }
    } else {
        func_01ff94b0(0);
    }
    func_01ff93cc();
}
