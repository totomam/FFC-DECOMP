#include "ffc/types.h"

extern uint32_t data_020af954[];
extern void *func_020424e0(void *p);
extern void *func_ov003_02146494(void *p);
extern void func_0200d5ec(void *p);
extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void *(*fn)(void *));
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern void *func_02035fd0(void *object);

void *func_02045534(void *param0)
{
    uint8_t *obj = (uint8_t *)param0;
    void *t;
    uint8_t *x;

    *(uint32_t **)obj = data_020af954;
    t = *(void **)(obj + 0x88);
    if (t != 0 && *(void **)((uint8_t *)t + 0x8c) != 0) {
        x = (uint8_t *)func_ov003_02146494(func_020424e0(t));
        *(uint32_t *)(x + 0xe0) = 0;
    }
    func_0200d5ec(obj + 0x464);
    func_0209d02c(obj + 0x284, 5, 0x60, func_02035fd0);
    func_0209d02c(obj + 0xa4, 5, 0x60, func_02035fd0);
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
