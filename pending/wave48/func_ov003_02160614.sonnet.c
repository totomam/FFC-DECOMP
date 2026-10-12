/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" int func_ov003_02160424(void *self, uint32_t p, int flag);
extern "C" void *func_0203b720(void);
extern "C" void *func_02056b10(void *owner);
struct V { uint32_t a, b; };
extern "C" int func_ov003_02160768(void *self, V v, int c, int d, int e);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" int func_ov003_02160230(void *self, uint32_t p);
extern "C" V data_ov003_0217a40c;

struct G { int f; uint8_t *l; G(uint8_t *p) { f = p[0x12]; l = p + 0x1c; if (f) func_0208763c(l); } ~G() { if (f) func_02087678(l); } };
static inline int chk(uint8_t *x)
{
    G g(x);
    return *(void **)(x + 0x14) == 0;
}

struct O { uint8_t pad0[0xa0]; void *a0; void *a4; uint8_t pad1[0xbc - 0xa8]; uint8_t *bc; uint8_t pad2[0xd8 - 0xc0]; uint8_t d8; };
struct S { uint8_t p0[0x80]; uint8_t *m80; uint8_t p1[0xce - 0x84]; uint8_t ce; uint8_t pcf; uint8_t *d0; uint8_t *d4; uint8_t p2[0xe0 - 0xd8]; int e0; };
extern "C" int func_ov003_02160614(S *self, uint32_t param)
{
    if (self->e0 < 0x1e) return 0;
    O *o = *(O **)(self->m80 + 0x180);
    o->d8 = 0;
    if (o != 0 && chk(self->d4) && self->ce == 0 && chk(self->d0) && chk(o->bc)) {
        if (o->a0 != 0) {
            func_ov003_02160424(self, param, 1);
            return 1;
        }
        if (o->a4 != 0) {
            void *t = func_0203b720();
            void *u = func_02056b10(self->d0);
            void *r = (void *)(uintptr_t)func_ov003_02160768(self, data_ov003_0217a40c, 1, 1, 0);
            uint8_t *x = self->d4;
            func_02056bc0(x, r);
            func_02056bc0(x, u);
            func_02056bc0(x, t);
            func_ov003_02160230(self, param);
            return 1;
        }
    }
    return 0;
}
