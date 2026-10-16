#include "ffc/types.h"
extern void *func_02056aec(void *p);
extern void *func_0203bf90(int a);
extern void *func_0203bf7c(int a);
extern void *func_0203b6fc(void);
extern void *func_0203b708(int a);
extern void func_02056bc0(void *object, void *node);
void func_ov008_0219c650(uint8_t *p) {
    void *r7, *a, *b, *r6, *c;
    uint8_t *q;
    **(int **)(p + 0xdc) = -1;
    r7 = func_02056aec(p);
    a = func_0203bf90(0x1e);
    b = func_0203bf7c(0x1e);
    r6 = func_0203b6fc();
    func_02056bc0(r6, b);
    func_02056bc0(r6, a);
    c = func_0203b708(0x1e);
    q = p + 0x14;
    func_02056bc0(q, c);
    func_02056bc0(q, r6);
    func_02056bc0(q, r7);
}
