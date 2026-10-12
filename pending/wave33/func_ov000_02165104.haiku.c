#include "ffc/types.h"

typedef struct S {
    uint32_t a0;
    uint32_t a4;
    uint32_t a8;
    uint32_t ac;
    uint8_t sub[0x18];
    uint32_t *a28;
} S;

extern S *func_ov000_02164ed0(void);
extern void func_ov000_02165834(void *p);
extern int func_ov000_02165814(void *p);
extern void func_ov000_0216583c(void *p);
extern int func_ov000_02168768(uint32_t *p);
extern uint32_t *func_ov000_0216876c(uint32_t *p, int idx);
extern void func_ov000_021651d4(uint32_t v);

void func_ov000_02165104(void) {
    S *p = func_ov000_02164ed0();
    int i;
    int n;

    if (p->a8 == 0) {
        return;
    }
    func_ov000_02165834(&p->sub);
    if (func_ov000_02165814(p) != 0) {
        func_ov000_0216583c(&p->sub);
        return;
    }
    p->ac = 1;
    n = func_ov000_02168768(p->a28);
    for (i = 0; i < n; i++) {
        func_ov000_021651d4(*func_ov000_0216876c(p->a28, i));
    }
    func_ov000_0216583c(&p->sub);
}
