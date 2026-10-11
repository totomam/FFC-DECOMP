#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x80];
    uint32_t sub;
} Obj;

extern void func_02022d9c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02022bec(uint32_t a, uint32_t b);

void func_ov009_021a3120(Obj *a, uint32_t p1, uint32_t p2, uint32_t p3, uint16_t p5, uint16_t p6)
{
    func_02022d9c(a->sub, p1, p3, p5, p6, 0);
    func_02022bec(a->sub, p2);
}
