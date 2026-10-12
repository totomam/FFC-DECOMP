#include "ffc/types.h"

typedef struct {
    uint16_t h0;
    int16_t s2;
    uint8_t n4;
    uint8_t arr[];
} S;

int func_0209411c(S *a, S *b) {
    int i;

    if (a->arr[0] == 0) {
        if (b->arr[0] != 0) {
            return 1;
        }
        return 0;
    }
    if (b->arr[0] == 0) {
        return 0;
    }
    if (a->s2 == b->s2) {
        int r4;
        int r5 = b->n4;
        int r6 = a->n4;
        r4 = r6;
        if (r6 > r5) {
            r4 = r5;
        }
        for (i = 0; i < r4; i++) {
            if (a->arr[i] < b->arr[i]) {
                return 1;
            }
            if (b->arr[i] < a->arr[i]) {
                return 0;
            }
        }
        if (r4 != r6) {
            return 0;
        }
        if (i >= r5) {
            return 0;
        }
        for (; i < r5; i++) {
            if (b->arr[i] != 0) {
                return 1;
            }
        }
        return 0;
    }
    return (a->s2 < b->s2) ? 1 : 0;
}
