#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t data_ov006_021bb204[];
extern uint32_t data_ov006_021bb170[];

void func_ov006_021a0410(int a, void *p, int n)
{
    if (p != 0 && n > 0) {
        func_0208763c(data_ov006_021bb204);
        ((void (*)(void *))data_ov006_021bb170[3])(p);
        func_02087678(data_ov006_021bb204);
    }
}
