#include "ffc/types.h"

typedef struct {
    void *f0;
    uint16_t f4;
    uint16_t f6;
    uint8_t f8;
    uint8_t f9;
} S;

extern S *data_ov006_021bc81c;
extern void *func_ov006_021b570c(int a, void *b, void *c, int d);
extern void func_ov006_021b4138(void);

int func_ov006_021b4100(uint16_t p) {
    S *s = data_ov006_021bc81c;
    if (s->f9 != 0) {
        return 0;
    }
    s->f0 = func_ov006_021b570c(1, func_ov006_021b4138, s, 0xc8);
    s->f4 = 0;
    s->f6 = p;
    s->f9 = 1;
    return 1;
}
