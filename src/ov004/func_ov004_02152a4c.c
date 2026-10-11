#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_ov004_02148680(void *p);
extern void func_ov004_02152ac0(void *p);

typedef struct {
    uint8_t *base;
    uint32_t cnt;
    uint32_t pad[2];
    uint32_t cnt2;
} Obj;

Obj *func_ov004_02152a4c(Obj *p)
{
    uint8_t *start = p->base + p->cnt2 * 0x38;
    uint8_t *end = start + p->cnt * 0x38;
    if (end > start) {
        do {
            end -= 0x38;
            func_0200d5ec(end + 0x28);
            func_ov004_02148680(end + 0x1c);
        } while (end > start);
    }
    p->cnt = 0;
    func_ov004_02152ac0(p);
    return p;
}
