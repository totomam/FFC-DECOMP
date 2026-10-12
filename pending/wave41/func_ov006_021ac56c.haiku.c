#include "ffc/types.h"

typedef struct {
    uint8_t s0;
    uint8_t s1;
    uint8_t s2;
    uint8_t s3;
    uint16_t h4;
} St;

extern void func_ov006_021ac4e4(void);
extern uint8_t *func_ov006_021afd28(void);
extern uint32_t func_0208130c(uint32_t a, uint32_t b);
extern St data_ov006_021bc78c;
extern uint8_t data_ov006_021b868e[];

void func_ov006_021ac56c(void)
{
    St *g = &data_ov006_021bc78c;
    uint8_t *p;
    uint32_t idx;
    uint8_t v;

    if ((uint8_t)(g->s0 + 0xf5) <= 2) {
        func_ov006_021ac4e4();
        return;
    }

    p = func_ov006_021afd28();
    idx = g->s2 + func_0208130c(g->h4, 0x1d);

    switch (idx) {
    case 2:
        p += 0xf5;
        if (*p != 0) {
            v = 2;
        } else {
            v = 3;
        }
        break;
    case 6:
        p += 0xf6;
        if (*p != 0) {
            v = 7;
        } else {
            v = 8;
        }
        break;
    default:
        v = data_ov006_021b868e[idx];
        break;
    }

    g->s0 = v;
    func_ov006_021ac4e4();
}
