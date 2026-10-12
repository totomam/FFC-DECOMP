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
    uint32_t *tmp;

    if (p[0] == 0xffffffff) {
        func_02091a24(data_020ad830);
        func_0208f42c();
    }
    n = func_0205681c(0x10);
    if (n == 0) {
        func_02091a24(data_020ad7bc);
        func_0208f42c();
    }
    tmp = n;
    q = (uint8_t *)n + 12;
    if (q) {
        q[0] = r7[0];
        q[1] = r7[1];
    }
    n = tmp;
    n[1] = 0;
    tmp = 0;
    n[0] = 0;
    if ((uint32_t *)((uint8_t *)n + 8)) {
        *(uint32_t *)((uint8_t *)n + 8) = (uint32_t)r6;
    }
    if (r2) {
        *r6 = (uint32_t)n;
    } else {
        r6[1] = (uint32_t)n;
    }
    p[0]++;
    func_020258b4(n, p[1]);
    if (r3) {
        p[2] = (uint32_t)n;
    }
    if (tmp) {
        func_02056844(tmp);
    }
    return (uint32_t)n;
}
