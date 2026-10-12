#include "ffc/types.h"

extern int func_02036994(void *a, uint8_t b);
extern void func_02035f58(void *obj);
extern void func_0201f600(void *a, uint8_t b, void *c, void *d);
extern int func_ov009_021add08(void *a, void *b, void *c);
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;

int func_ov009_021adc9c(void *p0, void *p1, void *p2, uint8_t *p3)
{
    uint8_t i;
    uint32_t buf[24];

    for (i = 0; i < 5; i++) {
        if (func_02036994(p1, i) != 0) {
            func_02035f58(buf);
            func_0201f600(*(void **)&data_020b93b8, i, p1, buf);
            if (func_ov009_021add08(p0, buf, p2) != 0) {
                if (p3 != 0) {
                    *p3 = i;
                }
                func_02035fd0(buf);
                return 1;
            }
            func_02035fd0(buf);
        }
    }
    return 0;
}
