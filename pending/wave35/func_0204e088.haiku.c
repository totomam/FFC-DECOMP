#include "ffc/types.h"

extern uint32_t func_0204de50(void *p);
extern uint32_t func_0204de7c(uint32_t a);
extern uint32_t func_0204de80(uint32_t a);
extern int32_t func_0204dc74(uint32_t a, void *p);
extern int32_t func_0204e128(void *p);
extern void func_0204a920(uint32_t a, uint32_t b);
extern int32_t func_0204e1bc(void *p);
extern void func_0204db5c(int32_t a);

int32_t func_0204e088(void *p) {
    uint32_t a = func_0204de50(p);
    uint32_t b = func_0204de7c(a);
    uint32_t c = func_0204de80(a);
    int32_t r6 = func_0204dc74(c, p);
    int32_t r4;

    if (r6 == 0) {
        return -1;
    }
    r4 = func_0204e128(p);
    func_0204a920(b, 1);
    if (r4 != -1 && r4 != 0) {
        if (func_0204e1bc(p) == 15) {
            func_0204db5c(r6);
        }
    }
    return 0;
}
