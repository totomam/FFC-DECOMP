/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_0208763c(void *a);
void func_02023570(void *a, void *b, void *c);
void func_02087678(void *a);
void func_02022eb8(uint8_t *obj, uint32_t key);
}

struct N { N *prev; N *next; uint32_t key; };
struct Out { uint32_t w[7]; };
struct Lock {
    void *p;
    Lock(void *x) : p(x) { func_0208763c(x); }
    ~Lock() { func_02087678(p); }
};

void func_02022eb8(uint8_t *obj, uint32_t key) {
    Lock lk(obj + 0x220);
    N *n = *(N **)(obj + 0x54);
    Out out;
    N *tmp;
    int c;
    for (;;) {
        c = 0;
        if (n != (N *)(obj + 0x50) && n->key != key) c = 1;
        if (!c) break;
        n = n->next;
    }
    if (n != (N *)(obj + 0x50)) {
        tmp = n;
        func_02023570(&out, obj + 0x4c, &tmp);
    }
}
