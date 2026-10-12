#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_ov008_021a3c78(uint8_t *p, uint32_t i);
extern void func_0201c220(void *h, uint32_t n);
extern void func_0201bf94(void *h, uint32_t a, uint32_t b);
extern void func_ov008_021a3598(uint8_t *p);
extern void func_ov008_021a3ab8(uint8_t *p);
extern void func_ov008_021a3614(uint8_t *p);
extern void func_ov005_02197000(void *x);
extern void func_ov008_021a3bc8(uint8_t *p);
extern void func_02056c4c(void *x);
extern void func_ov008_021a31d8(uint8_t *p);
extern void *data_020b93b8;

void func_ov008_021a3414(uint8_t *p)
{
    uint32_t i;
    uint32_t *m;
    uint32_t r;
    uint32_t k;
    uint32_t nv;
    uint32_t old;
    void **pd;
    uint32_t *arr;
    void *obj;
    void **vt;

    if (*(uint32_t *)(p + 0x128) != 1) {
        return;
    }
    func_02021338(0x116);
    i = 0;
    m = (uint32_t *)func_02052d90(*(void **)(p + 0xbc), *(uint32_t *)(p + 0xc0));
    while (i < m[2]) {
        if (p[0x100 + i] != 0) {
            p[0x100 + i] = 0;
            r = func_ov008_021a3c78(p, i);
            if (r <= *(uint32_t *)(p + 0x11c)) {
                old = *(uint32_t *)(p + 0x114);
                nv = old - r;
                pd = &data_020b93b8;
                *(uint32_t *)(p + 0x114) = nv;
                func_0201c220(*pd, 4);
                arr = *(uint32_t **)(p + 0x108);
                func_0201bf94(*pd, arr[i], 1);
            }
        }
        i = (uint16_t)(i + 1);
        m = (uint32_t *)func_02052d90(*(void **)(p + 0xbc), *(uint32_t *)(p + 0xc0));
    }
    k = 0x49;
    k = k << 2;
    p[k] = 0;
    func_ov008_021a3598(p);
    func_ov008_021a3ab8(p);
    func_ov008_021a3614(p);
    *(uint32_t *)(p + k - 4) = 0;
    func_ov005_02197000(*(void **)(p + 0xf8));
    func_ov008_021a3bc8(p);
    obj = *(void **)(p + 0xd0);
    func_02056c4c((uint8_t *)obj + 0x14);
    obj = *(void **)((uint8_t *)obj + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 1, 0);
    func_ov008_021a31d8(p);
}
