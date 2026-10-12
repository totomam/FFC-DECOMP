#include "ffc/types.h"

extern uintptr_t func_0207cab4(void);
extern void *func_02087460(void);
extern uint16_t func_02088a2c(void *object);

typedef struct { uint32_t a:5; uint32_t b:1; uint32_t c:2; uint32_t d:1; uint32_t e:23; } F;
typedef struct { uint8_t pad[0x1b4]; F f; } S;
int func_0207d4f0(void) {
    S *p = (S *)func_0207cab4();
    void *o = func_02087460();
    if (o != 0 && func_02088a2c(o) != 1) {
        if (p->f.b && !p->f.d) return 1;
    }
    return 0;
}
