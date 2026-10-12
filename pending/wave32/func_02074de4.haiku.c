#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} P2;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t *fc;
    uint8_t flag;
} L;

extern void func_0208763c(void);
extern void func_02023514(void *l, void *x, uint32_t *y, P2 *p);
extern void func_02087678(void *p);

void func_02074de4(uint8_t *self, uint32_t idx, P2 p)
{
    L l;
    uint32_t *x;

    l.fc = self + 0x4238;
    l.flag = 1;
    if (l.flag != 0) {
        func_0208763c();
    }
    x = *(uint32_t **)(self + (idx << 2) + 0x41b8);
    l.f4 = x[2];
    func_02023514(&l, x, &l.f4, &p);
    if (l.flag != 0) {
        func_02087678(l.fc);
    }
}
