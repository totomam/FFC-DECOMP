#include "ffc/types.h"

typedef struct {
    int32_t count;
    uint8_t *ptr;
} func_0208c534_S;

void func_0208c534(func_0208c534_S *p, uint8_t v) {
    if (p->count != 0) {
        *p->ptr = v;
        p->count--;
    }
    p->ptr++;
}
