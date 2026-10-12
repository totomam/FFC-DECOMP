#include "ffc/types.h"

extern uint32_t func_02088978(uint32_t x);
extern void func_0208898c(uint32_t x);
extern void func_0208b6e4(uint32_t value);

typedef struct {
    uint32_t pad[12];
    uint32_t flag;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
} DataBlock;

extern DataBlock data_02143540;

uint32_t func_0208b38c(uint32_t *arr, int32_t count, uint32_t a2, uint32_t a3, uint32_t a4)
{
    uint32_t irq;
    int32_t i;

    irq = func_02088978((uint32_t)arr);
    if (data_02143540.flag != 0) {
        func_0208898c(irq);
        return 1;
    }
    data_02143540.flag = 1;
    data_02143540.f3c = a2;
    data_02143540.f34 = a3;
    data_02143540.f38 = a4;
    for (i = 0; i < count; i++) {
        func_0208b6e4(arr[i]);
    }
    func_0208898c(irq);
    return 0;
}
