#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef struct { uint8_t pad[0x14]; uint8_t obj[0x6c]; void *f80; } S;
extern void *func_02056aec(void);
extern void *func_02056aa4(void *);
extern void *func_ov003_0216e620(void *, Pair);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_0217b384;
void func_ov003_0216e52c(S *p) {
    void *a, *b, *c;
    uint8_t *q;
    if (p->f80 != 0) {
        a = func_02056aec();
        b = func_ov003_0216e620(p->f80, data_ov003_0217b384);
        c = func_02056aa4(p->f80);
        q = p->obj;
        func_02056bc0(q, c);
        func_02056bc0(q, b);
        func_02056bc0(q, a);
    } else {
        a = func_02056aec();
        q = p->obj;
        func_02056bc0(q, a);
    }
}
