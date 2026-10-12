/* cflags: -lang c++ -nothumb */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *lock);
extern void func_02087678(void *lock);
}
typedef void (*VFn)(void *);
struct Node { virtual void v0(); virtual void v1(); virtual void v2(); struct Node *next; uint32_t p8; uint32_t w; };
struct Obj {
    uint32_t f0, f4, f8, f0c;
    uint8_t b10; uint8_t B11() { return b11; } uint8_t b11, b12, p13;
    Node *head;
    Node **tail;
    uint32_t lock;
};
struct Guard {
    uint32_t pad[2]; void *lk; uint8_t f;
    Guard(Obj *p) { f = p->b12; lk = &p->lock; if (f) func_0208763c(lk); }
    ~Guard() { if (f) func_02087678(lk); }
};
#define ST(n) ((int8_t)(n)->w)
extern "C" void func_01ff8998(Obj *p) {
    Guard g(p);
    Node **pp = &p->head;
    Node *n = *pp;
    while (n != 0) {
        if (ST(n) == 0) n->v2();
        if (ST(n) == 0) break;
        *pp = n->next;
        if (ST(n) == 2 && n != 0) n->v1();
        n = *pp;
    }
    if (n == 0) p->tail = pp;
    if (p->B11()) {
        uint8_t l = p->b12;
        if (l) func_0208763c(&p->lock);
        int empty = (p->head == 0);
        if (l) func_02087678(&p->lock);
        if (empty) p->f0c = (p->f0c & ~0xffu) | 2;
    }
}
