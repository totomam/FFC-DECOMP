#include "ffc/types.h"

extern uint32_t func_02036cfc(const void *obj);
extern uint32_t func_02036d18(const void *obj);
extern uint32_t func_02036ce0(const void *obj);
extern uint32_t func_02036d48(const void *obj);
extern uint32_t func_02036d5c(const void *obj);
extern uint32_t func_02036cd8(const void *object);
extern void func_0201d1a4(void *a, uint32_t b, void *c);
extern uint32_t func_02036f1c(const void *p);
extern void *func_020197b4(void *a, uint32_t b);

extern void *data_020b93b8;
extern void *data_020b8e44;

uint32_t func_ov008_0219d150(void *unused, void *obj)
{
    uint32_t out;

    if (func_02036cfc(obj) != 0) {
        return 0;
    }
    if (func_02036d18(obj) == 1) {
        return 0;
    }
    if (func_02036ce0(obj) == 1) {
        return 1;
    }
    if (func_02036ce0(obj) == 2) {
        return 0;
    }
    if (func_02036ce0(obj) == 3) {
        return 0;
    }
    if (func_02036ce0(obj) == 4) {
        return 0;
    }
    if (func_02036d48(obj) != 0) {
        return 0;
    }
    if (func_02036d5c(obj) != 0) {
        return 0;
    }
    func_0201d1a4(data_020b93b8, func_02036cd8(obj), &out);
    if (func_02036f1c(&out) == 0) {
        return 0;
    }
    {
        uint8_t *p = (uint8_t *)func_020197b4(data_020b8e44, func_02036cd8(obj));
        if (p[4] == 0) {
            return 1;
        }
    }
    return 0;
}
