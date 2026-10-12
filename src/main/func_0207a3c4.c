#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0207a328(void *p, uint32_t x);
extern void func_0208898c(uint32_t x);
extern void func_02089c40(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

typedef struct {
    uint8_t pad0[0x2c];
    uint32_t a;
    uint8_t pad1[0x10];
    uint32_t b;
    uint32_t pad2;
    uint32_t c;
    uint32_t d;
} S;

void func_0207a3c4(S *p)
{
    if ((int32_t)(p->a << 30) >> 31) {
        if (p->b != 0) {
            do {
                uint32_t r = func_02088978();
                func_0207a328(p, 1);
                func_0208898c(r);
            } while (p->b != 0);
        }
        func_02089c40(p->d, 0, 1u << p->c, 0);
    }
}
