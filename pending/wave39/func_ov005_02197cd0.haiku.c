#include "ffc/types.h"

extern void *func_0205681c(uint32_t size, void *p);
extern void func_02005988(void *buf, void *p);
extern void *func_ov005_02197d2c(void *obj, void *self, void *buf, int flag);
extern void *func_020059cc(void *object);
extern void func_020695ec(void *self, void *obj);

void func_ov005_02197cd0(void *self, void *arg)
{
    uint32_t buf[3];
    int flag = 0;
    int cleanup = 0;
    void *obj;

    obj = func_0205681c(0x9c, arg);
    if (obj != 0) {
        func_02005988(buf, arg);
        cleanup = 1;
        if (*(int *)((uint8_t *)self + 0x150) == 2) {
            flag = 1;
        }
        obj = func_ov005_02197d2c(obj, self, buf, flag);
    }
    *(void **)((uint8_t *)self + 0x12c) = obj;
    if (cleanup) {
        func_020059cc(buf);
    }
    func_020695ec(self, *(void **)((uint8_t *)self + 0x12c));
}
