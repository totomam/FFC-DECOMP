#include "ffc/types.h"
extern int func_ov000_02148c18(void);
extern int func_ov000_02148da4(uint32_t c, uint32_t *p, uint32_t *n);
extern void func_02087874(uint32_t a, uint32_t n);
extern int func_ov000_02148e2c(uint32_t p, uint32_t len, uint32_t a);
int func_ov000_02148cbc(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t p, n, len;
    int r = func_ov000_02148c18();
    if (r != 0) return r;
    if (a == 0) return -1;
    if (func_ov000_02148da4(c, &p, &n) == 0) return -1;
    uint32_t m = n; len = m; if (m > b) { len = b; m = b; n = b; }
    func_02087874(a, m);
    if (func_ov000_02148e2c(p, (uint16_t)len, a) == 0) return n;
    return -1;
}
