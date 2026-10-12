#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern int32_t func_0201c1f0(uint32_t a, int32_t b, int32_t c);
extern void func_0201c1d0(uint32_t a, int32_t b, int32_t c, int32_t d);
extern int32_t func_0209a76c(int32_t a, int32_t b);

typedef struct {
    uint32_t f0, f1, f2, f3, f4;
    uint32_t kind;
    uint32_t x18;
    uint32_t x1c;
    uint32_t x20;
    uint32_t x24;
} S;

void func_ov003_02165fc0(S *p)
{
    int32_t a = func_0201c1f0(data_020b93b8, p->x18, p->x1c);
    int32_t b = func_0201c1f0(data_020b93b8, p->x20, p->x24);

    switch (p->kind) {
    case 0x51:
        break;
    case 0x52:
        b = a + b;
        break;
    case 0x53:
        b = a - b;
        break;
    case 0x54:
        b = a * b;
        break;
    case 0x55:
        b = func_0209a76c(a, b);
        break;
    default:
        return;
    }
    func_0201c1d0(data_020b93b8, p->x18, p->x1c, b);
}
