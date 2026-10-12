#include "ffc/types.h"

typedef struct {
    uint8_t p0;
    uint8_t p1;
    int16_t s2;
    uint8_t n4;
    uint8_t d[1];
} Rec;

int func_0209408c(Rec *a, Rec *b) {
    int m;
    int i;
    Rec *r;

    if (a->d[0] == 0) {
        if (b->d[0] == 0) {
            return 1;
        }
        return 0;
    }
    if (b->d[0] == 0) {
        return 0;
    }
    if (a->s2 != b->s2) {
        return 0;
    }
    m = a->n4;
    if (m > b->n4) {
        m = b->n4;
    }
    for (i = 0; i < m; i++) {
        if (a->d[i] != b->d[i]) {
            return 0;
        }
    }
    r = (m == a->n4) ? b : a;
    for (; i < r->n4; i++) {
        if (r->d[i] != 0) {
            return 0;
        }
    }
    return 1;
}
