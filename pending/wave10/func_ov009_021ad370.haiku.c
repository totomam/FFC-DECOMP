#include "ffc/types.h"

extern void func_02035f58(void *object);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern void *func_020363bc(const void *object);
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;

int func_ov009_021ad370(int unused, const uint32_t *a, const uint32_t *b)
{
    uint8_t objA[0x60];
    uint8_t objB[0x60];
    uint16_t x;
    uint16_t y;
    int result;

    func_02035f58(objA);
    func_02035f58(objB);
    func_0201f460(data_020b93b8, *a, objA);
    func_0201f460(data_020b93b8, *b, objB);

    x = *(uint16_t *)((uint8_t *)func_020363bc(objA) + 0x34);
    y = *(uint16_t *)((uint8_t *)func_020363bc(objB) + 0x34);
    if (x < y) {
        result = 1;
    } else {
        result = 0;
    }

    func_02035fd0(objB);
    func_02035fd0(objA);
    return result;
}
