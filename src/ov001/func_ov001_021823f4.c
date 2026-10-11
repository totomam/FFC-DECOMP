#include "ffc/types.h"

typedef struct {
    void *p0;
    uint16_t h4;
    uint16_t pad6;
    void *p8;
    uint16_t hc;
} S;

extern void func_ov000_021652a8();
extern int func_ov001_02182328(void *p, uint16_t h, int z);
extern uint8_t data_ov001_02191a4c[];
extern uint8_t data_ov001_02191a70[];

void func_ov001_021823f4(S *s)
{
    if (s == 0) {
        func_ov000_021652a8(7, 0, 0x10, data_ov001_02191a4c);
        return;
    }
    {
        int r4 = func_ov001_02182328(s->p0, s->h4, 0);
        int r0 = func_ov001_02182328(s->p8, s->hc, 0);
        func_ov000_021652a8(7, 0, 0x10, data_ov001_02191a70, r4, r0);
    }
}
