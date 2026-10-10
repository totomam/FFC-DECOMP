#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S;

int func_ov003_02147538(S s)
{
    if (s.a == s.b) {
        return 1;
    }
    return 0;
}
