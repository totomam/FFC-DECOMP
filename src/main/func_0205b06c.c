#include "ffc/types.h"

extern char data_020b0e70[];
extern void func_020835fc(void);
extern void func_0208360c(void);
extern void func_02081a6c(int32_t);
extern void func_02053574(void);
extern void func_0205bc04(void *);
extern void func_0209d02c(void *, int32_t, int32_t, void *);
extern void func_02057c6c(void *);
extern void func_02059bd0(void *);
extern void func_0205b060(void);

void *func_0205b06c(void *p)
{
    uint8_t *self = (uint8_t *)p;
    void *obj;

    *(void **)self = data_020b0e70;
    obj = *(void **)(self + 0x10c);
    if (obj != 0) {
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[1])(obj);
    }
    func_020835fc();
    func_0208360c();
    func_02081a6c(-1);
    func_02053574();
    func_0205bc04(self + 0xf4);
    func_0205bc04(self + 0xdc);
    func_0209d02c(self + 0xac, 2, 0x18, (void *)func_0205b060);
    func_02057c6c(self + 0x70);
    func_02057c6c(self + 0x34);
    func_02059bd0(self);
    return self;
}
