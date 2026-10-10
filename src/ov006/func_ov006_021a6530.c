#include "ffc/types.h"

typedef struct {
    uint32_t n : 4;
    uint32_t rest : 28;
} S;

extern uint32_t data_ov006_021bc70c[];

uint32_t func_ov006_021a6530(void) {
    S *s = (S *)&data_ov006_021bc70c[2];
    return s->n;
}
