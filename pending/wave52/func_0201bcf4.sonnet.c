/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern int func_0201bd84(const void *object, uint32_t index);
extern uint32_t func_0201bc54(const void *object, uint32_t index, uint32_t addend);
extern void func_0204f798(void *a, uint32_t b);
extern void *data_0213df18;
void func_0201bcf4(void *obj, uint32_t id, uint32_t flag);
}

struct S {
    uint8_t *p; uint32_t id;
    S(uint8_t *a, uint32_t b) : p(a), id(b) {}
    ~S() {}
};

static inline void setbit(S s, uint32_t flag)
{
    if (flag != 0) {
        uint8_t *bm = *(uint8_t **)(s.p + 0xc);
        uint8_t bit = (uint8_t)(1u << (s.id & 7));
        bm[s.id >> 3] |= bit;
    } else {
        uint8_t *bm = *(uint8_t **)(s.p + 0xc);
        uint32_t bit = 1u << (s.id & 7);
        bm[s.id >> 3] &= (uint8_t)~bit;
    }
}

void func_0201bcf4(void *obj, uint32_t id, uint32_t flag)
{
    uint32_t i;

    if (id != 0x4e) {
        if (flag != 0 && id == 0x23 && func_0201bd84(obj, 0x23) == 0) {
            for (i = 0; i < 0x14; i++) {
                ((uint8_t *)(*(void **)((uint8_t *)obj + 0x68)))[i * 0x2c + 2] = 0;
            }
        }
        func_0201bc54(obj, 0, id);
        setbit(S(*(uint8_t **)((uint8_t *)obj + 0x30), id), flag);
    } else {
        func_0204f798(data_0213df18, flag);
    }
}
