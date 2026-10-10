#include "ffc/types.h"

extern void func_020735a8(void *a0, void *a1, void *a2, void *a3, void *a4);
extern void func_02074f58(void);
extern void func_02074f74(void);

struct Q {
    uint8_t pad[0x2c];
    void *v;
};

struct P {
    uint8_t pad[0x40];
    struct Q *q;
};

void func_02075a6c(struct P *p)
{
    struct Q *q = p->q;
    func_020735a8(q->v, (void *)func_02074f58, q, (void *)func_02074f74, q);
}
