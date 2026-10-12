#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov009_02199640(void);
extern void *func_02022924(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02022ff8(void *obj, uint32_t v);
extern void func_0202304c(void *obj, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);

void func_ov009_021a3094(uint8_t *self, uint32_t *p, uint32_t flags)
{
    uint32_t *r4;
    uint32_t *r1;

    if (self[0x84] != 0) {
        return;
    }
    r4 = func_0205681c(0x25C);
    if (r4 != 0) {
        void *t = func_ov009_02199640();
        r4 = func_02022924(r4, t, 3 << 14, 0);
    }
    *(uint32_t **)(self + 0x80) = r4;
    r4[6] = 1;
    *(uint32_t *)(*(uint8_t **)(self + 0x80) + 0x1c) = 0x320000;
    r1 = *(uint32_t **)(self + 0x80);
    r1[0x92] = flags;
    r1 = (uint32_t *)r1[0x8c / 4];
    r1[4] = (r1[4] & ~3u) | (flags & 3u);
    func_02022ff8(*(void **)(self + 0x80), 1);
    func_0202304c(*(void **)(self + 0x80), p[0], p[1]);
    func_02056bc0(self + 0x48, *(void **)(self + 0x80));
}
