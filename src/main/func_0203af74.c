#include "ffc/types.h"

extern char data_020ae89c[];
extern uint32_t data_020b93b8;

extern void func_0203ad70(void *object);
extern void func_02035f58(void *object);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void func_0203adc8(void *self, void *buf, uint32_t a, uint32_t b, uint32_t c,
                          uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void *func_02035fd0(void *object);

void *func_0203af74(void **self, uint32_t idx, uint32_t flag)
{
    uint32_t buf[24];
    uint32_t t;

    func_0203ad70(self);
    *self = (void *)data_020ae89c;
    func_02035f58(buf);
    func_0201f36c((const void *)data_020b93b8, idx, buf);
    t = (flag != 0);
    func_0203adc8(self, buf, 0, 1, t, 1, 0, 1, flag, 0);
    func_02035fd0(buf);
    return self;
}
