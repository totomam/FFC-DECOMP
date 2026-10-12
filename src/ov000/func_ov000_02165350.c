#include "ffc/types.h"

extern void func_ov000_021652c8(uint8_t *src, void *dst, int count);
extern void func_ov000_021652a8(void *p, int a, int b, void *data, void *buf);
extern uint8_t data_ov000_0216b388[];

void func_ov000_02165350(void *p, int a, int b, uint8_t *c, int n) {
    uint8_t buf[0x50];
    int rem;
    int k;

    rem = n;
    while (rem > 0) {
        k = rem;
        if (rem >= 0x10) {
            k = 0x10;
        }
        func_ov000_021652c8(c, buf, k);
        func_ov000_021652a8(p, a, b, data_ov000_0216b388, buf);
        rem -= k;
        c += k;
    }
}
