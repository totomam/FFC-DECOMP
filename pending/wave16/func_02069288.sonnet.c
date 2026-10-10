#include "ffc/types.h"
typedef struct O { struct VT *vt; uint8_t pad[0x80]; uint8_t f; } O;
typedef struct VT { void *s[8]; void (*fn)(O *); } VT;
void func_02069288(O *p) {
    if (p->f == 0) {
        p->f = 1;
        p->vt->fn(p);
    }
}
