#include "ffc/types.h"
typedef struct Outer { uint8_t pad[0x14]; uint8_t *inner; } Outer;
Outer *func_02072f78(Outer *p)
{
    uint8_t *q = p->inner + 0x24;
    *q = 0;
    return p;
}
