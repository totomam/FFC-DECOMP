#include "ffc/types.h"

extern void func_0208bf10(uint32_t a, void *b, uint32_t *c, uint32_t *d);
extern uint32_t func_ov000_0214f148(void);
extern void func_ov000_021652a8(int a, int b, int c, void *d, uint32_t e, uint32_t f);
extern uint8_t data_ov001_02193778[];
extern uint8_t data_ov001_02193784[];

typedef struct {
    uint32_t pad;
    uint32_t w;
    uint32_t v;
} Tmp;

static inline uint32_t bs(uint32_t x){ return (uint8_t)(x >> 24) | ((x >> 8) & 0xff00) | ((x << 8) & 0x00ff0000) | ((x << 24) & 0xff000000);}

void func_ov001_021844c8(uint8_t *self, uint32_t arg)
{
    Tmp L;
    uint32_t r4;
    uint32_t t;
    uint32_t c;
    void (*fp)(uint32_t, uint32_t, uint32_t);

    func_0208bf10(arg, data_ov001_02193778, &L.v, &L.w);
    r4 = (uint16_t)L.w;
    L.v = bs(L.v);
    if (L.v == 0) {
        return;
    }
    if (r4 == 0) {
        return;
    }
    t = func_ov000_0214f148();
    func_ov000_021652a8(3, 0, 8, data_ov001_02193784, t, r4);
    if (*(uint32_t *)(self + 0x10c) == L.v && *(uint16_t *)(self + 0x110) == r4) {
        return;
    }
    *(uint32_t *)(self + 0x10c) = L.v;
    *(uint16_t *)(self + 0x110) = (uint16_t)r4;
    c = *(uint32_t *)(self + 0x114);
    fp = *(void (**)(uint32_t, uint32_t, uint32_t))(self + 0xa8);
    fp(L.v, r4, c);
}
