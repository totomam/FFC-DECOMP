#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203bf7c(int);
extern void *func_0203b708(int);
extern void func_02056bc0(void *object, void *node);

void func_ov008_021a31d8(uint8_t *obj)
{
    void *a = func_02056aec();
    void *b = func_0203bf7c(30);
    void *c = func_0203b708(30);
    uint8_t *p = obj + 0x14;
    func_02056bc0(p, c);
    func_02056bc0(p, b);
    func_02056bc0(p, a);
}
