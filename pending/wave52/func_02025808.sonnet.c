#include "ffc/types.h"

extern void func_02091a24(void *);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t);
extern void func_020258b4(void *, uint32_t);
extern void func_02056844(void *);
extern char data_020ad830[];
extern char data_020ad7bc[];

uint32_t func_02025808(uint32_t *p, uint32_t *r6, int32_t r2, int32_t r3, uint8_t *r7)
{
    uint32_t *n;
    uint8_t *q;
    struct { uint32_t a, b; uint32_t pad[3]; uint32_t * volatile hdr; uint32_t * volatile tmp; } S;

    uint8_t *s = r7;
    S.a = r2; S.b = r3;
    if (p[0] == 0xffffffff) {
        func_02091a24(data_020ad830);
        func_0208f42c();
    }
    n = func_0205681c(0x10);
    if (n == 0) {
        func_02091a24(data_020ad7bc);
        func_0208f42c();
    }
    S.hdr = p + 1;
    S.tmp = n;
    q = (uint8_t *)n + 12;
    if (q) {
        q[0] = s[0];
        q[1] = ((int8_t*)s)[1];
    }
    n = S.tmp;
    n[1] = 0;
    S.tmp = 0;
    n[0] = 0;
    if ((uint32_t *)((uint8_t *)n + 8)) {
        *(uint32_t *)((uint8_t *)n + 8) = (uint32_t)r6;
    }
    if (S.a) {
        *r6 = (uint32_t)n;
    } else {
        r6[1] = (uint32_t)n;
    }
    p[0]++;
    func_020258b4(n, p[1]);
    if (S.b) {
        p[2] = (uint32_t)n;
    }
    if (S.tmp) {
        func_02056844(S.tmp);
    }
    return (uint32_t)n;
}
