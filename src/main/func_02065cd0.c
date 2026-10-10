#include "ffc/types.h"

extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);

typedef struct {
    void *ptr;
    void *data;
    uint8_t flag;
} Entry;

typedef struct {
    Entry *items;
    uint32_t count;
} Pool;

void func_02065cd0(Pool *p, uint32_t n) {
    Entry *e = p->items + p->count;
    p->count = p->count - n;
    while (n != 0) {
        e--;
        if (e->ptr != 0) {
            if (e->flag) {
                func_02052d3c(e->ptr, e->data);
            }
            func_02052c04(e->ptr);
        }
        n--;
    }
}
