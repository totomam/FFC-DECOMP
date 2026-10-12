#include "ffc/types.h"

extern void func_0201cf34(uint32_t handle, void *buf);
extern void *func_020424e0(void *obj);
extern void func_ov003_0214649c(void);
extern uint32_t *func_ov003_02153470(void);
extern int func_020192f4(uint32_t a, uint32_t b);
extern uint32_t func_ov003_02152bfc(uint32_t a, uint32_t b);
extern uint32_t func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;

void func_ov003_02168494(uint8_t *p)
{
    uint32_t buf[38];

    func_0201cf34(data_020b93b8, buf);
    if (((buf[7] << 25) >> 30) != 0) {
        func_020424e0(*(void **)(p + 0x80));
        func_ov003_0214649c();
        if (func_020192f4(data_020b8e44, *func_ov003_02153470())) {
            uint8_t *b = (uint8_t *)func_020424e0(*(void **)(p + 0x80));
            if (*(uint32_t *)(b + 0x180) != 0) {
                uint8_t *c = (uint8_t *)func_020424e0(*(void **)(p + 0x80));
                uint32_t v = func_ov003_02152bfc(*(uint32_t *)(c + 0x180), 1);
                func_02056bc0(p + 0x14, (void *)v);
            }
        }
    }
    {
        uint32_t r = func_02056aec(p);
        func_02056bc0(p + 0x14, (void *)r);
    }
}
