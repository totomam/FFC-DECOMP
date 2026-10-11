#include "ffc/types.h"

extern void func_ov013_021c2e7c(void *p);
extern void *func_02056aec(void *p);
extern void func_ov013_021c29e0(void *p);
extern void *func_0205f8e0(void);
extern void func_02056bc0(void *object, void *node);

void func_ov013_021c293c(uint8_t *p)
{
    uint8_t *q;
    void *r4;
    void *n;

    func_ov013_021c2e7c(*(void **)(p + 0xc8));
    r4 = func_02056aec(p);
    func_ov013_021c29e0(*(void **)(p + 0xc8));
    n = func_0205f8e0();
    q = p + 0x14;
    func_02056bc0(q, n);
    func_02056bc0(q, r4);
}
