#include "ffc/types.h"

extern char data_020ad770[];
extern void func_0202f62c(void);
extern uint32_t func_0203c2e4(void);
extern void func_02059b2c(uint32_t, void *);
extern void func_020235ac(void *, void *, void *);
extern void func_02056844(void *);

void *func_02022a04(void *p) {
    uint8_t *s = (uint8_t *)p;
    uint32_t a;
    uint32_t b;
    void *c;

    *(void **)s = data_020ad770;
    func_0202f62c();
    {
        void *obj = *(void **)(s + 0x21c);
        if (obj != 0) {
            void (*fn)(void *) = (void (*)(void *))(((void **)*(void **)obj)[1]);
            fn(obj);
            *(void **)(s + 0x21c) = 0;
        }
    }
    func_02059b2c(func_0203c2e4(), *(void **)(s + 0x8c));
    b = *(uint32_t *)(s + 0x54);
    c = s + 0x50;
    func_020235ac(&a, &b, &c);
    func_02056844(s);
    return s;
}
