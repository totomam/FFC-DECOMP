#include "ffc/types.h"

typedef struct {
    uint32_t pad[6];
    void *f18;
} Obj;

extern void func_ov000_02168a5c(void *p);
extern void func_ov000_021653f4(void *p);

void func_ov001_02185ddc(Obj **pp) {
    Obj *p = *pp;
    func_ov000_02168a5c(p->f18);
    p->f18 = 0;
    func_ov000_021653f4(p);
}
