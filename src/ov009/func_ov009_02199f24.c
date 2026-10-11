#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t func_02017ec8(uint32_t);
extern void func_02005988(void *obj, uint32_t v);
extern void func_ov009_02199e88(void *a, void *obj, uint32_t c);
extern void *func_020059cc(void *object);

void func_ov009_02199f24(void *a, int unused, uint32_t c)
{
    uint32_t buf[3];
    uint32_t v = func_02017ec8(data_020b8e44);
    func_02005988(buf, v);
    func_ov009_02199e88(a, buf, c);
    func_020059cc(buf);
}
