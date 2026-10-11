#include "ffc/types.h"

extern void func_ov000_0215b35c(void *a, uint32_t b);
extern void func_020751ec(uint32_t a, void *b);
extern void func_020751fc(uint32_t a, void *b);
extern void func_02074fa8(void);
extern void func_02074f58(void);
extern void func_02074f8c(void);

typedef struct {
    uint8_t pad0[0xc];
    uint32_t flags;
} Obj;

void func_02075478(Obj *p)
{
    func_ov000_0215b35c(func_02074fa8, *(uint32_t *)((uint8_t *)p + 0x88));
    func_020751ec(*(uint32_t *)((uint8_t *)p + 0x88), func_02074f58);
    func_020751fc(*(uint32_t *)((uint8_t *)p + 0x88), func_02074f8c);
    p->flags = (p->flags & ~0xffu) | 2;
}
