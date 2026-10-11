#include "ffc/types.h"

extern void func_ov000_021653f4(void *p);
extern void func_ov000_02168738(void *p);

typedef struct {
    uint8_t pad0[0x1c];
    void *a;
    uint8_t pad1[0xc];
    void *b;
    uint8_t pad2[0xc];
    void *c;
} S;

void func_ov001_0217c004(int unused, S *s)
{
    func_ov000_021653f4(s->a);
    s->a = 0;
    func_ov000_021653f4(s->b);
    s->b = 0;
    if (s->c != 0) {
        func_ov000_02168738(s->c);
        s->c = 0;
    }
    func_ov000_021653f4(s);
}
