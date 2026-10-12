#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_02035f58(void *object);
extern void func_0201f36c(uint32_t object, uint32_t index, void *output);
extern uint32_t func_02035ff4(void *object);
extern void func_0201f460(uint32_t object, uint32_t index, void *output);
extern void *func_02035fd0(void *object);

uint16_t func_ov009_021adbf4(uint8_t *p)
{
    uint8_t it[0x60];
    uint16_t n = 0;
    uint16_t i;
    uint32_t *cnt;

    func_02035f58(it);

    cnt = (uint32_t *)(p + 0x188);
    if (*cnt != 0) {
        for (i = 0; *cnt > i; i++) {
            func_0201f36c(data_020b93b8, (*(uint32_t **)(p + 0x184))[i], it);
            if (func_02035ff4(it) != 0) {
                n++;
            }
        }
    }

    cnt = (uint32_t *)(p + 0x1d0);
    if (*cnt != 0) {
        for (i = 0; *cnt > i; i++) {
            func_0201f460(data_020b93b8, (*(uint32_t **)(p + 0x1cc))[i], it);
            if (func_02035ff4(it) != 0) {
                n++;
            }
        }
    }

    func_02035fd0(it);
    return n;
}
