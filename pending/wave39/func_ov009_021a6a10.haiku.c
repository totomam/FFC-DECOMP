#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_02035f58(void *object);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern uint32_t func_02035ff4(void *object);
extern uint32_t func_02036174(void *object);
extern void *func_02035fd0(void *object);

uint32_t func_ov009_021a6a10(void *unused, const uint32_t *p1, const uint32_t *p2)
{
    uint32_t in[2];
    uint32_t res[2];
    uint8_t obj[0x60];
    int i;
    uint32_t ok;

    in[0] = *p1;
    in[1] = *p2;
    func_02035f58(obj);
    for (i = 0; i < 2; i++) {
        func_0201f36c(data_020b93b8, in[i], obj);
        if (func_02035ff4(obj) != 0) {
            res[i] = func_02036174(obj);
        } else {
            res[i] = 0;
        }
    }
    ok = 1;
    if (res[0] <= res[1]) {
        ok = 0;
    }
    func_02035fd0(obj);
    return ok;
}
