#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    void (**vt)(Obj *);
};

typedef struct {
    uint32_t a;
    Obj *b;
} G;

extern void func_02056bf4(void *x);
extern G data_ov007_021c9704;

void func_ov007_0219ca20(uint8_t *p)
{
    if (data_ov007_021c9704.b) {
        func_02056bf4(*(void **)(p + 0xc8));
        if (data_ov007_021c9704.b) {
            data_ov007_021c9704.b->vt[1](data_ov007_021c9704.b);
        }
        data_ov007_021c9704.b = 0;
    }
}
