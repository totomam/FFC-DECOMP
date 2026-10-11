#include "ffc/types.h"

extern void func_0208092c(uint32_t a, uint32_t b, uint32_t c, void *buf);
extern void func_02081c54(void *buf);

void func_02081bb4(uint32_t a, uint32_t b, uint32_t c, int flag, void *buf) {
    uint8_t local[0x30];
    if (buf == 0) {
        buf = local;
    }
    func_0208092c(a, b, c, buf);
    if (flag != 0) {
        *(volatile uint32_t *)0x04000440 = 2;
        func_02081c54(buf);
    }
}
