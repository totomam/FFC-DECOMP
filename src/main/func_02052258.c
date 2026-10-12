#include "ffc/types.h"

extern void func_02052248(void *buf);
extern int32_t func_02052800(void *buf, uint32_t a, uint32_t b);
extern uint32_t func_02008f2c(void *object, void *value, uint32_t zero, uint32_t count);
extern void *func_020059cc(void *object);
extern void func_02005988(void *object, void *data);
extern uint8_t data_020b04f4[];

void func_02052258(void *obj)
{
    uint32_t buf[3];
    int32_t r;

    func_02052248(buf);
    r = func_02052800(buf, 0x2f, (uint32_t)-1);
    if (r != -1) {
        func_02008f2c(obj, buf, 0, (uint32_t)(r + 1));
        func_020059cc(buf);
        return;
    }
    func_02005988(obj, data_020b04f4);
    func_020059cc(buf);
}
