#include "ffc/types.h"
extern void *func_02056aec(void);
extern void *func_0203bf7c(int);
extern void *func_0203b708(int);
extern void func_02056bc0(void *object, void *node);
void func_ov012_021cdfa4(uint8_t *self) {
    void *a, *b, *c; uint8_t *p; int32_t v; int32_t *d;
    v = *(int16_t *)(self + 0x10e); d = *(int32_t **)(self + 0x118); *d = v;
    a = func_02056aec();
    b = func_0203bf7c(0x1e);
    c = func_0203b708(0x1e); p = self + 0x14;
    func_02056bc0(p, c);
    func_02056bc0(p, b);
    func_02056bc0(p, a);
}
