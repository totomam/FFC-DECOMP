#include "ffc/types.h"

extern void func_020891a8(uint32_t a, void *b);
extern uint32_t func_0208a2d4(void);
extern uint32_t func_020891f4(uint32_t a, uint32_t b);
extern void func_020889f4(uint32_t a);
extern void func_0208a238(void);

void func_0208a250(void)
{
    func_020891a8(7, (void *)func_0208a238);
    if (func_0208a2d4() != 0) {
        if (func_020891f4(7, 1) == 0) {
            do {
                func_020889f4(50);
            } while (func_020891f4(7, 1) == 0);
        }
    }
}
