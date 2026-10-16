#include "ffc/types.h"
extern int func_ov006_0219f078(uint32_t a);
extern void func_ov006_0219ef5c(void *a, void *b, int c);
int func_ov006_0219e558(uint8_t *p, void *q)
{
    uint8_t *r = p + 6;
    int n = func_ov006_0219f078(*(uint16_t *)(r + 2));
    if (n <= 0) return -1;
    if (*r != 0x70) return -1;
    func_ov006_0219ef5c(q, r + 6, n);
    return 0;
}
