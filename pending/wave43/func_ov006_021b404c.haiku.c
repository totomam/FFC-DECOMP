#include "ffc/types.h"

typedef struct {
    uint8_t pad[4];
    int16_t cur;
    uint16_t limit;
    uint8_t idx;
    uint8_t flag;
} S;

extern int32_t func_0208130c(int32_t a, uint16_t b);
extern void func_02081b78(uint32_t reg, int32_t v);
extern void func_ov006_021b5774(int32_t a, void *b);
extern const uint8_t data_ov006_021b8ab8[4];
extern const uint8_t data_ov006_021b8ab4[4];
extern S *data_ov006_021bc81c;

void func_ov006_021b404c(void *a, S *p) {
    uint8_t buf[8];
    uint8_t *l;
    uint8_t *h;
    int32_t v;
    uint8_t sel;

    l = buf;
    l[4] = data_ov006_021b8ab8[0];
    l[5] = data_ov006_021b8ab8[1];
    l[6] = data_ov006_021b8ab8[2];
    l[7] = data_ov006_021b8ab8[3];
    h = l + 4;
    l[0] = data_ov006_021b8ab4[0];
    l[1] = data_ov006_021b8ab4[1];
    l[2] = data_ov006_021b8ab4[2];
    l[3] = data_ov006_021b8ab4[3];

    p->cur = p->cur + 1;
    v = func_0208130c(p->cur << 4, p->limit);

    sel = h[p->idx];
    if (sel & 1) {
        v = 16 - v;
    }
    if (sel & 0x10) {
        v = -v;
    }

    func_02081b78((p == data_ov006_021bc81c) ? 0x4001050 : 0x4000050, v);

    if (p->cur >= p->limit) {
        func_02081b78((p == data_ov006_021bc81c) ? 0x4001050 : 0x4000050, (int8_t)l[p->idx]);
        p->flag = 0;
        func_ov006_021b5774(1, a);
    }
}
