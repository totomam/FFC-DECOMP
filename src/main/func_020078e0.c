#include "ffc/types.h"

extern uint32_t func_0207b8e8(void *p);

typedef struct {
    void *ptr;
    uint32_t u4;
    uint32_t u8;
    uint32_t val;
    uint8_t f10;
    uint8_t f11;
    uint8_t f12;
} FuncObj;

void func_020078e0(FuncObj *s)
{
    if (s->f10 != 0 && s->f11 == 0) {
        uint32_t c = (s->ptr != 0);
        if (c != 0) {
            s->val = func_0207b8e8(s);
        } else {
            s->val = 0;
            s->f10 = 0;
        }
    }
    if (s->f12 != 0 && s->f10 == 0) {
        s->f12 = 0;
    }
}
