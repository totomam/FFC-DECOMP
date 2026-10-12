#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void *func_0203bc04(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

typedef void (*VFn1)(void *);
typedef void (*VFn2)(void *, uint32_t);
typedef void (*VFn3)(void *, Pair);

#define VT(o) (*(void ***)(o))

void func_ov011_021c49cc(uint8_t *p, int a)
{
    void **obj;
    void **arr;
    Pair s;

    if (*(void **)(p + 0xe8) != 0) {
        func_02056bf4(p + 0x48);
        obj = *(void ***)(p + 0xe8);
        if (obj != 0) {
            ((VFn1)VT(obj)[1])(obj);
        }
    }

    arr = (void **)(p + 0xec);
    *(void **)(p + 0xe8) = func_0203bc04(arr[a], 1, 0, 0);
    func_02056bc0(p + 0x48, *(void **)(p + 0xe8));

    obj = *(void ***)(p + 0xe8);
    ((VFn1)VT(obj)[10])(obj);

    obj = *(void ***)(p + 0xe8);
    ((VFn2)VT(obj)[8])(obj, 2);

    s.x = 0;
    s.y = 0xa0;
    obj = *(void ***)(p + 0xe8);
    ((VFn3)VT(obj)[3])(obj, s);
}
