#include "ffc/types.h"

extern uint8_t data_020af954[];
extern void *func_020424e0(void *obj);
extern void *func_ov003_02146494(void *obj);
extern void func_0200d5ec(void *obj);
extern void func_0209d02c(void *base, int count, int size, void *(*ctor)(void *));
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *obj);

void *func_020454cc(void *param_1)
{
    uint8_t *self = (uint8_t *)param_1;
    uint8_t *sub;
    uint8_t *r;

    *(uint8_t **)self = data_020af954;
    sub = *(uint8_t **)(self + 0x88);
    if (sub != 0 && *(void **)(sub + 0x8c) != 0) {
        r = (uint8_t *)func_020424e0(sub);
        r = (uint8_t *)func_ov003_02146494(r);
        *(uint32_t *)(r + 0xe0) = 0;
    }
    func_0200d5ec(self + 0x464);
    func_0209d02c(self + 0x284, 5, 0x60, func_02035fd0);
    func_0209d02c(self + 0xa4, 5, 0x60, func_02035fd0);
    func_02056db0(self);
    return self;
}
