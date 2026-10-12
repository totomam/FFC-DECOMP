#include "ffc/types.h"

extern void func_0208b3dc(uint32_t *p, int n);
extern int func_0208b98c(int a, int b, int c, int d);

uint32_t func_0208b448(uint32_t a, uint32_t b) {
    uint32_t buf[3];

    buf[0] = b;
    buf[1] = 0x3006000;
    func_0208b3dc(&buf[1], 1);
    while (func_0208b98c(0, 2, 0, 1) != 1) {
    }
    buf[1] = 0x2006200 | (uint8_t)a;
    buf[2] = 0x1010000 | (uint16_t)buf[0];
    func_0208b3dc(&buf[1], 2);
    return 0;
}
