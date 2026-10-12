#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern int func_0207df24(void *p, int v);
extern void func_0207e040(void);

typedef struct { uint8_t pad[0x14]; uint32_t flags; } S;

static inline int tst(S *s, uint32_t m) { int r; if (s->flags & m) r = 1; else r = 0; return r; }
static inline int notf(int f) { int r = 1; if (f) r = 0; return r; }

int func_0207e6e4(S *p) {
    int r4;
    func_02088978();
    r4 = notf(tst(p, 8));
    if (r4 == 0) {
        p->flags &= ~8;
    }
    func_0208898c();
    if (func_0207df24(p, 1) != 0) {
        func_0207e040();
    }
    return r4;
}
