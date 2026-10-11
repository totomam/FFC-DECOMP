#include "ffc/types.h"

extern void func_020095b8(void *obj, void *src);
extern void func_02051bec(void *obj, void *buf, int flag);
extern void *func_020059cc(void *object);

void *func_02051ae8(void *p) {
    uint32_t buf[2];
    uint32_t obj[3];
    func_020095b8(obj, p);
    func_02051bec(obj, buf, 1);
    return func_020059cc(obj);
}
