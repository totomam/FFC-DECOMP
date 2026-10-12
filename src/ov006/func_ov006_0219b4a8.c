#include "ffc/types.h"

extern uint32_t func_0208d570(void *p);

typedef struct {
    uint8_t pad[6];
    uint16_t f6;
} S;

int func_ov006_0219b4a8(S *p) {
    uint32_t ret;
    uint16_t orig;
    uint16_t v;
    uint16_t n;
    uint32_t t;

    ret = func_0208d570(p);
    if (ret == 0) {
        return 0;
    }
    orig = p->f6;
    n = 0;
    v = orig;
    do {
        if ((ret & v) != 0 && orig != v) {
            p->f6 = v;
            break;
        }
        n++;
        if (v == 0) {
            t = 1;
        } else {
            t = v << 1;
        }
        v = (uint16_t)t;
    } while (n < 16);
    return 1;
}
