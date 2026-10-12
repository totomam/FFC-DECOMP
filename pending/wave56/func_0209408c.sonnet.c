#include "ffc/types.h"

typedef struct {
    uint8_t p0;
    uint8_t p1;
    int16_t s2;
    uint8_t n4;
    uint8_t d[1];
} Rec;

int func_0209408c(Rec *a, Rec *b) {
    int i;
    int m;
    int res;
    Rec *r;
    uint8_t x = a->d[0];

    if (x == 0) {
        if (b->d[0] == 0) {
            return 1;
        }
        return 0;
    }
    if (b->d[0] == 0) {
        res = 1;
        if (x != 0) res = 0;
        return res;
    }
    if (a->s2 == b->s2) {
        m = a->n4;
        if (m > b->n4) {
            m = b->n4;
        }
        for (i = 0; i < m; i++) {
            if (a->d[i] != b->d[i]) {
                return 0;
            }
        }
        if (m == a->n4) a = b;
        for (; i < a->n4; i++) {
            if (a->d[i] != 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
