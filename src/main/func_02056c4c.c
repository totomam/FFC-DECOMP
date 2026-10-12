#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef void (*VFn)(void *self);
typedef struct Obj {
    VFn *vt;
    struct Obj *next;
} Obj;

void func_02056c4c(uint8_t *p) {
    struct {
        void *ptr;
        uint8_t flag;
    } volatile loc;
    uint8_t f;
    Obj *n;
    Obj *next;

    f = p[0x12];
    loc.ptr = p + 0x1c;
    loc.flag = f;
    if (f) {
        func_0208763c(p + 0x1c);
    }
    n = *(Obj **)(p + 0x14);
    if (n) {
        do {
            next = n->next;
            if (n) {
                ((VFn)n->vt[1])(n);
            }
            n = next;
        } while (n);
    }
    *(Obj **)(p + 0x14) = 0;
    *(void **)(p + 0x18) = p + 0x14;
    if (loc.flag) {
        func_02087678(loc.ptr);
    }
}
