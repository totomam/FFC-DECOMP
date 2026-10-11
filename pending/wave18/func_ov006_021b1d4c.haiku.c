#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint8_t pad[8];
    uint16_t c;
} S;

extern S *data_ov006_021bc7fc;
extern void func_ov006_0219c6e4(void);

void func_ov006_021b1d4c(void) {
    S *p = data_ov006_021bc7fc;
    if (p->a == 4) {
        if (p->b == p->c) {
            func_ov006_0219c6e4();
        }
    }
}
