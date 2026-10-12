#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *obj, const void *src);
extern void *func_020154b8(void *a, void *b);
extern void *func_020059cc(void *object);
extern uint8_t data_020b8df0[];
extern uint8_t data_020acb7c[];

void func_02015980(void)
{
    uint32_t tmp[3];
    int flag;
    void *obj;
    uint32_t *p;
    if (*(void **)((uint8_t *)data_020b8df0 + 0x18) != 0) {
        return;
    }
    flag = 0;
    obj = func_0205681c(16);
    if (obj != 0) {
        p = tmp;
        func_02005988(p, data_020acb7c);
        flag = 1;
        obj = func_020154b8(obj, p);
    }
    *(void **)((uint8_t *)data_020b8df0 + 0x18) = obj;
    if (flag != 0) {
        func_020059cc(tmp);
    }
}
