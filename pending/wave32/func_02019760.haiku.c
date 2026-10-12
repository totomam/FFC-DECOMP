#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void *func_020154b8(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t data_020b8df0[];
extern uint32_t data_020acb7c[];

void *func_02019760(void)
{
    int flag;
    void *res;
    uint32_t buf[3];

    if (data_020b8df0[6] == 0) {
        flag = 0;
        res = func_0205681c(0x10);
        if (res != 0) {
            func_02005988(buf, data_020acb7c);
            flag = 1;
            res = func_020154b8(res, buf);
        }
        data_020b8df0[6] = (uint32_t)res;
        if (flag != 0) {
            func_020059cc(buf);
        }
    }
    {
        uint32_t *obj = (uint32_t *)data_020b8df0[6];
        return func_02052d90((void *)obj[1], obj[2]);
    }
}
