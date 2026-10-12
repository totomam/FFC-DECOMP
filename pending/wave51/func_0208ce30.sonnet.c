#include "ffc/types.h"

extern void *func_0208cde8(uint32_t a);
extern void func_02087890(void *p, uint32_t size);
extern int func_02089218(int a, void *p, uint32_t b);
extern void func_020874ac(void *data, void *p, uint32_t c);
extern uint8_t data_02143598[];

int func_0208ce30(uint32_t a, uint32_t n0, ...)
{
    uint32_t *p;
    uint32_t *q;
    int i;
    int cnt;
    int r;

    p = (uint32_t *)func_0208cde8(a);
    if (p == 0) {
        return 8;
    }
    *(uint16_t *)p = (uint16_t)a;
    cnt = *(uint16_t *)(&n0);
    q = (uint32_t *)((((uint32_t)&n0) & ~3u) + 4);
    i = 0;
    if (cnt > 0) {
        do {
            q++;
            p[i + 1] = q[-1];
            i++;
        } while (i < cnt);
    }
    func_02087890(p, 0x100);
    r = func_02089218(10, p, 0);
    func_020874ac(data_02143598, p, 1);
    return (r < 0) ? 8 : 2;
}
