#include "ffc/types.h"

extern void func_02035f58(void *p);
extern void func_ov009_021ad6ac(void *a, void *b, void *c);
extern int func_ov009_021adc9c(void *a, void *b, void *c, int d);
extern void *func_02035fd0(void *object);

int func_ov009_021ad730(void *a, void *b) {
    uint8_t buf[0x60];
    int ret = 0;

    func_02035f58(buf);
    func_ov009_021ad6ac(a, b, buf);
    if (func_ov009_021adc9c(a, (uint8_t *)a + 0x220, buf, 0) != 0) {
        func_02035fd0(buf);
        return ret;
    }
    func_02035fd0(buf);
    return 1;
}
