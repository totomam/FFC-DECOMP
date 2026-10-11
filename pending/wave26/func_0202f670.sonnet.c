#include "ffc/types.h"
typedef struct Obj { uint32_t f0; uint32_t f4; } Obj;
typedef struct G { uint8_t flag; uint8_t pad[3]; Obj *p1; Obj *p2; } G;
typedef struct S { uint8_t b; } S;
extern G data_021394f0;
extern void func_02030e68(Obj *p, uint32_t a, S v);
void func_0202f670(void) {
    S s1, s2;
    s1.b = 0;
    data_021394f0.flag = s1.b;
    func_02030e68(data_021394f0.p1, data_021394f0.p1->f4, s1);
    s2.b = 0;
    func_02030e68(data_021394f0.p2, data_021394f0.p2->f4, s2);
}
