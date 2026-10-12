#include "ffc/types.h"

extern void func_02062848(void *object);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern uint32_t data_020ae018[];
extern uint32_t data_020adf58[];

typedef struct Obj {
    uint32_t *vt;
} Obj;

void *func_02031360(void *this, void *p)
{
    uint32_t *self = this;

    func_02062848(this);
    self[0] = (uint32_t)data_020ae018;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[5] = (uint32_t)func_0203b95c((void *)data_020adf58[1], p, 0, 1);
    ((void (*)(void *, uint32_t, uint32_t))(((Obj *)self[5])->vt[0x38 / 4]))((void *)self[5], 3, 0);

    func_0205f2f0((void *)func_02064aa8((void *)self[5]), 1);
    return this;
}
