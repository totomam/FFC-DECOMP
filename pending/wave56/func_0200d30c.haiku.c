#include "ffc/types.h"

extern void *func_02056dd4(void *object);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_0206eac8(void *a, void *b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_0200d30c(void *p) {
    uint8_t *self = (uint8_t *)p;
    void *obj;

    if (*(void **)(self + 0x88) == 0) {
        if ((uint32_t)func_02056dd4(self) == func_0204f7d4(data_0213df18)) {
            if (*(void **)((uint8_t *)func_02056dd4(self) + 0x18) != 0) {
                obj = func_0205681c(0x2c);
                if (obj != 0) {
                    obj = func_0206eac8(obj, func_02056dd4(self), 0);
                }
                *(void **)(self + 0x88) = obj;
                ((void (*)(void *, Pair))(*(void ***)obj)[3])(
                    obj, *(Pair *)(self + 0x8c));
                obj = *(void **)(self + 0x88);
                ((void (*)(void *))(*(void ***)obj)[10])(obj);
                func_02056bc0(self + 0x48, *(void **)(self + 0x88));
            }
        }
    }

    if (*(void **)(self + 0x88) != 0) {
        if ((uint32_t)func_02056dd4(self) != func_0204f7d4(data_0213df18)) {
            obj = *(void **)(self + 0x88);
            *(uint32_t *)((uint8_t *)obj + 0xc) =
                (*(uint32_t *)((uint8_t *)obj + 0xc) & ~0xffu) | 2;
            *(void **)(self + 0x88) = 0;
        }
    }
}
