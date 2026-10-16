#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { uint32_t x, y, z, w; } O;
extern O *data_ov001_02194c38_p;
extern uint8_t data_ov001_02194c38[];
extern P *func_ov001_0217efc8(void *, uint32_t, uint32_t, P *);
uint64_t func_ov001_0217fa40(uint32_t *o, uint32_t k, P *(*fn)(void *, uint32_t, P *), uint32_t s, ...)
{
    P *r;
    if (o == 0) o = *(uint32_t **)(data_ov001_02194c38 + 0xc);
    if (o == 0) {
        r = (P *)&s;
    } else {
        r = fn((void *)o[3], k, (P *)&s);
        if (r == 0) r = func_ov001_0217efc8((void *)o[3], k, 1, (P *)&s);
    }
    return *(uint64_t *)r;
}
