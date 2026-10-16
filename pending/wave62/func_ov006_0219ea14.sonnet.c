#include "ffc/types.h"
extern uint8_t data_ov006_021baf3c[];
extern void func_ov006_0219eb28(void *a, uint8_t *b, int c, void *d, uint8_t *e, uint8_t *f, int g);
extern uint16_t func_ov006_0219f038(uint16_t a);
extern void func_ov006_0219ef5c(uint8_t *a, void *b, int c);
void func_ov006_0219ea14(int mode, uint8_t *buf, void *p, int16_t *len, uint16_t *flag, void *q)
{
    if (mode == 1) {
        *flag = 1;
        func_ov006_0219eb28(p, buf + 4, *len, q, buf + 2, data_ov006_021baf3c, 8);
        *(uint16_t *)buf = func_ov006_0219f038(*(uint16_t *)len);
        *len = *len + 4;
    } else {
        func_ov006_0219ef5c(buf, p, *len);
    }
}
