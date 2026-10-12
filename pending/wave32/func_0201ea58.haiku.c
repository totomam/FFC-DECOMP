#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *p;
    uint32_t idx;
    uint8_t flag;
} Loc;

extern void func_02016630(Loc *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_0201ea2c(void *obj, void *sub);
extern void func_02052d3c(void *p, uint32_t idx);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

uint16_t func_0201ea58(void *obj)
{
    Loc loc;
    Loc *l = &loc;
    uint16_t r;

    func_02016630(l, data_020b8e44);
    r = *(uint16_t *)func_0201ea2c(obj, func_02052d90(l->p, l->idx));
    if (l->p != 0) {
        if (l->flag != 0) {
            func_02052d3c(l->p, l->idx);
        }
        func_02052c04(l->p);
    }
    func_02053290(l);
    return r;
}
