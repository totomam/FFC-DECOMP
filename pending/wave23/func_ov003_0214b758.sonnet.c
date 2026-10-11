#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);

typedef struct { void **vt; } O;
typedef struct { uint8_t pad[0x3f0]; void *h; void *pad2; O *arr[8]; } S;

void func_ov003_0214b758(S *p, int idx)
{
    if (p->arr[idx] == 0) return;
    func_02056bf4(p->h, p->arr[idx]);
    if (p->arr[idx] != 0) {
        ((void (*)(void *))p->arr[idx]->vt[1])(p->arr[idx]);
    }
    p->arr[idx] = 0;
}
