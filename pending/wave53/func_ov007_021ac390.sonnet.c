/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {
extern void *data_020b93b8;
extern void **data_020b8e44;
extern uint32_t func_0201f910(void *a, uint32_t b);
extern void func_02072234(uint32_t a, uint32_t b);
extern uint32_t func_02071fb8(void);
struct B { uint8_t v; };
extern void func_ov007_021ad338(void *a, void *b, B c);

void func_ov007_021ac390(uint8_t *p)
{
    uint8_t *pe = p + 0xec;
    uint8_t *q;
    uint32_t s;
    uint32_t i;
    uint8_t buf[4];
    B bb;

    {
        uint32_t a = *(uint32_t *)(p + 0xec);
        uint32_t b = *(volatile uint32_t *)(p + 0xec);
        *(uint32_t *)(p + 0xec) = diff(Num(a), b);
    }
    q = p;
    q = p + 0xe8;
    

    for (i = 0; i < 0x3c; i++) {
        if (func_0201f910(data_020b93b8, i)) {
            s = *(uint32_t *)((uint8_t *)*data_020b8e44 + 0x84);
            func_02072234(s, func_0201f910(data_020b93b8, i) - 1);
            if (func_02071fb8()) {
                buf[3] = (uint8_t)(func_0201f910(data_020b93b8, i) - 1);
                if (*(uint32_t *)pe < *(uint32_t *)(p + 0xf0)) {
                    uint32_t old = *(uint32_t *)pe;
                    *(uint32_t *)pe = old + 1;
                    *(int8_t *)(*(uint8_t **)(p + 0xe8) + old) = (int8_t)buf[3];
                } else {
                    buf[1] = 0;
                    bb = *(B*)&buf[1];
                    func_ov007_021ad338(q, &buf[3], bb);
                }
            }
        }
    }
}
}
