#include "ffc/types.h"

typedef struct {
    uint64_t a;
    uint64_t b;
    uint32_t flag;
} Tmp;

extern void func_ov000_02158cf4(Tmp *t);
extern uint64_t func_ov000_02154de4(void *p);

uint32_t func_ov000_021551d0(void *p) {
    Tmp t;
    func_ov000_02158cf4(&t);
    if (t.flag != 0) {
        if (func_ov000_02154de4(p) == t.a) {
            return 1;
        }
        return 0;
    }
    if (func_ov000_02154de4(p) == t.b) {
        return 1;
    }
    return 0;
}
