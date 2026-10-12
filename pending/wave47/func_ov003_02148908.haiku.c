#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t a;
    uint32_t b;
    uint8_t flag;
} Obj;

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern void func_020193a0(Obj *o, uint32_t v);
extern void func_02056c4c(uint32_t v);
extern uint32_t *func_ov003_02153470(uint32_t v);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *o);
extern void func_0201f960(uint32_t h, uint32_t i, uint8_t *out);
extern void func_ov003_021488d4(uint8_t *self, uint32_t i);

void func_ov003_02148908(uint8_t *self)
{
    Obj o;
    uint8_t loc[0x2c];
    uint32_t i;
    uint32_t r4;
    void *p;

    func_020193a0(&o, data_020b8e44);
    func_02056c4c(*(uint32_t *)(self + 0x268));
    r4 = *func_ov003_02153470(*(uint32_t *)(self + 0x9c));
    p = func_02052d90(o.a, o.b);
    if (r4 != *(uint16_t *)((uint8_t *)p + 0xc)) {
        if (o.a != 0) {
            if (o.flag != 0) {
                func_02052d3c(o.a, o.b);
            }
            func_02052c04(o.a);
        }
        func_02053290(&o);
        return;
    }

    for (i = 0; i < 20; i++) {
        func_0201f960(data_020b93b8, i, loc);
        if (loc[0] != 0 && loc[2] == 0) {
            func_ov003_021488d4(self, i);
        } else {
            *(uint32_t *)(self + 0x218 + i * 4) = 0;
        }
    }

    if (o.a != 0) {
        if (o.flag != 0) {
            func_02052d3c(o.a, o.b);
        }
        func_02052c04(o.a);
    }
    func_02053290(&o);
}
