/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t d, e; } Q;
typedef struct { uint32_t b, c; Q q; } S;
extern void *func_0205681c(int n);
extern void func_02056c9c(void *p, int z, uint32_t x, uint32_t y, uint32_t q, uint32_t r);
extern uint8_t data_ov010_021d1a2c[];
void *func_ov010_021c8fa0(uint32_t a, S s) {
    uint8_t *p = (uint8_t *)func_0205681c(0x98);
    if (p) {
        func_02056c9c(p, 0, s.q.d, s.q.d, s.q.d, s.q.e);
        *(void **)p = data_ov010_021d1a2c;
        *(uint32_t *)(p + 0x84) = a;
        *(uint32_t *)(p + 0x88) = s.b;
        *(uint32_t *)(p + 0x8c) = s.c;
        *(Q *)(p + 0x90) = s.q;
    }
    return p;
}
