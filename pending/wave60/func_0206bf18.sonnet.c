#include "ffc/types.h"
typedef struct { uint32_t *p; uint32_t n; } S;
extern S data_0213e170;
uint32_t func_0206bf18(void) {
    uint32_t h = 0;
    uint32_t *q = data_0213e170.p + 5;
    int i;
    for (i = 0; i < 624; i++) {
        h = *q++ ^ ((h << 1) | (h >> 31));
    }
    return h + data_0213e170.n++;
}
