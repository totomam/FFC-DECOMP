#include "ffc/types.h"

extern uint32_t func_0206c184(uint32_t first, uint32_t second);

typedef struct {
    uint32_t a;
    uint32_t b;
    int32_t *arr;
    uint32_t n;
} S;

uint32_t func_0200d5a4(S *p) {
    int32_t r = (int32_t)func_0206c184(p->a, p->b);
    uint32_t i;
    for (i = 0; i < *(volatile uint32_t *)&p->n; i++) {
        if (r < p->arr[i]) {
            return i;
        }
    }
    return 0;
}
