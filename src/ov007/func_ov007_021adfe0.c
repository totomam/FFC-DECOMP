#include "ffc/types.h"
extern void *func_02056aec(void *p);
extern void *func_0203bfe0(int x);
extern void *func_0203bfcc(int x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_020215a4(int a, int b);
void func_ov007_021adfe0(uint8_t *p) {
    void *a, *b, *c, *d, *e; uint8_t *q;
    p[0xa9] = 0;
    a = func_02056aec(p);
    b = func_0203bfe0(0x1e);
    c = func_0203bfcc(0x1e);
    d = func_0203b6fc();
    func_02056bc0(d, c);
    func_02056bc0(d, b);
    e = func_020215a4(0x1e - 0x1f, 0x19);
    q = p + 0x14;
    func_02056bc0(q, e);
    func_02056bc0(q, d);
    func_02056bc0(q, a);
}
