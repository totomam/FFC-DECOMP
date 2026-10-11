#include "ffc/types.h"

extern void func_ov001_021874c4(void *p);
extern void func_ov001_02186d68(void *p);
extern void func_ov001_02185db8(void *p);
extern void func_ov000_02168738(void *p);

typedef struct {
    uint32_t a;
    void *b;
} FuncOv001Obj;

void func_ov001_02187510(FuncOv001Obj *p)
{
    func_ov001_021874c4(p);
    func_ov001_02186d68(p);
    func_ov001_02185db8(p);
    if (p->b != 0) {
        func_ov000_02168738(p->b);
    }
    p->b = 0;
}
