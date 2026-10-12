#include "ffc/types.h"

typedef struct { uint32_t a, b; } P8;
typedef struct {
    uint32_t lo : 8;
    uint32_t m : 5;
    uint32_t rest : 19;
} Dst;

typedef struct {
    uint32_t lo : 8;
    uint32_t pad : 6;
    uint32_t m : 5;
    uint32_t rest : 13;
} Src;

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
    union { uint32_t f[49]; struct { uint32_t pad[10]; Dst d; uint32_t p2[5]; Src r; } s; } u;
    uint32_t *src;
    void *ret;

    func_02071e90(*(void **)((uint8_t *)*data_020b8e44 + 0x80), u.f);
    *(uint64_t *)&u.f[3] = func_02071e64(*(void **)((uint8_t *)*data_020b8e44 + 0x80));
    func_0201cf34(data_020b93b8, &u.f[11]);
    func_02093bc8(&u.f[5], &u.f[11]);

    u.s.d.lo = u.s.r.lo;
    u.s.d.m = u.s.r.m;

    ret = func_0206df7c(*(void **)(self + 0x88), 0x2c, u.f, *(void **)(self + 0x8c));
    func_02056bc0(self + 0x14, ret);

    *(P8 *)(self + 0x80) = *(P8 *)data_ov007_021c410c;
}
