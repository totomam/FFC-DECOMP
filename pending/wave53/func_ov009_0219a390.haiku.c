#include "ffc/types.h"

extern void *func_0203b688(void);
extern void *func_02062a08(void *obj, uint32_t idx);
extern void *func_020655b8(void *obj);
extern void *func_02021610(uint32_t a, uint32_t b);
extern void *func_020655dc(void *obj, uint32_t a, uint32_t b);
extern void *func_02062a78(void *obj, uint32_t lo, uint32_t hi, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t lo;
    uint32_t hi;
} Pair;

typedef void (*RetFn)(void *ret, void *self);

typedef struct { uint32_t a; uint32_t b; } Args;

void *func_ov009_0219a390(uint8_t *self, Args s)
{
    void *obj = func_0203b688();
    void *n1 = func_02062a08(*(void **)(self + 0x94), 2);
    void *n2 = func_020655b8(*(void **)(self + 0x94));
    void *n3 = func_02021610(0xc5, 0);
    void *n4 = func_020655dc(*(void **)(self + 0x94), self[0x98] + 7, 0);
    Pair tmp;
    void *r6;
    void *r7;
    void *n5;

    ((RetFn)((void **)*(void **)(self + 0x94))[4])(&tmp, *(void **)(self + 0x94));
    r6 = func_02062a78(*(void **)(self + 0x94), tmp.lo, tmp.hi, s.a, s.b, 30, 0);
    r7 = func_02021610(0xc3, 0);
    n5 = func_02062a08(*(void **)(self + 0x94), 1);
    func_02056bc0(obj, n5);
    func_02056bc0(obj, r7);
    func_02056bc0(obj, r6);
    func_02056bc0(obj, n4);
    func_02056bc0(obj, n3);
    func_02056bc0(obj, n2);
    func_02056bc0(obj, n1);
    return obj;
}
