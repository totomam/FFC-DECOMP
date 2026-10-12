#include "ffc/types.h"

extern void *data_020b93b8;
extern void *func_0201e9d0(void *a);
extern void func_0201e92c(void *a, void *b, void *c);
extern void func_0203cac0(void *p);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);

void func_0203d2f0(uint8_t *p)
{
    void *r = func_0201e9d0(data_020b93b8);
    func_0201e92c(data_020b93b8, r, p + 0x90);
    uint8_t *q = *(uint8_t **)(p + 0xd8);
    if (q != 0) {
        *q = 1;
    }
    func_0203cac0(p);
    void *n = func_02056aec(p);
    func_02056bc0(p + 0x14, n);
}
