#include "ffc/types.h"
typedef struct { int x, y; } V;
typedef struct { V pos; int pad[6]; } B;
extern void func_ov003_021464f4(uint32_t a, uint32_t b);
extern uint8_t *func_ov003_02155b40(void);
void func_ov003_0214e0d4(V *out, uint8_t *in) {
    uint8_t *p;
    B b;
    func_ov003_021464f4(*(uint32_t*)(in + 0x14), *(uint16_t*)(in + 0x18));
    p = func_ov003_02155b40();
    V *q = (V*)(p + 8);
    b.pos.y = *(int*)(in + 0x2c) + q->y;
    b.pos.x = q->x + *(int*)(in + 0x28);
    *out = b.pos;
}
