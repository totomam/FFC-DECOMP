#include "ffc/types.h"

extern uint32_t *func_0204de50(int32_t *p);
extern uint32_t func_0204de80(uint32_t *a);
extern void func_0204dec8(uint32_t b);
extern uint32_t func_0204de74(uint32_t *a);
extern uint32_t *func_0204b4ac(uint32_t a);
extern uint32_t *func_0204de78(uint32_t *a);
extern void func_0204ded0(uint32_t c);
extern void func_0204de7c(uint32_t *a);
extern void func_0204a908(void);

int func_0204cbe0(int32_t *out)
{
    uint32_t *a = func_0204de50(out);
    uint32_t b = func_0204de80(a);
    func_0204dec8(b);
    uint32_t *n = func_0204b4ac(func_0204de74(a));
    if (n != 0) {
        uint32_t *s = func_0204de78(a);
        *out = (int32_t)n[2];
        *s = (uint32_t)n;
    } else {
        *out = -1;
    }
    func_0204ded0(b);
    if (*out < 0) {
        func_0204de7c(a);
        func_0204a908();
        return 0;
    }
    return 1;
}
