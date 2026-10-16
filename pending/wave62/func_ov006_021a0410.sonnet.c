#include "ffc/types.h"
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern uint8_t data_ov006_021bb204[];
extern struct { uint32_t a, b, c; void (*fn)(void *); } data_ov006_021bb170;
void func_ov006_021a0410(int a, void *p, int n) {
    if (p == 0) return;
    if (n <= 0) return;
    func_0208763c(data_ov006_021bb204);
    data_ov006_021bb170.fn(p);
    func_02087678(data_ov006_021bb204);
}
