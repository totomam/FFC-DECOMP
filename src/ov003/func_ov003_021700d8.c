#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *b;
    void *c;
    uint8_t flag;
} Local;

extern void func_02017754(Local *out, uint32_t x);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

void *func_ov003_021700d8(uint32_t index)
{
    Local local;
    Local *s = &local;
    uint8_t *p;
    void *r;

    func_02017754(s, data_020b8e44);
    p = func_02052d90(s->b, s->c);
    r = *(void **)(p + *(uint32_t *)(p + 8) + index * 12 + 8);
    if (local.b != 0) {
        if (s->flag != 0) {
            func_02052d3c(s->b, s->c);
        }
        func_02052c04(s->b);
    }
    func_02053290(s);
    return r;
}
