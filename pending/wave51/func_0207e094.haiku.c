#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02087024(void *p);
extern void func_0208898c(uint32_t v);
extern uint32_t func_0207dd08(void *p, uint8_t v);
extern void func_0207dc60(void *p, uint32_t v);
extern int func_0207df24(uint32_t v, int w);
extern void func_0207e040(void);

void func_0207e094(uint32_t *p) {
    uint32_t saved = func_02088978();
    while (!(p[3] & 0x40) && (p[3] & 1)) {
        func_02087024((uint8_t *)p + 0x18);
    }
    func_0208898c(saved);
    if (p[3] & 0x40) {
        volatile uint32_t *vp = p;
        uint32_t v = vp[3];
        uint32_t w = vp[2];
        uint8_t x = (uint8_t)(v >> 8);
        uint32_t r = func_0207dd08(p, x);
        func_0207dc60(p, r);
        if (func_0207df24(w, 1) != 0) {
            func_0207e040();
        }
    }
}
