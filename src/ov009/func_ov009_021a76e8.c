#include "ffc/types.h"

extern void func_02035f58(void *object);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern uint32_t func_0203608c(void *object);
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;

int func_ov009_021a76e8(int unused, uint32_t *idx1, uint32_t *idx2)
{
    uint8_t a[0x60];
    uint8_t b[0x60];
    uint32_t r;

    func_02035f58(a);
    func_02035f58(b);
    func_0201f36c(data_020b93b8, *idx1, a);
    func_0201f36c(data_020b93b8, *idx2, b);
    r = func_0203608c(a) > func_0203608c(b);
    func_02035fd0(b);
    func_02035fd0(a);
    return r;
}
