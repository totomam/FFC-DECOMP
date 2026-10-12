#include "ffc/types.h"

extern void func_02035f58(void *p);
extern void func_ov009_021ad6ac(void *a, int b, void *c);
extern int func_ov009_021adc9c(void *a, void *b, void *c, int d);
extern uint32_t func_02035ff4(void *object);
extern void *func_02035fd0(void *object);

int func_ov011_021c1eb8(uint8_t *a, int b) {
    uint8_t buf[0x60];
    if (b < a[0x27f]) {
        func_02035f58(buf);
        func_ov009_021ad6ac(a, b, buf);
        if (func_ov009_021adc9c(a, a + 0x220, buf, 0) == 0 && func_02035ff4(buf) != 0) {
            func_02035fd0(buf);
            return 1;
        }
        func_02035fd0(buf);
    }
    return 0;
}
