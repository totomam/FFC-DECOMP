#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02023514(void *a, void *b, void *c, void *d, void *e);
extern void func_02023e38(void *a, void *b);
extern void func_02087678(void *a);

typedef struct {
    uint32_t a;
    uint32_t b;
    void *p;
    uint8_t flag;
} Loc;

void func_02022e64(uint8_t *self, uint32_t r1, uint32_t r2, uint32_t r3) {
    Loc L;

    L.p = self + 0x220;
    L.flag = 1;
    if (L.flag != 0) {
        func_0208763c();
    }
    func_02023514(&L.b, self + 0x4c, &L.a, &r1, self + 0x50);
    func_02023e38((void *)r1, self);
    if (L.flag != 0) {
        func_02087678(L.p);
    }
}
