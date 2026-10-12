/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void *func_02056dd4(void *object);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_0206eac8(void *a, void *b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;
}
struct Pair { uint32_t a; uint32_t b; };
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(Pair p); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); uint32_t f; };
extern "C" void func_0200d30c(void *p) {
    uint8_t *self = (uint8_t *)p;
    if (*(O **)(self + 0x88) == 0) {
        if ((uint32_t)func_02056dd4(self) == func_0204f7d4(data_0213df18)) {
            if (*(void **)((uint8_t *)func_02056dd4(self) + 0x18) != 0) {
                O *obj = (O*)func_0205681c(0x2c);
                if (obj != 0) {
                    obj = (O*)func_0206eac8(obj, func_02056dd4(self), 0);
                }
                *(O **)(self + 0x88) = obj;
                obj->v3(*(Pair *)(self + 0x8c));
                (*(O **)(self + 0x88))->v10();
                func_02056bc0(self + 0x48, *(void **)(self + 0x88));
            }
        }
    }
    if (*(void **)(self + 0x88) != 0) {
        if ((uint32_t)func_02056dd4(self) != func_0204f7d4(data_0213df18)) {
            uint8_t *obj = *(uint8_t **)(self + 0x88);
            *(uint32_t *)(obj + 0xc) = (*(uint32_t *)(obj + 0xc) & ~0xffu) | 2;
            *(void **)(self + 0x88) = 0;
        }
    }
}
