#include "ffc/types.h"

extern void func_ov000_021653f4(uint32_t v);
extern uint32_t func_ov000_021658c0(uint32_t *p);
extern uint32_t func_ov001_0217f2a0(uint32_t v);
extern void func_ov001_0217f30c(void *self);

typedef struct {
    uint32_t unk0;
    uint32_t type;
    uint32_t unk8;
    uint32_t val;
    uint32_t val2;
} S;

void func_ov001_0217f2c4(S *s, uint32_t *p) {
    if (s->type == 0) {
        s->val = *p;
    } else if (s->type == 1) {
        uint32_t b = p[1];
        uint32_t a = p[0];
        s->val = a;
        s->val2 = b;
    } else if (s->type == 2) {
        if (s->val != 0) {
            func_ov000_021653f4(s->val);
        }
        if (p == 0) {
            s->val = 0;
        } else {
            s->val = func_ov001_0217f2a0(func_ov000_021658c0(p));
        }
    }
    func_ov001_0217f30c(s);
}
