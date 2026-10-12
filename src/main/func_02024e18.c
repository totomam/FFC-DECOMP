#include "ffc/types.h"

extern uint8_t *func_02024e74(uint8_t *a, uint8_t *b, uint8_t **out, uint8_t *c, uint8_t *d);
extern uint8_t *func_02025808(uint8_t *a, uint8_t *b, uint8_t c, uint8_t d, uint8_t *e);
extern int8_t data_020ad79c;

uint8_t *func_02024e18(uint8_t *p0, uint8_t *p1)
{
    uint8_t *obj;
    uint8_t buf[4];
    uint8_t *ret;
    int r6;

    ret = func_02024e74(p0, p1, &obj, &buf[1], &buf[0]);
    r6 = 1;
    if (obj != 0) {
        if (obj[12] >= *p1) {
            r6 = 0;
        }
    }
    if (r6 != 0) {
        buf[2] = *p1;
        buf[3] = (uint8_t)data_020ad79c;
        return func_02025808(p0, ret, buf[1], buf[0], &buf[2]) + 12;
    }
    return obj + 12;
}
