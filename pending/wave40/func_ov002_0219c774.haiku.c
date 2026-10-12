#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    void *p4;
    void *p8;
    uint8_t flag;
} Tmp;

extern void func_ov002_02198d08(uint32_t a, uint32_t b);
extern uint32_t func_ov002_0219c5a8(void);
extern void func_02015e8c(Tmp *t, void *d);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void *data_020b8e44;

void func_ov002_0219c774(uint32_t *out, uint8_t *self)
{
    Tmp local;
    Tmp *t;
    uint32_t type;
    uint8_t *r4;

    func_ov002_02198d08(*(uint32_t *)(self + 0xc4), *(uint32_t *)(self + 0xb8));
    type = func_ov002_0219c5a8();
    t = &local;
    func_02015e8c(t, data_020b8e44);
    r4 = func_02052d90(t->p4, (uint32_t)t->p8);
    if (t->p4 != 0) {
        if (t->flag != 0) {
            func_02052d3c(t->p4, (uint32_t)t->p8);
        }
        func_02052c04(t->p4);
    }
    func_02053290(t);
    switch (type) {
    case 1:
        *out = *(uint32_t *)(r4 + 0x64);
        break;
    case 2:
        *out = *(uint32_t *)(r4 + 0x60);
        break;
    case 3:
        *out = *(uint32_t *)(r4 + 0x5c);
        break;
    }
}
