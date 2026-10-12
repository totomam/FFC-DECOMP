#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_020095b8(void *obj, void *x);
extern int func_02051bc0(void *obj, void *out);
extern void *func_020059cc(void *object);
extern void func_02088f30(void);
extern uint32_t func_020633dc(Pair p, uint32_t c);

void *func_020634e0(void *out, void *x, uint32_t y)
{
    Pair buf;
    uint32_t obj[3];
    int flag;

    func_020095b8(obj, x);
    flag = (func_02051bc0(obj, &buf) == 0);
    func_020059cc(obj);
    if (flag) {
        func_02088f30();
    }
    *(uint32_t *)out = func_020633dc(buf, y);
    return out;
}
