#include "ffc/types.h"

extern int func_0207ebe8(void *buf, void *a, uint32_t b);
extern int func_02052604(void *buf);
extern void func_0207ed7c(void *buf);

int func_02052664(void *a, uint32_t b)
{
    uint8_t buf[0x2c];
    if (func_0207ebe8(buf, a, b) != 0) {
        if (func_02052604(buf) != 0) {
            func_0207ed7c(buf);
            return 1;
        }
    }
    return 0;
}
