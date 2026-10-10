#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_ov003_02152610(void *a, Pair b, void *d, int e);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_02179edc;

void func_ov003_021525dc(void *p, void *q)
{
    void *n = func_ov003_02152610(p, data_ov003_02179edc, q, 1);
    void *m = func_0203b708(1);
    void *obj = *(void **)((uint8_t *)p + 0xa0);
    func_02056bc0(obj, m);
    func_02056bc0(obj, n);
}
