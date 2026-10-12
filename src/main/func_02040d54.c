#include "ffc/types.h"

extern void func_0203c380(void);
extern void func_0203c394(void);
extern void func_020213f0(void *p);
extern void func_020211d4(void *p, uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_020af1f8[];
extern uint32_t data_020af2f8[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_02040d54(uint8_t *self) {
    uint32_t *obj;
    func_0203c380();
    func_0203c394();
    func_020213f0(*(void **)(self + 0x1b4));
    func_020211d4(*(void **)(self + 0x1b8), 0);
    obj = (uint32_t *)func_0205681c(0x88);
    if (obj != 0) {
        func_02056c9c(obj, 0);
        *(uint8_t **)obj = data_020af1f8;
        *(uint8_t **)((uint8_t *)obj + 0x80) = self + 0x8c;
        *(uint32_t *)((uint8_t *)obj + 0x84) = 0;
    }
    func_02056bc0(self + 0x14, obj);
    {
        Pair tmp = *(Pair *)data_020af2f8;
        *(Pair *)(self + 0x80) = tmp;
    }
}
