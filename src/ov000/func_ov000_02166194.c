#include "ffc/types.h"

extern void func_ov000_021673e4(void *p);
extern void func_ov000_021653f4(void *p);
extern void func_ov001_021734d0(void *p, void *q);

typedef struct {
    uint32_t pad0[5];
    void *f14;
    void *f18;
    void *f1c;
    uint32_t pad1[2];
    void *f28;
} S;

int func_ov000_02166194(S *p)
{
    if (p->f14 != 0) {
        func_ov000_021673e4(p->f14);
    }
    if (p->f18 != 0) {
        func_ov000_021653f4(p->f18);
    }
    if (p->f1c != 0) {
        func_ov001_021734d0(p->f28, p->f1c);
    }
    func_ov000_021653f4(p);
    return 1;
}
