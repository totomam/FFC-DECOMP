#include "ffc/types.h"

typedef struct Obj {
    void (**vt)(struct Obj *);
    uint32_t pad[2];
    int32_t flag;
} Obj;

void func_ov003_0216e58c(Obj *p) {
    if ((int8_t)p->flag == 0) {
        p->vt[2](p);
    }
}
