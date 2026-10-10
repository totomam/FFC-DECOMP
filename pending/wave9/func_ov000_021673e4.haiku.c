#include "ffc/types.h"

typedef struct {
    void *a;
    void *b;
} S;

extern void func_ov000_02168738(void *p);
extern void func_ov000_021653f4(void *p);

void func_ov000_021673e4(S *p) {
    func_ov000_02168738(p->b);
    func_ov000_02168738(p->a);
    func_ov000_021653f4(p);
}
