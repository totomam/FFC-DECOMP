#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02023514(uint32_t *out, void *a, void *l, void *arg);
extern void func_02087678(void *ptr);
extern uint32_t data_0213e080;
extern uint32_t data_0213e06c;
extern uint32_t data_0213e068;

typedef struct {
    uint8_t *p;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
} Arg;

typedef struct {
    void *a;
    uint32_t b;
    void *ptr;
    uint8_t flag;
} Local;

void func_02054500(Arg arg) {
    Local l;
    if (arg.p[4] != 0) {
        return;
    }
    arg.p[4] = 1;
    l.ptr = &data_0213e080;
    l.flag = 1;
    if (l.flag) {
        func_0208763c();
    }
    l.a = &data_0213e06c;
    func_02023514(&l.b, &data_0213e068, &l, &arg);
    if (l.flag) {
        func_02087678(l.ptr);
    }
}
