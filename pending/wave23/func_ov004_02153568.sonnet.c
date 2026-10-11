#include "ffc/types.h"

extern void *func_ov004_02153514(void);
extern void func_0206da88(void *p, uint16_t v);
extern void func_ov004_02153598(void *s, uint32_t a, void *b);

typedef struct {
    uint8_t pad[0x290];
    void *obj;
} S;

void func_ov004_02153568(S *s, uint32_t a)
{
    void *o = s->obj;
    if (o != 0) {
        func_0206da88(o, (uint16_t)(a + 1));
    } else {
        void *x = func_ov004_02153514();
        func_ov004_02153598(s, a, x);
    }
}
