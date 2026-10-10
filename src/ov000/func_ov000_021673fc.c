#include "ffc/types.h"

typedef struct {
    void *a;
    void *b;
} S;

extern void func_ov000_02168950(void *p);
extern void func_ov000_021680b4(void *p);

void func_ov000_021673fc(S *p) {
    func_ov000_02168950(p->b);
    func_ov000_02168950(p->a);
    func_ov000_021680b4(p);
}
