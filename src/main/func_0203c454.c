#include "ffc/types.h"

extern void func_0203c3fc(void *a, void *b, void *c);

void func_0203c454(int16_t *out, int16_t *a, int16_t *b) {
    int i;
    func_0203c3fc(out, a, b);
    for (i = 0; i < 4; i++) {
        out[i] = a[i] + b[i];
    }
}
