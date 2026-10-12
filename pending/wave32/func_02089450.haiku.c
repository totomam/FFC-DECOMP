#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t state;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} GlobalState;

extern GlobalState data_02141948;
extern uint32_t func_02088978(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0208898c(uint32_t t);
extern int func_02089808(void);

int func_02089450(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t t = func_02088978(a, b, c, d);
    if (data_02141948.state != 0) {
        func_0208898c(t);
        return 1;
    }
    data_02141948.state = 1;
    func_0208898c(t);
    data_02141948.f18 = 2;
    data_02141948.f1c = 0;
    data_02141948.fc = a;
    data_02141948.f10 = b;
    data_02141948.f8 = c;
    data_02141948.f14 = d;
    if (func_02089808() != 0) {
        return 0;
    }
    data_02141948.state = 0;
    return 3;
}
