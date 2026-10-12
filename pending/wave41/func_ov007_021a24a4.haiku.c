#include "ffc/types.h"

extern void **data_020b8e44;
extern void *data_020b93b8;
extern uint32_t data_ov007_021c410c[2];

extern void func_02071e90(void *obj, void *buf);
extern uint64_t func_02071e64(void *obj);
extern void func_0201cf34(void *obj, void *buf);
extern void func_02093bc8(void *dst, void *src);
extern void *func_0206df7c(void *a, uint32_t size, void *buf, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a24a4(uint8_t *self)
{
    uint32_t f[49];
    uint32_t *src;
    uint32_t v;
    void *ret;

    func_02071e90(*(void **)((uint8_t *)*data_020b8e44 + 0x80), f);
    *(uint64_t *)&f[3] = func_02071e64(*(void **)((uint8_t *)*data_020b8e44 + 0x80));
    func_0201cf34(data_020b93b8, &f[11]);
    func_02093bc8(&f[5], &f[11]);

    v = f[10];
    v &= ~0xffu;
    v |= (uint8_t)f[16];
    v &= 0xffffe0ffu;
    v |= (((f[16] << 13) >> 27) << 27) >> 19;
    f[10] = v;

    ret = func_0206df7c(*(void **)(self + 0x88), 0x2c, f, *(void **)(self + 0x8c));
    func_02056bc0(self + 0x14, ret);

    src = data_ov007_021c410c;
    *(uint32_t *)(self + 0x80) = src[0];
    *(uint32_t *)(self + 0x84) = src[1];
}
