#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov003_02149dec(void *self, uint32_t a1, uint32_t a2, uint32_t a3,
                                uint32_t *pa, uint32_t *pb, Pair p, uint32_t z);
extern void func_ov003_0214aab0(void *self, uint32_t a1, uint32_t a2, uint32_t a3,
                                uint32_t a4, uint32_t a5, uint32_t a6);
extern void *func_ov003_0214ad7c(void *self, Pair d, uint32_t c, uint32_t a, uint32_t b, Pair p);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_021798b4;

void func_ov003_0214acfc(void *self, uint32_t a1, uint32_t a2, Pair p, uint32_t s2, uint32_t s3, uint32_t s4, uint32_t s5, uint32_t s6)
{
    uint32_t ab[2] = {0, 0};
    void *res;

    func_ov003_02149dec(self, s6, a1, a2, &ab[0], &ab[1], p, 0);
    func_ov003_0214aab0(self, s2, s3, s4, s5, s6, 1);
    res = func_ov003_0214ad7c(self, data_ov003_021798b4, s6, ab[0], ab[1], p);
    func_02056bc0(((void **)self)[0x6d], res);
}
