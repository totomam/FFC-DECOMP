#include "ffc/types.h"
typedef struct { uint8_t a; uint8_t b; uint8_t c; uint8_t d; uint16_t e; } S;
extern S data_ov006_021bc78c;
extern uint8_t data_ov006_021b868e[];
extern void func_ov006_021ac4e4(void);
extern uint8_t *func_ov006_021afd28(void);
extern uint32_t func_0208130c(uint32_t, uint32_t);
void func_ov006_021ac56c(void) {
    S *s = &data_ov006_021bc78c;
    uint8_t *p;
    uint32_t k;
    if ((uint8_t)(s->a + 0xf5) <= 2) {
        func_ov006_021ac4e4();
        return;
    }
    p = func_ov006_021afd28();
    k = s->c + func_0208130c(s->e, 0x1d);
    switch (k) {
    case 2: s->a = p[0xf5] ? 2 : 3; break;
    case 6: s->a = p[0xf6] ? 7 : 8; break;
    default: s->a = data_ov006_021b868e[k]; break;
    }
    func_ov006_021ac4e4();
}
