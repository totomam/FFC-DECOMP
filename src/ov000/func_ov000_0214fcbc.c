#include "ffc/types.h"
typedef struct { uint8_t pad[0x12c4]; int a; int n; } S;
extern int func_02088978(void);
extern S *func_ov000_0214fa54(void);
extern void func_0208898c(int);
extern void func_02084b2c(int, int, int);
void func_ov000_0214fcbc(void)
{
    int s = func_02088978();
    S *p = func_ov000_0214fa54();
    int a, n;
    if (p == 0) {
        func_0208898c(s);
        return;
    }
    a = p->a;
    if (a != 0) {
        n = p->n;
        if (n > 0)
            func_02084b2c(a, 0, n);
    }
    func_0208898c(s);
}
