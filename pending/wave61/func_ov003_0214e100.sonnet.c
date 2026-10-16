#include "ffc/types.h"
typedef struct { int32_t x, y; } V;
extern void *data_020b8e44;
extern void *func_ov003_0214649c(uint32_t a);
extern int32_t func_02018104(void *p, uint32_t i);
extern int32_t *func_ov003_02153470(void *p);
extern void func_02088f30(void);
extern V func_0201805c(void *p, uint32_t i);
static inline void sh(V *o, V v){ o->x = v.x << 12; o->y = v.y << 12; }
void func_ov003_0214e100(V *out, uint8_t *o)
{
    void *t = func_ov003_0214649c(*(uint32_t *)(o + 0x14));
    int32_t r = func_02018104(data_020b8e44, *(uint16_t *)(o + 0x28));
    if (r != *func_ov003_02153470(t)) func_02088f30();
    V l;
    l = func_0201805c(data_020b8e44, *(uint16_t *)(o + 0x28));
    sh(out, l);
}
