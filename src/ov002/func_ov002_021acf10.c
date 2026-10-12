#include "ffc/types.h"

typedef struct {
    uint32_t a0;
    void *a4;
    uint32_t a8;
    uint8_t a12;
} Local;

extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a18bc(uint32_t value);
extern void func_02015e8c(Local *out, uint32_t value);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

void func_ov002_021acf10(uint32_t *out, const void *obj)
{
    Local loc;
    Local *p;
    uint32_t kind;
    uint8_t *r4;

    kind = func_ov002_021a18bc(func_ov002_021aa850(obj));
    p = &loc;
    func_02015e8c(p, data_020b8e44);
    r4 = (uint8_t *)func_02052d90(p->a4, p->a8);
    if (p->a4 != 0) {
        if (p->a12 != 0) {
            func_02052d3c(p->a4, p->a8);
        }
        func_02052c04(p->a4);
    }
    func_02053290(p);

    switch (kind) {
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
