#include "ffc/types.h"

extern void func_02063530(void *p);
extern void func_ov009_0219a760(void *object);

typedef struct {
    uint32_t *base;
    uint32_t size;
    uint32_t pad[2];
    uint32_t count;
} Obj;

void *func_ov009_0219a6fc(Obj *p) {
    uint32_t *end = p->base + p->count;
    uint32_t *cur = end + p->size;
    if (cur > end) {
        do {
            cur -= 1;
            func_02063530((void *)cur);
        } while (cur > end);
    }
    p->size = 0;
    func_ov009_0219a760(p);
    return p;
}
