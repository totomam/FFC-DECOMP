#include "ffc/types.h"

extern void func_0203b75c(int);
extern void *func_0205681c(int);
extern void *func_ov003_02163f58(void *);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_02163d50(void *);

typedef struct {
    uint8_t pad[0x398];
    void *node;
} Obj;

void func_ov003_0214d964(void *p) {
    Obj *o = (Obj *)p;
    void *n;
    if (o->node != 0) {
        func_0203b75c(0);
        return;
    }
    n = func_0205681c(0xd4);
    if (n != 0) {
        n = func_ov003_02163f58(n);
    }
    o->node = n;
    func_02056bc0((uint8_t *)o + 0x48, n);
    func_ov003_02163d50(o->node);
}
