#include "ffc/types.h"

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct {
    fn_t fn;
    uint32_t _04[3];
    uint32_t a10;
    uint32_t a14;
    uint32_t _18[2];
    uint32_t a20;
    uint32_t _24[2];
    uint32_t a2c;
} Obj;

void func_ov000_02166180(Obj *p)
{
    p->fn(p->a2c, p->a10, p->a14, p->a20);
}
