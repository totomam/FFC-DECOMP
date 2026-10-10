#include "ffc/types.h"

extern void func_020095b8(void *p);
extern void func_02051120(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_020511e8(void *a, void *b);
extern uint32_t data_020b0458[];

void func_02051060(uint32_t *out, uint32_t unused, uint32_t mode)
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
        func_020095b8(buf);
        func_02051120(out, buf);
        func_020059cc(buf);
        return;
    case 2:
        func_020095b8(buf2);
        func_020511e8(out, buf2);
        func_020059cc(buf2);
        return;
    }
}
