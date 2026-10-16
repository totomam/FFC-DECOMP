#include "ffc/types.h"
extern void *func_ov000_021686f4(int a, int b, int c);
extern void func_ov000_02168784(void *o, void *b);
extern int func_ov000_02168768(void *o);
extern void func_ov000_0216876c(void *o, int n);
extern void *data_ov001_021952f0;
void func_ov001_0218298c(void) {
    uint32_t buf[21] = {0};
    void *p = data_ov001_021952f0;
    if (p == 0) {
        p = func_ov000_021686f4(0x54, 4, 0);
        data_ov001_021952f0 = p;
    }
    func_ov000_02168784(p, buf);
    func_ov000_0216876c(p, func_ov000_02168768(p) - 1);
}
