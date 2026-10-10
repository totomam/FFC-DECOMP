#include "ffc/types.h"

extern void func_020889a4(void *p);
extern void func_020889b8(void);

int32_t func_ov000_02165814(int32_t *p) {
    int32_t v;
    func_020889a4(p);
    v = *p - 1;
    *p = v;
    func_020889b8();
    return v;
}
