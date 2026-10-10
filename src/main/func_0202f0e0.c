#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02030dbc(void *a, void *b, void *c, void *d);

typedef struct {
    uint32_t f0;
    void *p488;
    void *p4d0;
    uint8_t flag;
    uint8_t pad1[3];
    uint32_t three;
    uint32_t e;
    uint32_t pad2[3];
} Loc;

void func_0202f0e0(uint8_t *r0, uint32_t r1) {
    Loc L;
    L.p4d0 = r0 + 0x4d0;
    L.flag = 1;
    if (L.flag != 0) {
        func_0208763c(L.p4d0);
    }
    L.three = 19;
    L.p488 = r0 + 0x488;
    L.e = r1;
    func_02030dbc(&L, r0 + 0x484, &L.p488, &L.three);
    if (L.flag != 0) {
        func_02087678(L.p4d0);
    }
}
