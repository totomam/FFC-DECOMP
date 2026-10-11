#include "ffc/types.h"

extern void func_ov007_021a3d24(void *p);
extern void *func_02056aec(void *p);
extern void *func_02060634(void *a, int b, int c, int d, int e, int f);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df20;

void func_ov007_021a30a8(uint8_t *p)
{
    void *n;
    void *m;
    uint8_t *q;
    func_ov007_021a3d24(*(void **)(p + 0xc8));
    n = func_02056aec(p);
    m = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 10, 0, 0);
    q = p + 0x14;
    func_02056bc0(q, m);
    func_02056bc0(q, n);
}
