#include "ffc/types.h"

typedef struct G {
    uint8_t pad0[0x1d]; uint8_t f1d; uint8_t pad1[0x0e];
    void (*cb)(void *, uint8_t, uint32_t);
    uint32_t arg;
    uint8_t pad2[0x28];
    uint32_t f5c;
} G;
typedef struct D { uint32_t a,b,c; G *g; } D;
extern D data_ov000_0217004c;
extern void func_ov000_02159014(void);
extern uint32_t func_ov000_0215981c(void);
extern void func_ov000_021591a8(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02159b50(void);

void func_ov000_0215988c(void *p)
{
    if (data_ov000_0217004c.g == 0 || p == 0) return;
    func_ov000_02159014();
    if (func_ov000_0215981c() != 0) {
        if (data_ov000_0217004c.g->f5c != 0) {
            func_ov000_021591a8(4, data_ov000_0217004c.g->f5c, 0);
            data_ov000_0217004c.g->f5c = 0;
        }
        G *g = data_ov000_0217004c.g;
        g->cb(p, g->f1d, g->arg);
    }
    func_ov000_02159b50();
}
