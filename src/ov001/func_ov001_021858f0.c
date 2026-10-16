#include "ffc/types.h"
extern void func_ov000_02165914(void);
extern uint32_t func_ov000_02165418(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov001_02185748(void *p);
typedef struct { uint32_t f0,f4,f8,fc,f10,f14,f18,f1c,f20,f24,f28,f2c,f30,f34,f38,f3c,f40,f44,f48,f4c,f50,f54,f58,f5c; } S;
void func_ov001_021858f0(S *self, uint32_t a, uint32_t b, int32_t c, uint32_t d, uint32_t e) {
    if (c != 0 || *(int32_t*)0x0217098c == 1) {
        func_ov000_02165914();
        self->f58 = d;
        self->f0 = b;
        self->f5c = e;
        self->f4 = a;
        self->f54 = 0;
        self->f28 = 0;
        self->f20 = func_ov000_02165418(2, 2, 0);
        func_ov001_02185748(&self->f14);
        func_ov001_02185748(&self->f8);
    }
}
