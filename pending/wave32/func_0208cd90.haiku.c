#include "ffc/types.h"

typedef struct {
    uint16_t h;
    uint16_t pad;
    uint32_t w;
} DataS;

extern uint32_t func_02088978(void);
extern uint32_t func_0208cef8(void);
extern void func_0208898c(uint32_t);
extern uint32_t func_0208cf38(uint32_t, uint32_t);
extern void func_0208d228(void);
extern void func_020891a8(uint32_t, uint32_t);
extern DataS data_02143580;

uint32_t func_0208cd90(void)
{
    uint32_t r5;
    uint32_t r0;

    r5 = func_02088978();
    if (func_0208cef8() != 0) {
        func_0208898c(r5);
        return 3;
    }
    r0 = func_0208cf38(1, 0);
    if (r0 != 0) {
        return r0;
    }
    func_0208d228();
    func_020891a8(10, 0);
    data_02143580.w = 0;
    data_02143580.h = 0;
    func_0208898c(r5);
    return 0;
}
