#include "ffc/types.h"

extern int32_t data_02144fdc;
extern uint8_t data_02144fe0[];
extern void func_0209cd04(int32_t a, int32_t b, void *c);

int32_t func_0209bedc(int32_t a) {
    int32_t n = data_02144fdc;
    if (n == 0x40) {
        return -1;
    }
    data_02144fdc = n + 1;
    func_0209cd04(0, a, data_02144fe0 + n * 12);
    return 0;
}
