#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201c220(void *a, int b, uint32_t c);
extern void *func_02056aec(void *obj);
extern void *func_0203bf7c(int x);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);

void func_ov008_021a02ac(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t *tbl = *(uint32_t **)(p + 0xec);
    uint32_t idx = p[0x103];
    void *r4;
    void *r6;
    void *r1;
    uint8_t *q;

    func_0201c220(data_020b93b8, 0xe, tbl[idx]);
    r4 = func_02056aec(a0);
    r6 = func_0203bf7c(0x1e);
    r1 = func_0203b708(0x1e);
    q = p + 0x14;
    func_02056bc0(q, r1);
    func_02056bc0(q, r6);
    func_02056bc0(q, r4);
}
