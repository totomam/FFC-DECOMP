#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201cf34(void *a, void *b);
extern void func_0201ce70(void *a, void *b);
extern void *func_02056aec(void *a);
extern void *func_0203bf7c(int a);
extern void func_02056bc0(void *object, void *node);

void func_ov008_0219f250(uint8_t *p)
{
    uint32_t local[38];
    int mask;
    uint32_t *tbl;
    void *obj;
    void *node;
    uint8_t *q;

    if (*(int *)(p + 0xf0) != 1) {
        return;
    }
    func_0201cf34(data_020b93b8, local);
    mask = 0xffffc0ff;
    tbl = *(uint32_t **)(p + 0xf4);
    local[5] = (local[5] & mask) | ((tbl[*(int *)(p + 0xec)] << 26) >> 18);
    func_0201ce70(data_020b93b8, local);
    *(int *)(p + 0xec) = mask >> 14;
    node = func_02056aec(p);
    obj = func_0203bf7c(0x1e);
    q = p + 0x14;
    func_02056bc0(q, obj);
    func_02056bc0(q, node);
}
