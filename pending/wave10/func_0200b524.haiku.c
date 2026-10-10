#include "ffc/types.h"

typedef struct {
    uint8_t a;
} Small;

extern void func_0200b5f4(void *obj, uint32_t a, Small b);
extern void func_02056844(uint32_t p);
extern void func_0200b704(void *obj, uint32_t a, Small b);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
} Obj;

void func_0200b524(Obj *self, int unused, uint32_t p)
{
    Small s;

    s.a = 0;
    func_0200b5f4(self, self->f4, s);
    if (self->f0 != 0) {
        func_02056844(self->f0);
        self->f0 = 0;
        self->f8 = 0;
    }
    s.a = 0;
    func_0200b704(self, p, s);
}
