#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t r; uint32_t p; uint8_t f; } G;
typedef struct { uint32_t one; uint32_t x, y, z; uint32_t pad; } A;
extern void func_0208763c(void);
extern void func_02087678(uint32_t);
extern void func_02030dbc(G *g, uint8_t *o, uint32_t *r, A *a);
void func_0202ec6c(uint8_t *self, uint32_t *src) {
    A a;
    G g;
    g.p = (uint32_t)(self + 0x4d0);
    g.f = 1;
    if (g.f) func_0208763c();
    a.one = 1;
    a.x = src[0];
    a.y = src[1];
    a.z = src[2];
    g.r = (uint32_t)(self + 0x488);
    func_02030dbc(&g, self + 0x484, &g.r, &a);
    if (g.f) func_02087678(g.p);
}
