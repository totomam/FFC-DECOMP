#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_02056aec(void);
extern void *func_ov003_02149aac(void *);
extern void *func_ov003_021670a0(void *a, Pair p, void *d, void *e,
                                 uint32_t f, uint32_t g, uint32_t h, uint32_t i,
                                 uint32_t j, uint32_t k, uint32_t l);
extern void func_02056bc0(void *object, void *node);
extern const Pair data_ov003_0217bc50;

void func_ov003_021772e8(uint8_t *self)
{
    void *r4 = func_02056aec();
    void *r7 = func_ov003_02149aac(*(void **)(self + 0x80));
    void *r6 = *(void **)(self + 0x84);
    void *r6b = func_ov003_021670a0(*(void **)(self + 0x80), data_ov003_0217bc50,
                                    r6, r6, 0, 0, 0, 0, 2, 0, 0);
    void *r1 = func_ov003_02149aac(*(void **)(self + 0x80));
    uint8_t *obj = self + 0x14;
    func_02056bc0(obj, r1);
    func_02056bc0(obj, r6b);
    func_02056bc0(obj, r7);
    func_02056bc0(obj, r4);
}
