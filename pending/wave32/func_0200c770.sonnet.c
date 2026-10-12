#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    void *b;
    uint32_t c;
    uint8_t flag;
} Loc;

typedef struct {
    uint32_t pre;
    Loc l;
} Frame;

extern uint32_t data_020b8e44;
extern void func_02019548(void *p, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02068580(void *a, uint32_t b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

void func_0200c770(uint8_t *self) {
    Frame f;
    Loc *p;
    uint8_t *s;

    p = &f.l;
    s = self;
    func_02019548(p, data_020b8e44);
    uint32_t v = ((uint32_t *)func_02052d90(f.l.b, f.l.c))[3];
    s += 0x94;
    func_02068580(*(void **)s, v);
    if (f.l.b != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->b, p->c);
        }
        func_02052c04(p->b);
    }
    func_02053290(p);
}
