#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint8_t pad[0xb8];
    uint32_t x;
    uint32_t y;
} Obj;

extern void *func_02056aec(void *obj);
extern void *func_0206c270(void *obj);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov013_021c4368;

void func_ov013_021bed7c(void *self)
{
    Obj *o = (Obj *)self;
    void *a = func_02056aec(*(void **)((uint8_t *)o + 0x118));
    void *b = func_0206c270(*(void **)((uint8_t *)o + 0xf4));
    uint8_t *t = (uint8_t *)o + 0x14;
    func_02056bc0(t, b);
    func_02056bc0(t, a);
    {
        uint32_t x = data_ov013_021c4368.a;
        uint32_t y = data_ov013_021c4368.b;
        o->x = x;
        o->y = y;
    }
}
