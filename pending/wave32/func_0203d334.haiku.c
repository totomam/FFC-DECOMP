#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201e92c(void *a, void *b, void *c);
extern void *func_02056aec(void *obj);
extern void *func_0203c710(void *obj, int n);
extern void func_02056bc0(void *object, void *node);

void func_0203d334(uint8_t *p)
{
    func_0201e92c(data_020b93b8, *(void **)(p + 0xd4), p + 0x90);
    uint8_t *q = *(uint8_t **)(p + 0xd8);
    if (q != 0) {
        *q = 1;
    }
    void *r5 = func_02056aec(p);
    void *r1 = func_0203c710(p, 2);
    uint8_t *s = p + 0x14;
    func_02056bc0(s, r1);
    func_02056bc0(s, r5);
}
