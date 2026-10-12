#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint8_t *obj;
} Globals;

extern uint32_t func_02088978(void);
extern int func_020876c0(uint32_t a);
extern void func_02087024(uint32_t a);
extern void func_0208898c(uint32_t a);
extern Globals data_02141510;

void func_0208763c(uint32_t a0)
{
    uint32_t r7 = func_02088978();
    uint32_t zero = 0;
    uint8_t *obj = data_02141510.obj;

    for (;;) {
        if (func_020876c0(a0) != 0) {
            break;
        }
        *(uint32_t *)(obj + 0x84) = a0;
        func_02087024(a0);
        *(uint32_t *)(obj + 0x84) = zero;
    }
    func_0208898c(r7);
}
