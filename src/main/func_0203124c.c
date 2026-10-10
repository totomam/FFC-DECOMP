#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02031310(void *object);

typedef struct {
    uint32_t base;
    uint32_t size;
    uint32_t pad[2];
    uint32_t count;
} Obj;

void *func_0203124c(Obj *p) {
    uint32_t end = p->base + (p->count << 4);
    uint32_t cur = end + (p->size << 4);
    if (cur > end) {
        do {
            cur -= 16;
            func_020059cc((void *)cur);
        } while (cur > end);
    }
    p->size = 0;
    func_02031310(p);
    return p;
}
