#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
} Entry;

extern Entry data_02143480[];

void func_0208a300(void) {
    int32_t i = 0;
    uint32_t zero = i;
    do {
        Entry *e = &data_02143480[i];
        e->a = zero;
        e->b = zero;
        i++;
        e->c = zero;
    } while (i < 8);
}
