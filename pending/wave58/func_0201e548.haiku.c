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

#define PUT(p, src)                                                            \
    do {                                                                       \
        if (func_0209a76c((int32_t)((uint32_t)(p) - (uint32_t)ring->base), 0x18) \
            < ring->count) {                                                   \
            *(p) = *(src);                                                     \
        } else {                                                               \
            if ((p) != 0) {                                                    \
                *(p) = *(src);                                                 \
            }                                                                  \
            ring->count++;                                                     \
        }                                                                      \
    } while (0)

void func_0201e548(Ret *out, Elem *a, Elem *aend, Elem *dst, Ring *ring, ...) {
    Elem *start = dst;
    Elem *cur = dst;
    int sh;

    if (a != aend) {
        PUT(cur, a);
        a++;
        cur++;
        while (a != aend) {
            Elem *r4 = cur;
            Elem *r6 = cur;

            while (r4 != start) {
                r4--;
                sh = 0;
                if (func_02036cd8(a)) {
                    if (!func_02036cd8(r4)) {
                        sh = 1;
                    }
                }
                if (sh == 0) {
                    if (func_02036cd8(r4)) {
                        if (!func_02036cd8(a)) {
                            break;
                        }
                    }
                    if (func_02036cfc(a) < func_02036cfc(r4)) {
                        sh = 1;
                    } else if (func_02036cfc(a) > func_02036cfc(r4)) {
                        break;
                    } else if (func_02036cfc(a) == 0) {
                        break;
                    } else {
                        sh = func_02036ce0(a) < func_02036ce0(r4);
                        if (!sh) {
                            break;
                        }
                    }
                }
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
    return;
}
