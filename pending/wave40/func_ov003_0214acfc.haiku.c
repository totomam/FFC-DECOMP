#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov003_02149dec(void *self, uint32_t a1, uint32_t a2, uint32_t a3,
                                uint32_t *pa, uint32_t *pb, uint32_t a6, uint32_t a7, uint32_t a8);
extern void func_ov003_0214aab0(void *self, uint32_t a1, uint32_t a2, uint32_t a3,
                                uint32_t a4, uint32_t a5, uint32_t a6);
extern void *func_ov003_0214ad7c(void *self, uint32_t d1, uint32_t d2, uint32_t d3,
                                 uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_021798b4;

void func_ov003_0214acfc(void *self, uint32_t a1, uint32_t a2, uint32_t a3, ...)
{
    uint32_t *s = (uint32_t *)&a3 + 1;
    uint32_t ab[2] = {0, 0};
    void *res;

    func_ov003_02149dec(self, s[2], a1, a2, &ab[0], &ab[1], a3, s[0], 0);
    func_ov003_0214aab0(self, s[1], s[2], s[3], s[4], s[5], 1);
    res = func_ov003_0214ad7c(self, data_ov003_021798b4.a, data_ov003_021798b4.b, s[2], ab[0], ab[1], a3, s[0]);
    func_02056bc0(((void **)self)[0x6d], res);
}
