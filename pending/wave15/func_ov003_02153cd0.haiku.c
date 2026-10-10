#include "ffc/types.h"

extern int func_02024d70(void *p);

typedef struct {
    uint8_t pad[0x1E4];
    void *slot;
} Ctx;

int func_ov003_02153cd0(Ctx *p) {
    if (p->slot != 0) {
        return func_02024d70(*(void **)((uint8_t *)p->slot + 0x34));
    }
    return 1;
}
