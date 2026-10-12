/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
int32_t func_0205819c(uint8_t *p);
}
struct Node { Node *next; uint32_t pad; int32_t val; };
struct Lock {
    void *q;
    int s;
    Lock(void *x) : q(x), s(0) { func_0208763c(x); }
    ~Lock() { func_02087678(q); }
};
extern "C" int32_t func_0205819c(uint8_t *p) {
    Lock l(p + 0x20);
    Node *n = *(Node **)(p + 0x10);
    int32_t sum = 0;
    while (n != 0) { sum += n->val; n = n->next; }
    l.s = sum - 1;
    return l.s;
}
