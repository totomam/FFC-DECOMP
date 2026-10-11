#include "ffc/types.h"

extern int32_t func_ov006_0219eb28(int32_t a, void *b, int32_t c, int32_t d, void *e, void *f, int32_t g);
extern uint16_t func_ov006_0219f038(uint16_t a);
extern int32_t func_ov006_0219ef5c(void *a, int32_t b, int32_t c, void *d);
extern uint8_t data_ov006_021baf3c[];

int32_t func_ov006_0219ea14(int32_t op, uint16_t *p1, int32_t p2, int16_t *p3, uint16_t *p4, int32_t p5) {
    if (op == 1) {
        *p4 = 1;
        func_ov006_0219eb28(p2, (uint8_t *)p1 + 4, *p3, (void *)p5, (uint8_t *)p1 + 2, data_ov006_021baf3c, 8);
        p1[0] = func_ov006_0219f038(*(uint16_t *)p3);
        return (*p3 += 4);
    }
    return func_ov006_0219ef5c(p1, p2, *p3, p3);
}
