#include "ffc/types.h"

extern void *func_02035fd0(void *object);
extern void func_0209d02c(void *p, int a, int b, void *cb);
extern void func_020367a8(void *p);
extern void func_02056844(void *object);

void *func_02014170(void *object) {
    func_0209d02c((uint8_t *)object + 0x104, 5, 0x60, (void *)func_02035fd0);
    func_020367a8((uint8_t *)object + 0xac);
    func_02056844(object);
    return object;
}
