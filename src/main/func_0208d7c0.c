#include "ffc/types.h"

extern int32_t func_0208cf38(uint32_t a, uint32_t b);
extern void func_0208cdd8(uint32_t a, uint32_t b);
extern void func_0208d2ac(void);
extern uint32_t *func_0208ceec(void);
extern int32_t func_0208ce30(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

int32_t func_0208d7c0(uint32_t a, uint32_t b) {
    int32_t r = func_0208cf38(1, 0);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(3, a);
    func_0208d2ac();
    uint32_t *p = func_0208ceec();
    r = func_0208ce30(3, 4, p[0], p[1], p[4], b);
    if (r != 0) {
        return r;
    }
    return 2;
}
