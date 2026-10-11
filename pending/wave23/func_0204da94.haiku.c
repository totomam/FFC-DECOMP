#include "ffc/types.h"

extern void func_0204de50(void);
extern void *func_0204de80(void);
extern int func_0204dc94(void *p, uint32_t a);
extern int func_0204bde0(int r, uint32_t b, uint32_t c);

int func_0204da94(uint32_t a, uint32_t b, uint32_t c)
{
    int r;
    func_0204de50();
    r = func_0204dc94(func_0204de80(), a);
    if (r == 0) {
        return -1;
    }
    return func_0204bde0(r, b, c);
}
