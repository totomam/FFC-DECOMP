#include "ffc/types.h"

extern char data_ov003_0217bab8[];
extern void func_0206047c(void *a);
extern void func_02060e88(void *a, int b);
extern void func_02060ea4(void *a, int b);
extern void func_02059698(void *a, void *b);
extern void func_ov003_02148fac(void *a);
extern void func_02056db0(void *a);
extern void func_02056844(void *a);

typedef struct {
    uint8_t pad[0x188];
    uint8_t *f188;
    uint8_t pad2[0x214 - 0x188 - 4];
    uint32_t *f214;
} X;

void *func_ov003_0217687c(void *p)
{
    uint8_t *r4 = (uint8_t *)p;
    uint8_t *obj;
    X *x;
    uint8_t *y;

    *(char **)r4 = data_ov003_0217bab8;
    obj = *(uint8_t **)(r4 + 0xa0);
    func_0206047c(*(void **)(obj + 0x20));
    obj = *(uint8_t **)(r4 + 0xa0);
    func_02060e88(*(void **)(obj + 0x24), 2);
    obj = *(uint8_t **)(r4 + 0xa0);
    func_02060ea4(*(void **)(obj + 0x24), 0x10);
    obj = *(uint8_t **)(r4 + 0xa0);
    func_02059698(*(void **)(obj + 0x14), *(void **)(r4 + 0x84));
    x = *(X **)(r4 + 0x80);
    *x->f214 = 0;
    x = *(X **)(r4 + 0x80);
    y = x->f188;
    *(uint32_t *)(y + 0xc) = *(uint32_t *)(y + 0xc) & ~0xffu;
    func_ov003_02148fac(*(void **)(r4 + 0x80));
    func_02056db0(r4);
    func_02056844(r4);
    return r4;
}
