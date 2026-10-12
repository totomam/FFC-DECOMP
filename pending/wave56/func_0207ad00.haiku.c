#include "ffc/types.h"

extern void *func_0207ac18(void *p);
extern void *func_02077b80(void *a, void *b);
extern void func_02077b34(void *a, void *b);
extern void func_02078198(void *a, int32_t b);
extern void func_0207ae08(void);
extern void func_02078168(void *a, uint32_t b);
extern void func_0207ade0(void *p);

void func_0207ad00(void *p, int32_t n) {
    uint8_t *obj = (uint8_t *)p;
    void *h;
    void *e = (void *)0;
    uint32_t flag = 0;

    if (n == 0) {
        func_0207ac18(p);
        return;
    }

    while (n < *(uint16_t *)(obj + 0xc)) {
        h = func_02077b80(obj + 4, (void *)0);
        e = func_02077b80(h, e);
        while (e != (void *)0) {
            void (*fn)(void *, void *, void *, void *) =
                *(void (**)(void *, void *, void *, void *))((uint8_t *)e + 0xc);
            if (fn != (void *)0) {
                fn((uint8_t *)e + 0x20,
                   *(void **)((uint8_t *)e + 8),
                   *(void **)((uint8_t *)e + 0x10),
                   *(void **)((uint8_t *)e + 0x14));
                flag = 1;
            }
            e = func_02077b80(h, e);
        }
        func_02077b34(obj + 4, h);
    }

    func_02078198(*(void **)obj, n);
    if (flag != 0) {
        func_0207ae08();
    }
    func_02078168(*(void **)obj, *(uint16_t *)(obj + 0xc));
    func_0207ade0(p);
}
