#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern int func_0208b0d0(uint32_t a, uint32_t b, uint32_t c, uint8_t d);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
} A;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
} D;

extern D data_02143520;

int func_0208aed0(A *a, uint32_t b, uint32_t c)
{
    uint8_t mode, mode2;
    uint32_t m;

    if (a->f4 & 0x1f) {
        return 2;
    }
    if (a->f8 & 0x1f) {
        return 2;
    }
    if (a->f8 == 0) {
        return 2;
    }
    if (a->fc < 0x400) {
        return 2;
    }
    switch (a->f0) {
    case 0: m = 0; break;
    case 1: m = 1; break;
    case 2: m = 2; break;
    case 3: m = 3; break;
    case 4: m = 5; break;
    case 5: m = 7; break;
    default: return 2;
    }
    mode = a->f10 ? (uint8_t)(0x10 | m) : (uint8_t)m;
    mode2 = mode;

    func_02088978();
    if (data_02143520.f4 != 0) {
        func_0208898c();
        return 1;
    }
    data_02143520.f4 = 1;
    func_0208898c();
    data_02143520.f8 = b;
    data_02143520.fc = c;
    data_02143520.f14 = a->f14;
    data_02143520.f18 = a->f18;
    if (func_0208b0d0(a->f4, a->f8, a->fc, mode2)) {
        return 0;
    }
    data_02143520.f4 = 0;
    return 3;
}
