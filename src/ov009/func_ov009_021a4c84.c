#include "ffc/types.h"

extern uint32_t func_020363bc(const void *object);
extern uint32_t func_02091b10(void *object, const void *first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(void *object, void *arg);
extern void *func_020059cc(void *object);
extern uint8_t data_ov009_021b0c40[];

void func_ov009_021a4c84(uint8_t *base, uint32_t idx, const void *obj)
{
    uint32_t buf[4];
    uint8_t *o;
    uint16_t v;

    o = (uint8_t *)func_020363bc(obj);
    v = *(uint16_t *)(o + 0x34);
    func_02091b10(&buf[0], data_ov009_021b0c40, v);
    func_02005988(&buf[1], &buf[0]);
    func_02068ddc(*(void **)(base + (idx << 2) + 0x114), &buf[1]);
    func_020059cc(&buf[1]);
}
