#include "ffc/types.h"

extern void func_02057190(void *obj);
extern void func_0206056c(void *a, void *b);

typedef struct { int32_t n; int32_t pad[4]; } Q;
typedef struct {
    uint8_t p0[0xc];
    uint32_t flags;
    uint8_t p1[0x34 - 0x10];
    void *f34;
    uint8_t p2[0x44 - 0x38];
    Q *f44;
    int32_t f48;
} S;

void func_0206099c(S *a)
{
    if (a->f48 == 1) {
        if (a->f44->pad[3] > 1) {
            a->flags &= ~0xffu; a->flags |= 2u;
        }
    }
    func_02057190(a);
    func_0206056c(a->f44, a->f34);
}
