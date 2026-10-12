#include "ffc/types.h"

typedef struct {
    uint8_t b;
} Flag;

extern int func_ov002_021c8694(uint32_t item);
extern uint32_t func_ov002_021c86a4(uint32_t item);
extern void func_0200d5d4(void *object, uint32_t *value, Flag flag);
extern void *func_020487a0(void *container, void *position, Flag flag);

typedef struct {
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
} Vec;

typedef struct {
    uint32_t *begin;
    uint32_t count;
} Cont;

void func_ov002_021c8794(Cont *c, Vec *out)
{
    uint32_t *p = c->begin;
    uint32_t *end = c->begin + c->count;
    uint32_t buf[4];
    Flag *fl = (Flag *)buf;

    for (; p != end; p++) {
        if (func_ov002_021c8694(*p)) {
            buf[2] = func_ov002_021c86a4(*p);
            if (out->size < out->cap) {
                out->size = out->size + 1;
                out->data[out->size - 1] = buf[2];
            } else {
                fl->b = 0;
                func_0200d5d4(out, &buf[2], *fl);
            }
            fl->b = 0;
            func_020487a0(c, p, *fl);
            return;
        }
    }
}
