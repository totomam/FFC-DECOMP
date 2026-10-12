#include "ffc/types.h"

extern void func_0202a9ac(void *cursor);
extern uint32_t func_0202a9ec(void *key, uint32_t x);
extern void func_02035c18(void *p);
extern void func_02052d3c(void *x, uint32_t y);
extern void func_02052c04(void *a);
extern void func_02056844(void *p);

typedef struct {
    uint32_t count;
    uint32_t f4;
    uint32_t pad;
    void *cur;
} Ctx;

typedef struct {
    void *a;
    uint32_t b;
    uint8_t flag;
} Sub;

typedef struct {
    uint8_t pad[0xc];
    Sub sub;
} Key;

void func_0202a6f4(uint32_t *out, Ctx *s, void *key) {
    void *k = key;
    if (k == s->cur) {
        func_0202a9ac(&key);
        s->cur = key;
    }
    *out = func_0202a9ec(k, s->f4);
    {
        Sub *r6 = &((Key *)k)->sub;
        func_02035c18((uint8_t *)r6 + 0xc);
        if (r6->a != 0) {
            if (r6->flag != 0) {
                func_02052d3c(r6->a, r6->b);
            }
            func_02052c04(r6->a);
        }
    }
    func_02056844(k);
    s->count--;
}
