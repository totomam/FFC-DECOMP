#include "ffc/types.h"
extern uint32_t func_02005dc0(void *o);
extern uint32_t func_02005dc8(void *o);
extern void func_ov007_021ae1bc(void *o);
extern void func_02005db4(void *object, uint32_t value);
extern void func_02005dac(void *object);
extern void func_ov007_021ae044(void *o);
typedef struct S { uint32_t pad[5]; void *a; void *b; uint32_t c; } S;
void func_ov007_021ae1f8(S *p) {
    if (func_02005dc0(p->b) != 0) {
    uint32_t v = func_02005dc8(p->b);
    if (p->c != v) {
    void *a = p->a;
    p->c = v;
    func_ov007_021ae1bc(a);
    if (p->c == 0) {
    func_02005db4(p->b, 0);
    func_02005dac(p->b);
    func_ov007_021ae044(p->a);
    }}}
}