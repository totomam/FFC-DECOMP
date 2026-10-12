#include "ffc/types.h"

typedef struct {
    uint8_t *p;
    int32_t flag;
} S;

int func_0209270c(S *s, int arg, int mode) {
    switch (mode) {
    case 0: {
        uint8_t *p = s->p;
        uint8_t c = *p;
        if (c == 0) {
            s->flag = 1;
            return -1;
        }
        s->p = p + 1;
        return c;
    }
    case 1:
        if (s->flag == 0) {
            s->p = s->p - 1;
        } else {
            s->flag = 0;
        }
        return arg;
    case 2:
        return s->flag;
    default:
        return 0;
    }
}
