#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_020553e8(uint32_t v);
extern void func_02087678(void *p);

typedef struct {
    uint8_t pad0[4];
    uint32_t *arr;
    uint32_t count;
    uint8_t pad1[0x14];
} Obj;

typedef struct {
    uint32_t a;
    void *tmp;
    volatile uint8_t flag;
} Local;

void func_02055980(Obj *p) {
    Local l;
    uint32_t n;
    uint32_t *it;
    l.tmp = (uint8_t *)p + 0x1c;
    l.flag = 1;
    if (l.flag != 0) {
        func_0208763c();
    }
    n = p->count;
    it = p->arr;
    if (it != p->arr + n) {
        do {
            func_020553e8(*it);
            it++;
            n = p->count;
        } while (it != p->arr + n);
    }
    p->count = p->count - n;
    if (l.flag != 0) {
        func_02087678(l.tmp);
    }
}
