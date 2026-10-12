#include "ffc/types.h"

typedef struct {
    uint32_t key;
    uint32_t val;
} Entry;

typedef struct {
    Entry *data;
    uint32_t n;
    uint32_t cap;
} Tmp;

extern uint32_t func_ov002_021aa778(const void *object);
extern void func_ov002_021a51e4(void *tmp, void *entry, uint8_t flag);
extern void func_ov002_021a1c28(void *vec, Entry *begin, Entry *end, uint8_t flag);
extern void func_ov002_021a51fc(void *tmp);

void func_ov002_021a1b74(uint8_t *self, const void *key)
{
    Tmp tmp;
    uint32_t i;
    uint8_t flag;

    tmp.data = 0;
    tmp.n = 0;
    tmp.cap = 0;
    i = 0;

    if (*(uint32_t *)(self + 0xbc) != 0) {
        do {
            Entry *e = &(*(Entry **)(self + 0xb8))[i];
            if (e->val != func_ov002_021aa778(key)) {
                if (tmp.n < tmp.cap) {
                    tmp.data[tmp.n] = *e;
                    tmp.n++;
                } else {
                    flag = 0;
                    func_ov002_021a51e4(&tmp, e, flag);
                }
            }
            i++;
        } while (i < *(uint32_t *)(self + 0xbc));
    }

    if ((void *)(self + 0xb8) != (void *)&tmp) {
        flag = 0;
        func_ov002_021a1c28(self + 0xb8, tmp.data, tmp.data + tmp.n, flag);
    }

    func_ov002_021a51fc(&tmp);
}
