#include "ffc/types.h"

typedef struct {
    uint32_t pad[5];
    void *f14;
    uint32_t f18;
} S;

extern uint32_t func_0204458c(void *obj, uint32_t a, uint32_t b);
extern void func_02035f58(void *obj);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern uint32_t func_02036368(void *obj);
extern void func_02036448(void *obj, uint32_t v);
extern void func_0201f304(const void *object, uint32_t index, void *output);
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;

void func_ov003_021679d0(void *p0)
{
    S *p = (S *)p0;
    uint8_t obj[0x60];
    uint32_t x;
    uint32_t *q;

    if (func_0204458c(p->f14, 1, 0) != 0) {
        return;
    }
    func_02035f58(obj);
    func_0201f36c(data_020b93b8, (uint32_t)p->f14, obj);
    x = func_02036368(obj);
    q = (x < p->f18) ? &p->f18 : &x;
    func_02036448(obj, *q);
    func_0201f304(data_020b93b8, (uint32_t)p->f14, obj);
    func_02035fd0(obj);
}
