#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *);
extern void *func_ov000_0216876c(void *, int32_t);
extern void func_ov001_02186e00(void *, uint32_t);
extern void func_ov000_02168738(void *);

typedef struct {
    uint8_t pad[8];
    void *h;
} S;

void func_ov001_02187484(S *p)
{
    int32_t i;
    if (p->h != 0) {
        for (i = 0; i < func_ov000_02168768(p->h); i++) {
            func_ov001_02186e00(p, *(uint32_t *)func_ov000_0216876c(p->h, i));
        }
        func_ov000_02168738(p->h);
        p->h = 0;
    }
}
