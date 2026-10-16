#include "ffc/types.h"
extern void func_020870e8(void);
extern int func_02088978(void);
extern void func_0208898c(int);
extern void func_ov000_021469a0(void *p);
extern void func_ov000_02146940(void *p, int a);
void func_ov000_02147918(uint8_t *p)
{
    uint8_t s;
    int r;
    func_020870e8();
    r = func_02088978();
    s = p[8];
    if ((uint8_t)(s + 253) <= 1) {
        p[8] = 7;
        func_0208898c(r);
        func_ov000_021469a0(p);
        return;
    }
    if (s != 0) {
        func_0208898c(r);
        func_ov000_02146940(p, 2);
        return;
    }
    func_0208898c(r);
}
