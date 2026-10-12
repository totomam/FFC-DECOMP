#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
} Obj;

extern Obj *func_ov001_0217f324(void *a, void *b);
extern void *func_ov001_0217f30c(void);
extern uint32_t func_ov001_0217f27c(void);
extern uint32_t func_ov001_0217f28c(void);
extern void *func_ov001_0217f2c4(Obj *obj, uint32_t v);
extern void func_0209a76c(uint32_t v);
extern uint64_t func_02099edc(uint32_t n);
extern uint64_t func_02099a74(uint64_t a, uint64_t b);
extern uint64_t func_02099390(uint64_t a, uint64_t b);
extern uint64_t func_0209b98c(uint64_t a, uint64_t b);

void *func_ov001_0217f1ec(void *a, void *b, uint64_t *c)
{
    Obj *obj = func_ov001_0217f324(a, b);
    if (obj == 0) {
        return 0;
    }
    uint32_t mode = obj->f4;
    if (mode == 0) {
        uint32_t *p = func_ov001_0217f30c();
        obj->f8++;
        func_0209a76c(*c + obj->f8 * *p);
        return func_ov001_0217f2c4(obj, func_ov001_0217f27c());
    } else if (mode == 1) {
        uint64_t *p = func_ov001_0217f30c();
        uint32_t n = obj->f8 + 1;
        uint64_t t;
        obj->f8 = n;
        t = func_02099a74(func_02099edc(n), *p);
        t = func_02099390(*c, t);
        t = func_0209b98c(t, func_02099edc(n));
        return func_ov001_0217f2c4(obj, func_ov001_0217f28c());
    }
    return func_ov001_0217f30c();
}
