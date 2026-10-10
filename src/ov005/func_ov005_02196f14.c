#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint8_t data_ov005_02199310[];
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(uint32_t obj, void *arg);
extern void *func_020059cc(void *object);

void func_ov005_02196f14(uint8_t *self)
{
    uint32_t buf1[3];
    uint32_t buf0[3];
    uint32_t id;

    if (*(uint32_t *)(self + 0x84) == 0) {
        return;
    }
    id = func_0201c9ac(data_020b93b8, 3);
    func_02091b10(buf1, (uint32_t)data_ov005_02199310, id);
    func_02005988(buf0, buf1);
    func_02068ddc(*(uint32_t *)(self + 0x84), buf0);
    func_020059cc(buf0);
}
