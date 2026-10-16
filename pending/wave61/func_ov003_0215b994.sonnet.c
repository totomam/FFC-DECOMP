/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern uint8_t data_ov003_0217a048[];
extern uint8_t *func_ov003_02155b40(void *a);
extern void func_ov003_02157b6c(void *a, int b, int c, int d, int e, int f, int g, int h);
extern void func_ov003_0215b1b0(void *a, int b, int c);
typedef struct { void *vt; uint8_t pad[0x48]; void *p; uint16_t pad2; uint16_t s; uint16_t a; uint16_t b; } S;
S *func_ov003_0215b994(S *self) {
    uint16_t s;
    self->vt = data_ov003_0217a048;
    s = self->s;
    if (s == 0 || s == 3) {
        uint16_t v = ((uint16_t *)func_ov003_02155b40(self->p))[9];
        if (v == self->b) {
            func_ov003_02157b6c(self->p, 1, 1, 0x1000, 0, 0, 0, 0);
        }
        func_ov003_0215b1b0(self->p, self->a, 0);
    }
    return self;
}
