#include "ffc/types.h"
extern int func_02024d70(void *p);
typedef struct { uint8_t pad[0x34]; void *v; } In;
typedef struct { uint8_t pad[0x1E4]; In *slot; } Ctx;
int func_ov003_02153cd0(Ctx *p) {
    In *s = p->slot;
    if (s != 0) {
        return func_02024d70(s->v);
    }
    return 1;
}
