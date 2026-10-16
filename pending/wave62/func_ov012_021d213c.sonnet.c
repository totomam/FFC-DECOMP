#include "ffc/types.h"
extern void *func_02056aec(void *);
extern void *func_0203bfe0(int);
extern void *func_0203bfcc(int);
extern void *func_0203b6fc(void *);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b708(int);
void func_ov012_021d213c(uint8_t *self) {
    void *a, *b, *c, *d;
    self[0x131] = 0;
    a = func_02056aec(self);
    b = func_0203bfe0(0x1e);
    c = func_0203bfcc(0x1e);
    d = func_0203b6fc(c);
    func_02056bc0(d, c);
    func_02056bc0(d, b);
    void *e = func_0203b708(0x1e);
    uint8_t *p = self + 0x14;
    func_02056bc0(p, e);
    func_02056bc0(p, d);
    func_02056bc0(p, a);
}
