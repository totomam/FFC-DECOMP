#include "ffc/types.h"

extern int func_02092948(void *p, uint32_t v);
typedef struct { uint32_t a[2]; } Pair;
extern Pair data_ov001_021941fc;

int func_ov001_02185f74(void *p)
{
    Pair s;
    uint32_t i;

    s = data_ov001_021941fc;
    for (i = 0; i < 2; i++) {
        if (func_02092948(p, s.a[i]) == 0) {
            return 0;
        }
    }
    return 1;
}
