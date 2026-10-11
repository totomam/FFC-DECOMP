#include "ffc/types.h"

typedef struct {
    uint32_t pad[5];
    void *f14;
    void *f18;
    int32_t f1c;
    uint8_t f20;
} FuncOv003Obj;

extern int32_t func_020424e0(void *p);
extern void func_ov003_021498d4(int32_t a, void *b, int32_t c);
extern void func_ov003_02149894(int32_t a, void *b, int32_t c);

void func_ov003_021696d8(FuncOv003Obj *p)
{
    if (p->f18 == 0) {
        return;
    }
    int32_t r = func_020424e0(p->f14);
    if (p->f20 != 0) {
        func_ov003_021498d4(r, p->f18, p->f1c);
    } else {
        func_ov003_02149894(r, p->f18, p->f1c);
    }
}
