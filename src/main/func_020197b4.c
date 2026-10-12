#include "ffc/types.h"

extern uint32_t data_020b8df0[];
extern uint8_t data_020acb7c[];
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void *func_020154b8(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern void *func_02052d90(const void *mar, uint32_t index);

void *func_020197b4(uint32_t unused, uint32_t param_1)
{
    uint32_t local[3];
    int flag;
    void *obj;
    uint32_t idx = param_1;

    if (data_020b8df0[6] == 0) {
        flag = 0;
        obj = func_0205681c(0x10);
        if (obj != 0) {
            func_02005988(local, data_020acb7c);
            flag = 1;
            obj = func_020154b8(obj, local);
        }
        data_020b8df0[6] = (uint32_t)obj;
        if (flag) {
            func_020059cc(local);
        }
    }
    {
        uint32_t *o = (uint32_t *)data_020b8df0[6];
        uint8_t *r = (uint8_t *)func_02052d90((const void *)o[1], o[2]);
        uint32_t off = *(uint32_t *)(r + 8);
        uint32_t v = *(uint32_t *)(r + off + idx * 4);
        return r + v;
    }
}
