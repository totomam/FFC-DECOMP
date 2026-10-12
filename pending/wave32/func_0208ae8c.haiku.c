#include "ffc/types.h"

typedef struct {
    uint16_t state;
    uint16_t pad;
    uint32_t a;
    uint32_t b;
} FuncState;

extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern void func_020891a8(int a, void *fn);
extern void func_0208b028(void);

extern FuncState data_02143520;

void func_0208ae8c(void)
{
    if (data_02143520.state == 0) {
        data_02143520.state = 1;
        data_02143520.a = 0;
        data_02143520.b = 0;
        func_020890f8();
        while (func_020891f4(9, 1) == 0) {
        }
        *(volatile uint32_t *)0x2ffff90 = 0;
        func_020891a8(9, func_0208b028);
    }
}
