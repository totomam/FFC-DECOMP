#include "ffc/types.h"
extern int32_t func_0208f800(uint8_t c, void *p);
struct Obj { uint8_t pad[0x1c]; void *p; };
typedef struct { uint8_t c; uint8_t rest[11]; } Arg;
int32_t func_020985b0(struct Obj *self, Arg a) {
    uint8_t buf[12];
    uint32_t i;
    buf[0] = a.c;
    for (i = 0; i < 1; i++) {
        if (func_0208f800(buf[i], self->p) == -1) return -1;
    }
    return 0;
}
