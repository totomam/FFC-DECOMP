#include "ffc/types.h"
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_ov006_021bb204[];
extern struct { int a; int (*f)(int); } data_ov006_021bb170;
int func_ov006_021a03e0(int a, int n)
{
    int r;
    if (n <= 0) return 0;
    func_0208763c(data_ov006_021bb204);
    r = data_ov006_021bb170.f(n);
    func_02087678(data_ov006_021bb204);
    return r;
}
