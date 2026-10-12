#include "ffc/types.h"

typedef struct {
    uint8_t pad0[8];
    uint8_t type;
    uint8_t flag9;
    uint8_t pad10[0x46];
    uint32_t f50;
} Obj;

extern uint32_t data_02141510[];
extern void func_ov000_02146940(Obj *p, int32_t a);
extern int32_t func_ov000_0214b7b8(Obj *p);

int32_t func_ov000_02147e80(void)
{
    Obj *p;
    int32_t r;

    p = *(Obj **)((uint8_t *)data_02141510[1] + 0xa4);
    if (p != 0) {
        if (p->type == 4) {
            func_ov000_02146940(p, 1);
        }
        if (p->flag9 != 0) {
            return func_ov000_0214b7b8(p);
        }
        r = p->f50;
        if (r == 0) {
            if (p->type != 4) {
                if ((uint8_t)(p->type + 0xf6) > 1) {
                    return -1;
                }
            }
        }
        return r;
    }
    return 0;
}
