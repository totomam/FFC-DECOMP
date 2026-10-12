#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);
extern uint8_t *func_ov003_02155b40(void *x);
extern void *func_ov003_02153cb4(void *a, void *b, void *c);
extern void *func_ov003_0214da80(void *a, void *b, void *c, uint32_t d, uint32_t *o1, uint32_t *o2);
extern void func_ov003_021487cc(uint8_t **out, uint8_t *list, void *key);
extern uint8_t *func_ov003_02148814(uint8_t *list, void *key);
extern void func_ov003_0214d60c(uint8_t *a, uint8_t *b, uint8_t *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

typedef struct {
    uint8_t *node;
    uint32_t w1;
    uint32_t w2;
    void *l1c;
} Blk;

void func_ov003_0214d7cc(uint8_t *a, uint8_t *b)
{
    uint8_t *p;
    uint8_t *r4;
    uint8_t *r2;
    uint8_t *s;
    uint8_t *it;
    uint32_t r6;
    uint32_t v12;
    uint32_t v1;
    uint32_t l24;
    uint32_t l20;
    Blk blk;

    p = *(uint8_t **)(a + 0x9c);
    if (((uint8_t *)func_02052d90(*(void **)(p + 0xe4), *(void **)(p + 0xe8)))[6] != 0) {
        return;
    }
    r4 = func_ov003_02155b40(b);
    r2 = func_ov003_02155b40(b);
    s = func_ov003_02153cb4(*(void **)(a + 0x9c), *(void **)(r4 + 8), *(void **)(r2 + 0xc));
    r6 = (uint32_t)s;
    v12 = (uint32_t)func_02052d90(*(void **)(a + 0x378), *(void **)(a + 0x37c));
    v1 = (uint32_t)func_02052d90(*(void **)(a + 0x368), *(void **)(a + 0x36c));
    blk.l1c = func_ov003_0214da80((void *)v12, (void *)v1, (void *)r6, 0, &l24, &l20);
    func_ov003_021487cc(&blk.node, a + 0x3d4, &blk.l1c);
    if (blk.node != a + 0x3d8) {
        r6 = *(uint32_t *)(blk.node + 0x10);
    } else {
        r6 = *(uint32_t *)(a + 0x3d4);
        blk.node = func_ov003_02148814(a + 0x3d4, &blk.l1c);
        *(uint32_t *)(blk.node + 4) = r6;
    }
    it = a + 0x26c;
    func_ov003_0214d60c(a, b, it + 0x14 * r6, 5, l24, (uint32_t)blk.l1c, l20);
}
