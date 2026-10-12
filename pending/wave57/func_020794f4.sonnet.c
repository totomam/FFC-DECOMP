/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02088f30(void);
extern "C" void func_0207960c(void *p);
extern "C" void *func_020782e4(void *p, uint32_t id);
typedef struct { uint32_t m; uint16_t x; uint16_t v; } H;
static inline int f1(H *p) { return (p && p->m == 0x4e465452) ? 1 : 0; }
static inline int f2(H *p) { return f1(p) ? 1 : 0; }
static inline int f3(H *p, uint32_t v) { return (p && p->v >= v) ? 1 : 0; }
static inline int f4(H *p, uint32_t v) { return f3(p, v) ? 1 : 0; }
static inline int top(H *p, uint32_t v, int z) {
    int r;
    if (p) { r = f2(p); if (r) r = f4(p, v); }
    else r = z;
    return r;
}
extern "C" int func_020794f4(H *a, void **out) {
    int r4 = 0;
    void *p;
    if (!top(a, 0x102, r4)) {
        if (!top(a, 0x101, 0)) {
            if (!top(a, 0x100, 0)) func_02088f30();
            r4 = 1;
        }
    }
    func_0207960c(a);
    p = func_020782e4(a, 0x46494e46);
    if (p == 0) { *out = 0; return 0; }
    p = (uint8_t *)p + 8;
    *out = p;
    if (r4) { uint8_t *s = *(uint8_t **)((uint8_t *)p + 8); s[7] = 0; }
    return 1;
}
