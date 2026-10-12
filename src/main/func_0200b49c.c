#include "ffc/types.h"

extern void *func_02056aec(void *p);
extern void *func_0203b720(void);
extern void *func_0200caf0(void *p);
extern void func_02056bc0(void *object, void *node);

void func_0200b49c(void *p)
{
    void *r4 = func_02056aec(p);
    void *r6 = func_0203b720();
    void *r7 = func_02056aec(*(void **)((uint8_t *)p + 0x88));
    void *r1 = func_0200caf0(*(void **)((uint8_t *)p + 0x88));
    uint8_t *q = (uint8_t *)p + 0x14;
    func_02056bc0(q, r1);
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);
    func_02056bc0(q, r4);
}
