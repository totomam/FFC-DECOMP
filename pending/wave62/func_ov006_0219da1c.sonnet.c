#include "ffc/types.h"
extern void func_ov006_0219ceec(void *p);
typedef struct { uint32_t a; void *b; uint32_t c; void *d; } S;
extern S data_ov006_021ba1dc;
void func_ov006_0219da1c(void)
{
    S *s = &data_ov006_021ba1dc;
    if (s->d) {
        func_ov006_0219ceec(s->d);
        s = &data_ov006_021ba1dc;
        s->d = 0;
    }
    s = &data_ov006_021ba1dc;
    if (s->b) {
        func_ov006_0219ceec(s->b);
        s = &data_ov006_021ba1dc;
        s->b = 0;
    }
}
