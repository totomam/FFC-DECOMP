#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
} S;

int32_t func_ov003_0214757c(S s) {
    if (s.a < s.b) {
        return 0;
    }
    return 1;
}
