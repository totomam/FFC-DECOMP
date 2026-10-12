#include "ffc/types.h"
typedef struct { uint32_t key; uint32_t val; } Entry;
typedef struct { Entry *data; uint32_t n; uint32_t cap; } Tmp;
typedef struct { uint8_t f; } Flag;
extern uint32_t func_ov002_021aa778(const void *object);
extern void func_ov002_021a51e4(void *tmp, void *entry, Flag flag);
extern void func_ov002_021a1c28(void *vec, Entry *begin, Entry *end, Flag flag);
extern void func_ov002_021a51fc(void *tmp);

void func_ov002_021a1b74(uint8_t *self, const void *key)
{
    Tmp tmp;
    uint32_t i;
    Flag fl[2];
    Flag *pf;
    const void *k = key;
    const void **pk = &k;
    tmp.data = 0; tmp.n = 0; tmp.cap = 0;
    for (i = 0; i < *(uint32_t *)(self + 0xbc); i++) {
        Entry *e = &(*(Entry **)(self + 0xb8))[i];
        if (e->val != func_ov002_021aa778(*pk)) {
            if (tmp.n < tmp.cap) {
                tmp.data[tmp.n++] = *e;
            } else {
                fl[1].f = 0;
                func_ov002_021a51e4(&tmp, e, fl[1]);
            }
        }
    }
    if ((void *)(self + 0xb8) != (void *)&tmp) {
        fl[0].f = 0;
        func_ov002_021a1c28(self + 0xb8, tmp.data, tmp.data + tmp.n, fl[0]);
    }
    func_ov002_021a51fc(&tmp);
}
