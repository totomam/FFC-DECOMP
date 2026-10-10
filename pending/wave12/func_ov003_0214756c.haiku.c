#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
} S;

void func_ov003_0214756c(int32_t *p, S s) {
    *p = s.a - s.b;
}
