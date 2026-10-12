#include "ffc/types.h"

typedef struct {
    uint32_t pad[5];
    void (*free)(void *);
} Alloc;

extern Alloc data_ov001_02195798;

typedef struct {
    uint32_t type;
    uint32_t pad1[2];
    void *f0c;
    uint32_t pad2;
    void *f14;
    void *f18;
    void *f1c;
} Obj;

void func_ov001_02189040(Obj *p)
{
    if (p == 0) {
        return;
    }
    switch (p->type) {
    case 2:
        if (p->f1c != 0) {
            data_ov001_02195798.free(p->f1c);
            p->f1c = 0;
        }
        if (p->f18 != 0) {
            data_ov001_02195798.free(p->f18);
            p->f18 = 0;
        }
        data_ov001_02195798.free(p->f14);
        p->f14 = 0;
        break;
    case 1:
        break;
    case 3:
        data_ov001_02195798.free(p->f0c);
        p->f0c = 0;
        break;
    }
    data_ov001_02195798.free(p);
}
