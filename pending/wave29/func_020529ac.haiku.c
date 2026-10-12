#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020095b8(void *obj, void *param);
extern int func_02051bc0(void *obj, Pair *out);
extern void *func_020059cc(void *object);
extern void func_02088f30(void);
extern void func_020529e4(Pair v);

void func_020529ac(void *param)
{
    Pair out;
    uint32_t obj[3];
    uint32_t *p;
    int flag;

    p = obj;
    func_020095b8(p, param);
    flag = (func_02051bc0(p, &out) == 0);
    func_020059cc(p);
    if (flag) {
        func_02088f30();
    }
    func_020529e4(out);
}
