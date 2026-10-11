#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020213f0(int x);
extern void func_020211d4(int a, int b);
extern void func_0203758c(void);
extern Pair data_020afd00;

void func_020485f8(uint8_t *p)
{
    func_020213f0(0x2f);
    func_020211d4(0x3d, 0x5a);
    func_0203758c();
    *(Pair *)(p + 0x80) = data_020afd00;
}
