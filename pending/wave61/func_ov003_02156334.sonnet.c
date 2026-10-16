#include "ffc/types.h"
extern void func_02024b20(uint32_t a, int32_t b);
typedef struct { uint32_t a, b; } S;
typedef struct { uint8_t pad[0x34]; uint32_t x; } P;
typedef struct { uint8_t pad[0x110]; P *p; } O;
static inline S *init(S *s, O *obj)
{
    P *p = obj->p;
    s->a = 0;
    s->b = 0;
    if (p != 0 && p->x != 0) {
        func_02024b20(p->x, -1);
    }
    return s;
}
void func_ov003_02156334(S *out, O *obj)
{
    init(out, obj);
}
