#include "ffc/types.h"

extern void func_ov002_021c8e2c(void *p);
extern void func_ov002_021c9130(void);
extern void func_ov002_021c9124(void);
extern void func_0209cf5c(void *p, int a, int b, void (*c)(void), void (*d)(void));

void *func_ov002_021c8e44(void *p)
{
    func_ov002_021c8e2c(p);
    func_0209cf5c((uint8_t *)p + 0x38, 3, 8, func_ov002_021c9124, func_ov002_021c9130);
    return p;
}
