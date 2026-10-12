#include "ffc/types.h"

extern void func_020870e8(void *p);
extern void func_02088978(void);
extern void func_0208898c(void);
extern void func_ov000_021469a0(void *p);
extern void func_ov000_02146940(void *p, int v);

void func_ov000_02147918(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint8_t s;

    func_020870e8(a);
    func_02088978();
    s = p[8];
    if ((uint8_t)(s + 0xfd) <= 1) {
        p[8] = 7;
        func_0208898c();
        func_ov000_021469a0(a);
        return;
    }
    if (s != 0) {
        func_0208898c();
        func_ov000_02146940(a, 2);
        return;
    }
    func_0208898c();
}
