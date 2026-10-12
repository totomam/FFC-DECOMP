#include "ffc/types.h"

extern int func_0201bd84(const void *object, uint32_t index);
extern uint32_t func_0201bc54(const void *object, uint32_t index, uint32_t addend);
extern void func_0204f798(void *a, uint32_t b);
extern void *data_0213df18;

void func_0201bcf4(void *obj, uint32_t id, uint32_t flag)
{
    uint32_t i;
    uint8_t *bm;
    void *p;

    if (id != 0x4e) {
        if (flag != 0 && id == 0x23 && func_0201bd84(obj, 0x23) == 0) {
            for (i = 0; i < 0x14; i++) {
                ((uint8_t *)(*(void **)((uint8_t *)obj + 0x68)))[i * 0x2c + 2] = 0;
            }
        }
        func_0201bc54(obj, 0, id);
        p = *(void **)((uint8_t *)obj + 0x30);
        bm = *(uint8_t **)((uint8_t *)p + 0xc);
        if (flag == 0) {
            uint32_t bit = 1u << (id & 7);
            bm[id >> 3] = (uint8_t)(bm[id >> 3] & (uint8_t)~bit);
        } else {
            uint32_t bit = 1u << (id & 7);
            bm[id >> 3] = (uint8_t)(bm[id >> 3] | bit);
        }
    } else {
        func_0204f798(data_0213df18, flag);
    }
}
