#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint16_t b;
} S;

void func_ov006_0219f120(uint32_t v, S *p) {
    p->a = v;
    p->b = 1;
}
