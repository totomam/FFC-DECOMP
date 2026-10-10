#include "ffc/types.h"
typedef struct G { uint8_t pad[0x30b0]; int x; } G;
extern G *data_0213e178;
extern void func_0206cd88(void *p);
extern void *func_02056aec(void *p);
extern void *func_0206cbd4(void *p);
extern void func_02056bc0(void *object, void *node);
void func_0206eeec(uint32_t *a0)
{
    if (data_0213e178->x == 1) {
        a0[3] = (a0[3] & ~0xffu) | 2;
    } else {
        func_0206cd88(data_0213e178);
        void *r4 = func_02056aec(a0);
        void *r1 = func_0206cbd4(data_0213e178);
        uint32_t *q = a0 + 5;
        func_02056bc0(q, r1);
        func_02056bc0(q, r4);
    }
}
