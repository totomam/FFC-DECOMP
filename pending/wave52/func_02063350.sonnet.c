#include "ffc/types.h"

extern void func_0208763c(void *p);
extern uint32_t func_0204f078(uint32_t x);
extern void func_02087678(void *p);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_0205847c(void *p);
extern void func_02056858(void *p);

struct E { uint32_t x[4]; void *m; };
typedef struct {
    uint32_t pad0;
    void *a;
    uint32_t b;
    uint8_t pad[0x2c];
    int32_t cnt[4];
    struct E **arr[4];

    uint8_t lock[4];
} S;

void func_02063350(S *p, uint32_t id) {
    struct {
        void *ptr;
        volatile uint8_t flag;
    } g;
    uint32_t idx;
    uint32_t n;
    uint32_t i;

    g.ptr = p->lock - 0 ;
    g.flag = 1;
    if (g.flag) {
        func_0208763c(g.ptr);
    }
    idx = func_0204f078(id);
    if (--p->cnt[idx] > 0) {
        if (g.flag) {
            func_02087678(g.ptr);
        }
        return;
    }
    n = *(uint32_t *)((uint8_t *)func_02052d90(p->a, p->b) + 0x24);
    for (i = 0; i < n; i++) {
        struct E **a = p->arr[idx];
        struct E *e = a[i];
        func_0205847c(e->m);
    }
    func_02056858(p->arr[idx]);
    p->arr[idx] = 0;
    if (g.flag) {
        func_02087678(g.ptr);
    }
}
