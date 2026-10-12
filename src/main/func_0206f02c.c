#include "ffc/types.h"

extern void *func_02056aec(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern void func_02054714(void *obj);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b1ef4[];
extern uint32_t data_020b1f08[];

void func_0206f02c(void *param) {
    void *six = func_02056aec(param);
    uint8_t *obj = (uint8_t *)func_0205681c(0x228);
    if (obj != 0) {
        func_020548b4(obj, 0, 0);
        *(void **)obj = (void *)data_020b1ef4;
        *(void **)(obj + 0x14) = (void *)data_020b1f08;
        *(uint32_t *)(obj + 0x220) = 0;
        *(uint8_t *)(obj + 0x224) = 1;
        func_02054714(obj + 0x14);
    }
    param = (void *)((uint32_t)param + 0x14);
    func_02056bc0(param, obj);
    func_02056bc0(param, six);
}
