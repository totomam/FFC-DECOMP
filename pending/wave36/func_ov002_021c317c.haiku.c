#include "ffc/types.h"

extern void func_ov002_021c2904(void *object);
extern void func_ov002_021c31e0(void *object);

typedef struct {
    uint32_t base;
    uint32_t size;
    uint32_t pad[2];
    uint32_t count;
} Obj;

void *func_ov002_021c317c(Obj *p) {
    uint32_t end = p->base + (p->count << 5);
    uint32_t cur = end + (p->size << 5);
    if (cur > end) {
        do {
            cur -= 32;
            func_ov002_021c2904((void *)cur);
        } while (cur > end);
    }
    p->size = 0;
    func_ov002_021c31e0(p);
    return p;
}
