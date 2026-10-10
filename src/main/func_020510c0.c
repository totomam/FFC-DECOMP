#include "ffc/types.h"

extern void func_0200a5dc(void *p);
extern void func_0205117c(void *a, void *b);
extern void *func_0200a678(void *object);
extern void func_02051248(void *a, void *b);
extern uint32_t data_020b0458[];

void func_020510c0(uint32_t *out, uint32_t unused, uint32_t mode)
{
    uint32_t buf[3];
    uint32_t buf2[3];
    uint32_t i;

    if (mode == 0) {
        mode = data_020b0458[2];
    }
    switch (mode) {
    default:
        for (i = 0; i < 3; i++) {
            out[i] = 0;
        }
        return;
    case 1:
        func_0200a5dc(buf);
        func_0205117c(out, buf);
        func_0200a678(buf);
        return;
    case 2:
        func_0200a5dc(buf2);
        func_02051248(out, buf2);
        func_0200a678(buf2);
        return;
    }
}
