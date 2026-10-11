#include "ffc/types.h"

extern void func_02035f58(void *buf);
extern void func_ov009_021ad6ac(void *obj, void *arg, void *buf);
extern void func_ov011_021c2ca4(void *obj, void *buf);
extern void func_ov011_021c2cc0(void *obj, void *buf);
extern void *func_02035fd0(void *object);

void func_ov011_021c2c5c(void *param_1, void *param_2)
{
    uint8_t buf[0x60];
    uint8_t *obj = (uint8_t *)param_1;

    func_02035f58(buf);
    func_ov009_021ad6ac(param_1, param_2, buf);
    if (obj[0x27b] == 0) {
        func_ov011_021c2ca4(param_1, buf);
    } else if (obj[0x27b] == 1) {
        func_ov011_021c2cc0(param_1, buf);
    }
    func_02035fd0(buf);
}
