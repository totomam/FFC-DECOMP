#include "ffc/types.h"

extern void func_ov000_0214586c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern int func_02086fe4(void *object);
extern void func_020870a0(void *object);
extern struct { uint8_t pad[0x54]; void * volatile obj; } data_ov000_0216bc60;

void func_ov000_0214597c(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    func_ov000_0214586c(a, b, c, d, 0, 0);
    if (data_ov000_0216bc60.obj != 0) {
        if (func_02086fe4(data_ov000_0216bc60.obj) == 0) {
            func_020870a0(data_ov000_0216bc60.obj);
        }
    }
}
