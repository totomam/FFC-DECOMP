#include "ffc/types.h"

extern uint32_t func_ov001_02186dbc(uint32_t a, uint32_t b);
extern void func_ov000_02168abc(void *p, uint32_t *q);
extern void func_ov000_021652a8(int a, int b, int c, void *d, uint32_t e, uint32_t f);
extern uint8_t data_ov001_0219420c[];

typedef struct {
    uint8_t pad[0x18];
    void *field18;
} S;

void func_ov001_02185df4(S *s, uint32_t a1, uint32_t a2)
{
    uint32_t t[2];
    t[0] = func_ov001_02186dbc(0, a1);
    t[1] = func_ov001_02186dbc(0, a2);
    func_ov000_02168abc(s->field18, t);
    func_ov000_021652a8(4, 4, 0x10, data_ov001_0219420c, a1, a2);
}
