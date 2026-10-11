#include "ffc/types.h"

extern void func_ov000_021653f4(uint32_t p);
extern void func_ov000_02168738(uint32_t p);

typedef struct {
    uint32_t pad0;
    uint32_t pad4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18[8];
    uint32_t f38;
} Obj;

void func_ov001_0217cb08(Obj *p)
{
    func_ov000_021653f4(p->f8);
    p->f8 = 0;
    func_ov000_021653f4(p->fc);
    p->fc = 0;
    func_ov000_021653f4(p->f10);
    p->f10 = 0;
    func_ov000_021653f4(p->f14);
    p->f14 = 0;
    func_ov000_02168738(p->f38);
    p->f38 = 0;
    func_ov000_021653f4((uint32_t)p);
}
