#include "ffc/types.h"

extern int32_t func_ov000_02154ed0(int32_t x);

typedef struct {
    uint8_t pad[8];
    int32_t mode;
} Obj;

int32_t func_02071fb8(Obj *p)
{
    switch (func_ov000_02154ed0(p->mode)) {
    default:
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    }
}
