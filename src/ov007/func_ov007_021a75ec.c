#include "ffc/types.h"

typedef struct { void *x, *y; } S;
typedef struct VT { void *p[16]; } VT;
typedef struct O { VT *vt; } O;
extern void *func_02069210(void *object);
extern void *func_ov007_021a7418(void *x);
extern void *func_0203b918(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern char data_ov007_021c4538[];

void *func_ov007_021a75ec(void *p, void *a, void *b, S s)
{
    uint8_t *self = (uint8_t *)p;

    func_02069210(p);
    *(void **)self = data_ov007_021c4538;
    *(void **)(self + 0x94) = a;
    *(O **)(self + 0x98) = (O *)func_0203b918(b, func_ov007_021a7418(a), 2, 1);

    ((void (*)(O *, int, int))(*(O **)(self + 0x98))->vt->p[14])(*(O **)(self + 0x98), 1, 0);
    ((void (*)(O *, S))(*(O **)(self + 0x98))->vt->p[3])(*(O **)(self + 0x98), s);
    ((void (*)(O *, int))(*(O **)(self + 0x98))->vt->p[8])(*(O **)(self + 0x98), 1);
    ((void (*)(O *))(*(O **)(self + 0x98))->vt->p[10])(*(O **)(self + 0x98));

    func_02056bc0(self + 0x48, *(void **)(self + 0x98));
    return p;
}
