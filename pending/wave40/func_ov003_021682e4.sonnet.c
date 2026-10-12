#include "ffc/types.h"

extern void func_020095b8(void *dst, void *src);
extern void func_020424e0(void *p);
extern uint8_t *func_ov003_02146494(void);
extern uint32_t func_0201c9ac(uint32_t v, uint32_t n);
extern void func_ov003_021633dc(uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_020059cc(void *object);
extern uint32_t data_020b93b8;

void func_ov003_021682e4(uint8_t *a)
{
    uint32_t arr[3];
    uint32_t tmp[3];
    uint32_t i;
    uint32_t v = 0;
    uint32_t *t = tmp;
    uint32_t r6;
    uint32_t r;

    i = 0;
    do {
        v = i;
        i++;
        arr[v] = v;
    } while (i < 3);
    func_020095b8(t, arr);
    func_020424e0(*(void **)(a + 0x14));
    r6 = *(uint32_t *)(func_ov003_02146494() + 0xc0);
    r = func_0201c9ac(data_020b93b8, 0x3b);
    func_ov003_021633dc(r6, r, v, t, v, 1);
    func_020059cc(t);
    *(uint32_t *)(a + 0xc) = (*(uint32_t *)(a + 0xc) & ~0xffu) | 2;
    func_020059cc(arr);
}
