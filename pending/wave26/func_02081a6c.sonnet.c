#include "ffc/types.h"

extern void func_02084774(uint32_t x);
extern void func_02088978(void);
extern void func_0208898c(void);
extern struct { uint32_t a; uint32_t b; } data_020b2944;

int func_02081a6c(uint32_t p) {
    uint32_t old = data_020b2944.b;
    if (old != 0xFFFFFFFFu) {
        func_02084774(old);
    }
    func_02088978();
    data_020b2944.b = p;
    func_0208898c();
    if (old > 3) return -1;
    return (int)old;
}
