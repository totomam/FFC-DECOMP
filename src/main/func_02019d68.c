#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    void *a;
    void *b;
    uint8_t flag;
} Tmp;

extern void func_02016488(Tmp *t, void *a, uint32_t c);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *x, void *y);
extern void func_02052c04(void *x);
extern void *func_02053290(void *object);

uint32_t func_02019d68(void *a, uint32_t b, uint32_t c) {
    Tmp t;
    Tmp *p;
    uint32_t i;
    uint32_t r6;
    uint8_t *ent;

    func_02016488(&t, a, c);
    r6 = 1;
    for (i = 0; i < *(uint32_t *)((uint8_t *)func_02052d90(t.a, t.b) + 8); i++) {
        uint8_t *base = func_02052d90(t.a, t.b);
        ent = base + *(uint32_t *)(base + 0xc) + (i << 3);
        if (b >= *(uint16_t *)ent) {
            switch (c) {
            case 3:
                r6 = *(uint16_t *)(ent + 4);
                break;
            case 4:
                r6 = *(uint16_t *)(ent + 6);
                break;
            default:
                r6 = *(uint16_t *)(ent + 2);
                break;
            }
        }
    }

    p = &t;
    if (p->a != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->a, p->b);
        }
        func_02052c04(p->a);
    }
    func_02053290(p);
    return r6;
}
