#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_ov013_021c21b8(void *object);

typedef struct {
    uint32_t base;
    uint32_t size;
    uint32_t pad[2];
    uint32_t count;
} Obj;

void *func_ov013_021c2154(Obj *p) {
    uint32_t end = p->base + (p->count << 4);
    uint32_t cur = end + (p->size << 4);
    if (cur > end) {
        do {
            cur -= 16;
            func_020059cc((void *)(cur + 4));
        } while (cur > end);
    }
    p->size = 0;
    func_ov013_021c21b8(p);
    return p;
}
