#include "ffc/types.h"

typedef struct {
    void *base;
    uint32_t count;
} Pool;

typedef struct {
    uint32_t w0;
    void *ptr4;
    void *ptr8;
    uint8_t flag;
} Elem;

extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

void func_02035b28(Pool *p, uint32_t n) {
    Elem *e = (Elem *)p->base + p->count;
    p->count = p->count - n;
    if (n == 0) {
        return;
    }
    do {
        e--;
        if (e->ptr4 != 0) {
            if (e->flag != 0) {
                func_02052d3c(e->ptr4, e->ptr8);
            }
            func_02052c04(e->ptr4);
        }
        func_02053290(e);
        n--;
    } while (n != 0);
}
