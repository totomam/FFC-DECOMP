#include "ffc/types.h"

extern void *func_0208ceec(void *p);
extern int func_0208cf38(int a, int b, int c);
extern void func_02087874(void *p, int n);
extern void func_0208cdd8(int a, void *b);
extern int func_0208ce30(int a, int b);

int func_0208df68(void *param) {
    uint32_t *obj;
    int r;

    obj = (uint32_t *)func_0208ceec(param);
    r = func_0208cf38(2, 9, 10);
    if (r != 0) {
        return r;
    }
    func_02087874((void *)((uint8_t *)((uint32_t *)obj[1]) + 0xc), 4);
    if (((uint32_t *)obj[1])[3] == 0) {
        return 3;
    }
    func_0208cdd8(0x10, param);
    r = func_0208ce30(0x10, 0);
    if (r != 0) {
        return r;
    }
    return 2;
}
