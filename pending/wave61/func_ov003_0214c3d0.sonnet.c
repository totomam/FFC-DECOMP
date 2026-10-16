/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } S;
extern void *func_0205681c(uint32_t n);
extern void func_02056c9c(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint8_t data_ov003_0217965c[];
void *func_ov003_0214c3d0(uint32_t a, S s, uint32_t e, uint32_t f) {
    uint8_t *o = (uint8_t *)func_0205681c(0x9c);
    if (o) {
        func_02056c9c(o, 0, s.c, s.c, s.c, e);
        *(void **)o = data_ov003_0217965c;
        *(uint32_t *)(o + 0x84) = a;
        *(uint32_t *)(o + 0x88) = s.a;
        *(uint32_t *)(o + 0x8c) = s.b;
        *(uint32_t *)(o + 0x90) = s.c;
        *(uint32_t *)(o + 0x94) = e;
        *(uint32_t *)(o + 0x98) = f;
    }
    return o;
}
