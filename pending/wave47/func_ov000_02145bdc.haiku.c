#include "ffc/types.h"

typedef struct {
    uint32_t addr;
    uint32_t d;
    uint16_t x;
    uint16_t port;
} Ent;

extern uint8_t data_ov000_0216bc60[];
extern Ent data_ov000_0216bd78[8];
extern int func_ov000_02145734(uint32_t a);
extern int func_ov000_021457a4(uint32_t a);
extern uint64_t func_020882cc(void);
extern void func_02084e04(void *p0, void *p1, int n);

void func_ov000_02145bdc(void *p0, uint32_t a, int c)
{
    uint16_t port;
    uint32_t i;
    uint32_t idx;
    int bestv;

    if (a == 0x7f000001) {
        return;
    }
    if (a == *(uint32_t *)(data_ov000_0216bc60 + 0x50)) {
        return;
    }
    if (func_ov000_02145734(a) == 0) {
        return;
    }
    if (func_ov000_021457a4(a) != 0) {
        return;
    }
    port = (uint16_t)(func_020882cc() >> 16);

    for (i = 0; i < 8; i++) {
        if (data_ov000_0216bd78[i].addr == a) {
            data_ov000_0216bd78[i].port = port;
            func_02084e04(p0, &data_ov000_0216bd78[i].d, 6);
            return;
        }
    }
    if (c == 0) {
        return;
    }
    bestv = 0;
    idx = 0;
    for (i = 0; i < 8; i++) {
        int d;
        if (data_ov000_0216bd78[i].addr == 0) {
            idx = i;
            break;
        }
        d = (int16_t)(port - data_ov000_0216bd78[i].port);
        if (d > bestv) {
            bestv = (uint16_t)(port - data_ov000_0216bd78[i].port);
            idx = i;
        }
    }
    data_ov000_0216bd78[idx].addr = a;
    func_02084e04(p0, &data_ov000_0216bd78[idx].d, 6);
    data_ov000_0216bd78[idx].port = port;
}
