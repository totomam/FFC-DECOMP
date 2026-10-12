#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_02035f58(void *object);
extern void func_0201f36c(uint32_t object, uint32_t index, void *output);
extern uint32_t func_02035ff4(void *object);
extern void func_0201f460(uint32_t object, uint32_t index, void *output);
extern void *func_02035fd0(void *object);

uint16_t func_ov009_021adbf4(uint32_t *p)
{
    uint8_t it[0x60];
    uint16_t n = 0;
    uint16_t i;
    uint32_t cnt;
    uint32_t * volatile c2;
    uint32_t * volatile c;

    func_02035f58(it);

    cnt = p[0x62];
    if (cnt != 0) {
        i = 0;
        if (cnt > i) {
        c = &p[0x62];
        do {
            func_0201f36c(data_020b93b8, ((uint32_t *)p[0x61])[i], it);
            if (func_02035ff4(it) != 0) {
                n++;
            }
            i++;
        } while (i < *c);
        }
    }
    cnt = p[0x74];
    if (cnt != 0) {
        i = 0;
        if (cnt > i) {
        c2 = &p[0x74];
        do {
            func_0201f460(data_020b93b8, ((uint32_t *)p[0x73])[i], it);
            if (func_02035ff4(it) != 0) {
                n++;
            }
            i++;
        } while (i < *c2);
        }
    }
    func_02035fd0(it);
    return n;
}
