#include "ffc/types.h"

extern char data_020b1854[];
extern void func_0205ff30(void *a, void *b);
extern void func_0205fd04(void *a, void *b);
extern void func_0205847c(void *a, void *b);
extern void *func_02053d78(void *object);
extern void func_02067f9c(void *a);
extern void func_02065f84(void *a);

void *func_020666b4(void *p) {
    uint8_t *s = (uint8_t *)p;

    *(void **)s = data_020b1854;
    func_0205ff30(*(void **)(s + 0x20), *(void **)(s + 0x4c));
    func_0205fd04(*(void **)(*(uint8_t **)(*(uint8_t **)(s + 0x1c) + 0x18) + 8), *(void **)(s + 0x48));
    func_0205847c(*(void **)(*(uint8_t **)(*(uint8_t **)(s + 0x1c) + 0x18) + 0xc), *(void **)(s + 0x44));
    func_02053d78(s + 0x38);
    func_02067f9c(s + 0x2c);
    func_02065f84(s);
    return p;
}
