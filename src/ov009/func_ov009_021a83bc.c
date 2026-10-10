#include "ffc/types.h"

extern void func_02035f58(void *object);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void *func_020363bc(const void *object);
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;

uint32_t func_ov009_021a83bc(void *unused, uint32_t *idx1, uint32_t *idx2)
{
    uint8_t a[0x60];
    uint8_t b[0x60];
    uint16_t x;
    uint16_t y;
    uint32_t r;

    func_02035f58(a);
    func_02035f58(b);
    func_0201f36c(data_020b93b8, *idx1, a);
    func_0201f36c(data_020b93b8, *idx2, b);
    x = *(uint16_t *)((uint8_t *)func_020363bc(a) + 0x56);
    y = *(uint16_t *)((uint8_t *)func_020363bc(b) + 0x56);
    r = (x < y) ? 1 : 0;
    func_02035fd0(b);
    func_02035fd0(a);
    return r;
}
