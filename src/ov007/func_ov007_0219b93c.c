/* cflags: -lang c++ */
#include "ffc/types.h"

struct N { virtual void f0(); virtual void f1(); virtual void f2(); uint32_t a, b; int32_t c; };

extern "C" {
extern void *func_0205681c(uint32_t size);
extern N *func_ov007_0219ad00(void *n, void *a, void *b);
extern void *func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);
void func_ov007_0219b93c(uint8_t *p);
}

void func_ov007_0219b93c(uint8_t *p)
{
    N *node;
    void *r6;
    uint8_t *q;

    node = (N *)func_0205681c(0xe0);
    if (node != 0) {
        node = func_ov007_0219ad00(node, *(void **)(p + 0x80), *(void **)(p + 0x84));
    }
    if ((int8_t)node->c == 0) {
        node->f2();
    }
    r6 = func_02056aec(p);
    q = p + 0x14;
    func_02056bc0(q, node);
    func_02056bc0(q, r6);
}
