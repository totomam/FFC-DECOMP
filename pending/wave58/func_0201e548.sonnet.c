#include "ffc/types.h"

typedef struct {
    uint32_t f[6];
} Elem;

typedef struct {
    uint32_t unk0;
    int32_t count;
    Elem *base;
} Ring;

typedef struct {
    Elem *cur;
    Ring *ring;
} Ret;

extern int32_t func_0209a76c(int32_t a, int32_t b);
extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

typedef struct { Elem *p; Ring *r; } It;
#define CP(d, s) do { (d)->f[0]=(s)->f[0]; (d)->f[1]=(s)->f[1]; (d)->f[2]=(s)->f[2]; (d)->f[3]=(s)->f[3]; (d)->f[4]=(s)->f[4]; (d)->f[5]=(s)->f[5]; } while (0)
#define PUT(P, src)                                                            \
    do {                                                                       \
        It it; it.p = (P); it.r = ring;                                        \
        It *ip = &it;                                                          \
        int32_t idx = func_0209a76c((int32_t)((uint32_t)ip->p - (uint32_t)ring->base), 0x18); \
        Elem *d = ip->p;                                                       \
        if (idx < ring->count) {                                               \
            CP(d, (src));                                                      \
        } else {                                                               \
            if (d != 0) {                                                      \
                CP(d, (src));                                                  \
            }                                                                  \
            ip->r->count++;                                                    \
        }                                                                      \
    } while (0)

static inline int less(Elem *a, Elem *b) {
    if (func_02036cd8(a)) {
        if (!func_02036cd8(b)) return 1;
    }
    if (func_02036cd8(b)) {
        if (!func_02036cd8(a)) return 0;
    }
    if (func_02036cfc(a) < func_02036cfc(b)) return 1;
    if (func_02036cfc(a) > func_02036cfc(b)) return 0;
    if (func_02036cfc(a) == 0) return 0;
    return func_02036ce0(a) < func_02036ce0(b);
}

void func_0201e548(Ret *out, Elem *a, Elem *aend, Ret in) {
    Ring *ring = in.ring;
    Elem *cur = in.cur;

    if (a != aend) {
        PUT(cur, a);
        a++;
        cur++;
        while (a != aend) {
            Elem *r4 = cur;
            Elem *r6 = cur;
            Elem *start = in.cur;
            while (r4 != start && less(a, --r4)) {
                PUT(r6, r4);
                r6--;
            }
            PUT(r6, a);
            a++;
            cur++;
        }
    }
    out->cur = cur;
    out->ring = ring;
}
