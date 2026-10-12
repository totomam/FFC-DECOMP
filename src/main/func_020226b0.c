#include "ffc/types.h"

extern void func_0202265c(void *a, int8_t *buf);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02092878(void *a, const int8_t *buf);

void func_020226b0(void *p) {
    int8_t buf[256];
    func_0202265c(p, buf);
    if (func_02092864((const uint8_t *)buf) >= 2) {
        if (buf[0] == 0x22) {
            int8_t *e = buf - 1;
            if (e[func_02092864((const uint8_t *)buf)] == 0x22) {
                e[func_02092864((const uint8_t *)buf)] = 0;
                func_02092878(p, buf + 1);
                func_0202265c(p, buf);
            }
        }
    }
    func_02092878(p, buf);
}
