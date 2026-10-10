#include "ffc/types.h"

typedef struct {
    void *a;
    uint32_t b;
} S;

extern void func_ov000_021653f4(void *p);

void func_ov001_02172a64(S *p) {
    void *x = p->a;
    p->b = 0;
    func_ov000_021653f4(x);
    p->a = 0;
}
