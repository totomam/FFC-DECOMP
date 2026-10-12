#include "ffc/types.h"

typedef struct { uint32_t flag : 1; } HdrW;
typedef struct { uint8_t f : 1; uint8_t len : 7; } HdrB;
typedef struct { uint32_t w, h; } Size2;

extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *obj, void *buf);
extern void *func_02032d24(void *obj, Size2 sz, void *str, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern void func_02056858(void *p);

void *func_0203d96c(uint8_t *a0, uint32_t a1, uint8_t *a2, uint8_t *a3)
{
    uint8_t *e;
    uint32_t e4;
    uint32_t lenA, lenB;
    uint8_t *buf;
    uint8_t tmp[8];
    Size2 sz;
    int built;
    uint32_t zero;
    void *res;

    e = (uint8_t *)func_02052d90(*(void **)(a0 + 0xc4), *(uint32_t *)(a0 + 0xc8));
    e = e + *(uint32_t *)(e + *(uint32_t *)(e + 8) + a1 * 4);
    e4 = *(uint32_t *)(e + 4);
    lenA = ((HdrW *)a3)->flag == 0 ? ((HdrB *)a3)->len : *(uint32_t *)(a3 + 4);
    lenB = ((HdrW *)a2)->flag == 0 ? ((HdrB *)a2)->len : *(uint32_t *)(a2 + 4);

    buf = (uint8_t *)func_02056830(func_02092864(e + e4) + lenB + 2 + lenA);

    func_02086ad4(buf, e + e4,
        ((HdrW *)a2)->flag == 0 ? a2 + 1 : *(uint8_t **)(a2 + 8),
        ((HdrW *)a3)->flag == 0 ? a3 + 1 : *(uint8_t **)(a3 + 8));

    zero = 0;
    built = 0;
    res = func_0205681c(0xb0);
    if (res != 0) {
        func_02005988(tmp, buf);
        sz.w = 0x80; sz.h = 0x60;
        built = 1;
        res = func_02032d24(res, sz, tmp, 4, zero);
    }
    if (built) func_020059cc(tmp);
    func_02056858(buf);
    return res;
}
