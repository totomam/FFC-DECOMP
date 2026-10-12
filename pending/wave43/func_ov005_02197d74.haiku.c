#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
} func_ov005_02197d74_arg;

extern void *func_02069210(void *object);
extern void *func_0203b918(void *object, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern void *data_ov005_021994e8;

#define OBJ98(self) (*(void **)((uint8_t *)(self) + 0x98))
#define VCALL(obj, idx) (((void **)(*(void **)(obj)))[(idx)])

void *func_ov005_02197d74(void *self, void *p1, void *p2, func_ov005_02197d74_arg s)
{
    func_02069210(self);
    *(void **)self = &data_ov005_021994e8;
    *(void **)((uint8_t *)self + 0x94) = p1;
    OBJ98(self) = func_0203b918(p2, *(uint32_t *)((uint8_t *)p1 + 0x10c), 2, 1);
    ((void (*)(void *, uint32_t, uint32_t))VCALL(OBJ98(self), 14))(OBJ98(self), 1, 0);
    ((void (*)(void *, uint32_t, uint32_t))VCALL(OBJ98(self), 3))(OBJ98(self), s.a, s.b);
    ((void (*)(void *, uint32_t))VCALL(OBJ98(self), 8))(OBJ98(self), 1);
    if (s.c != 0) {
        func_0205f2f0((void *)func_02064aa8(OBJ98(self)), 1);
    }
    ((void (*)(void *))VCALL(OBJ98(self), 10))(OBJ98(self));
    func_02056bc0((uint8_t *)self + 0x48, OBJ98(self));
    return self;
}
