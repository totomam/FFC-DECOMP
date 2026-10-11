#include "ffc/types.h"

extern void *func_02056aec(void);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint8_t pad0[0x14];
} Obj;

typedef struct {
    uint8_t pad[0xf4];
    uint32_t *pa;
    uint32_t *pb;
    uint8_t pad2[0x14];
    Obj obj;
} Self;

void func_ov007_021a36cc(Self *self, uint32_t val)
{
    uint32_t *p;
    p = self->pa;
    *p = 1;
    p = self->pb;
    *p = val;
    func_02056bc0(&self->obj, func_02056aec());
}
