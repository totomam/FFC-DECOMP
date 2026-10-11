#include "ffc/types.h"

extern void func_ov000_02147810(void);
extern void func_ov000_021477b4(void);
extern void func_ov000_021477d0(uint32_t a, uint32_t b, uint32_t c);
extern int32_t func_ov000_021488b4(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov000_02147844(void);

int32_t func_ov000_02148ae4(void *p0, uint32_t p1, uint32_t p2) {
    int32_t r;
    if (p1 == 0) {
        return -1;
    }
    func_ov000_02147810();
    func_ov000_021477b4();
    func_ov000_021477d0(0, 0x35, p1);
    r = func_ov000_021488b4(p0, 1, p2, 0, 0);
    func_ov000_02147844();
    return r;
}
