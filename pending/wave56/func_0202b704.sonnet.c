#include "ffc/types.h"

extern int func_0202a60c(int32_t c, void **v14, uint16_t **src, uint32_t *n);
extern uint16_t *func_02056830(uint32_t size);
extern void func_02022e34(void *dev, void *v14, uint16_t *dst, uint32_t n);
extern void func_02022df8(void *dev, int32_t zero, uint16_t *dst);

void func_0202b704(uint8_t *p, int32_t a, int32_t b, int32_t c)
{
    void *v14;
    uint32_t n;
    uint16_t *src;
    uint16_t *dst;
    int32_t ip, gm, hm, nb;
    uint32_t i;

    if (*(uint32_t *)(p + 0x194) == 0) return;
    func_0202a60c(c, &v14, &src, &n);
    if (src == 0) return;
    dst = func_02056830(n & ~1u);
    ip = (a & 31) * b;
    gm = ((a >> 5) & 31) * b;
    hm = ((a >> 10) & 31) * b;
    b = 4096 - b;
    nb = b;
    for (i = 0; i < (n >> 1); i++) {
        uint16_t h = src[i];
        uint8_t lo = h & 31;
        uint8_t mid = (h >> 5) & 31;
        uint8_t hi = (h >> 10) & 31;
        int32_t R = (hi * nb + hm) >> 12;
        int32_t B = (lo * nb + ip) >> 12;
        int32_t G = (mid * nb + gm) >> 12;
        dst[i] = (uint16_t)(B | ((R << 10) | (G << 5)));
    }
    func_02022e34(*(void **)(p + 0x30), v14, dst, n);
    func_02022df8(*(void **)(p + 0x30), 0, dst);
}
