#include "ffc/types.h"
typedef struct O { void **vt; } O;
typedef struct S {
    void *vt; uint8_t pad0[0x2c]; uint32_t f30; uint8_t pad1[0x168];
    O *arr[0x2c0]; 
} S;
extern char data_020ad958[];
extern void func_02022eb8(uint32_t x);
extern void func_0202ae9c(void *p);
void *func_0202bf18(S *p) {
    uint16_t i;
    p->vt = data_020ad958;
    for (i = 0; i < *(uint32_t *)((char*)p + 0xB20); i++) {
        if (p->arr[i]) {
            func_02022eb8(p->f30);
            if (p->arr[i]) {
                O *o = p->arr[i];
                ((void (*)(O *))o->vt[1])(o);
            }
            p->arr[i] = 0;
        }
    }
    func_0202ae9c(p);
    return p;
}
