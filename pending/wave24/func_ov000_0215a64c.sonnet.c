#include "ffc/types.h"

typedef void (*FnT)(void *, int, void *);

struct Obj {
    uint8_t pad[0x14];
    FnT fn;
    void *ctx;
};

extern void func_ov000_02159014(void *p);
extern void func_ov000_0215a698(void);
extern struct Obj *data_ov000_02170060;

void func_ov000_0215a64c(void *a)
{
    struct Obj *o = data_ov000_02170060;
    if (o == 0) {
        return;
    }
    if (a == 0) {
        return;
    }
    func_ov000_02159014(a);
    o = data_ov000_02170060;
    if (o->fn != 0) {
        o->fn(a, 0, o->ctx);
    }
    func_ov000_0215a698();
}
