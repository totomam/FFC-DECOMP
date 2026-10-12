#include "ffc/types.h"

extern uint8_t data_020b101c[];
extern void func_02059a78(void *a, void *b);
extern void func_0205847c(void *a, void *b);
extern void func_0205d620(void *p);
extern void func_02062868(void *p);
extern void func_02056844(void *p);

void *func_0205e750(void *self) {
    void **w = (void **)self;
    void *obj;
    void (*fn)(void *);

    w[0] = data_020b101c;
    func_02059a78(((void **)w[7])[5], w[9]);
    func_0205847c(w[12], w[13]);
    obj = w[8];
    if (obj != 0) {
        fn = (void (*)(void *))((void **)(*(void **)obj))[1];
        fn(obj);
    }
    func_0205d620((void *)&w[14]);
    func_02062868(self);
    func_02056844(self);
    return self;
}
