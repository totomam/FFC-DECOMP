#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void func_020375d8(uint32_t mask);
extern void func_ov016_0214690c(uint32_t a, uint32_t b, uint32_t c);
extern void *func_0205681c(uint32_t a);
extern void *func_ov013_021bd048(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020afb38[2];

typedef struct { uint32_t a, b; } P2;
void func_02044afc(void *param)
{
    uint8_t *p = (uint8_t *)param;
    void *r1;
    uint32_t a, b;

    func_020375f4(0x8000);
    func_ov016_0214690c(0, 0, 0);
    func_020375d8(0x8000);
    func_020375f4(0x244);
    r1 = func_0205681c(0x140);
    if (r1 != 0) {
        r1 = func_ov013_021bd048(r1, p + 0x8c);
    }
    func_02056bc0(p + 0x14, r1);
    {
    P2 *q = (P2 *)(p + 0x80);
    *q = *(P2 *)data_020afb38;
    }
}
