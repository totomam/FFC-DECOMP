#include "ffc/types.h"

extern void func_02086fbc(void *p);
extern uint32_t func_02088978(void);
extern void func_02087288(void);
extern uint32_t func_02087508(void *p, void **out, uint32_t x);
extern void func_020874ac(uint32_t a, int32_t b, uint32_t c);
extern void func_ov000_0214d1fc(void *p);
extern void func_020872ac(void);
extern void func_020870d4(void);
extern void func_0208898c(uint32_t x);

void func_ov000_0214e6c4(uint8_t *a)
{
    void *node;
    uint32_t h;

    if (a == 0) {
        return;
    }
    func_02086fbc(a + 0x20);
    h = func_02088978();
    func_02087288();
    if (func_02087508(a, &node, 0)) {
        do {
            if (node != 0) {
                uint32_t v = *(uint32_t *)((uint8_t *)node + 8);
                if (v != 0) {
                    func_020874ac(v, -11, 0);
                }
                func_ov000_0214d1fc(node);
            }
        } while (func_02087508(a, &node, 0));
    }
    func_020872ac();
    func_020870d4();
    func_0208898c(h);
}
