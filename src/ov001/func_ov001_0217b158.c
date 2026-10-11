#include "ffc/types.h"

extern void func_ov000_021653f4(uint32_t x);

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void func_ov001_0217b158(S *p) {
    func_ov000_021653f4(p->a);
    p->a = 0;
    func_ov000_021653f4(p->b);
    p->b = 0;
}
