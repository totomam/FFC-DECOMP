#include "ffc/types.h"

extern uint32_t data_ov003_0217baa0[];
extern void func_02060bf4(void *p);
extern void func_02060e88(void *p, int v);
extern void func_02060ea4(void *p, int v);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov003_02176be4(void *param)
{
    uint8_t *obj = (uint8_t *)param;

    *(uint32_t **)obj = data_ov003_0217baa0;
    if (*(int32_t *)(obj + 0x94) == 4) {
        func_02060bf4(*(void **)(*(uint8_t **)(obj + 0x9c) + 0x1c));
    } else if (*(int32_t *)(obj + 0x94) == 5) {
        func_02060bf4(*(void **)(*(uint8_t **)(obj + 0x9c) + 0x1c));
        func_02060e88(*(void **)(*(uint8_t **)(obj + 0x9c) + 0x24), 2);
        func_02060ea4(*(void **)(*(uint8_t **)(obj + 0x9c) + 0x24), 0x10);
    }
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
