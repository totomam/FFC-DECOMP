#include "ffc/types.h"

extern void func_ov006_021af940(int code, void *buf);
extern int func_ov006_021b4df4(void *buf);
extern int func_ov006_021b4d94(void *buf);

int func_ov006_021af8b8(void)
{
    uint32_t buf[2];
    int i = 1;

    func_ov006_021af940(1, buf);
    if (func_ov006_021b4df4(buf)) {
        return i;
    }

    i = 2;
    do {
        func_ov006_021af940(i, buf);
        if (func_ov006_021b4df4(buf)) {
            return i;
        }
        i++;
    } while (i <= 3);

    i = 4;
    func_ov006_021af940(4, buf);
    if (func_ov006_021b4d94(buf) == 0) {
        i = 0;
    }
    return i;
}
