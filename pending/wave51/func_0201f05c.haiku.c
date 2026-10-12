#include "ffc/types.h"

extern void func_02036de4(void *a, uint32_t b);
extern uint8_t *func_020197b4(void *a, uint32_t b);
extern void func_02036df8(void *a, uint32_t b);
extern void func_02036e7c(void *a, uint32_t b);
extern void func_02036e90(void *a, uint32_t b);
extern void func_02036e40(void *a, uint32_t b);
extern void func_02036e0c(void *a, uint32_t b);
extern void func_02036e54(void *a, uint32_t b);
extern void func_02036f08(void *a, uint32_t b);
extern void func_02036e1c(void *a, uint32_t b);
extern void *data_020b8e44;

void func_0201f05c(void *r0, uint8_t *p, void *obj)
{
    uint16_t id = *(uint16_t *)(p + 4);
    uint8_t *x;

    func_02036de4(obj, id);
    x = func_020197b4(data_020b8e44, id);
    func_02036df8(obj, x[9]);
    func_02036e7c(obj, x[6]);
    func_02036e90(obj, x[7]);
    if (p[0]) {
        func_02036e40(obj, 1);
    } else {
        func_02036e40(obj, 0);
    }
    func_02036e0c(obj, p[1]);
    func_02036e54(obj, 1);
    func_02036f08(obj, 0);
    func_02036e1c(obj, 0);
}
