/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint32_t f0; uint32_t f4; uint32_t f8; } GState;
extern GState data_0213df00;

extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern int func_020891a8(int a, void *b);
extern int func_02089218(int a, int b, int c);
extern void func_0204e4c0(void);
extern void func_0204e590(void);

uint32_t func_0204e3e8(uint32_t p, uint32_t q)
{
    uint32_t h;
    func_020890f8();
    if (func_020891f4(15, 1) == 0) {
        return 2;
    }
    h = func_02088978();
    if (data_0213df00.f8 != 0) {
        func_0208898c(h);
        return 5;
    }
    if (func_020891f4(15, 0) == 0) {
        func_020891a8(15, (void *)func_0204e4c0);
    }
    if (p == 0) {
        data_0213df00.f8 = (uint32_t)func_0204e590;
    } else {
        data_0213df00.f8 = p;
    }
    data_0213df00.f4 = q;
    if (func_02089218(15, 0x20000, 0) < 0) {
        data_0213df00.f8 = 0;
        func_0208898c(h);
        return 4;
    }
    func_0208898c(h);
    return 1;
}
