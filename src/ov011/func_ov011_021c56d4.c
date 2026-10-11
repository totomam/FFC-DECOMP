#include "ffc/types.h"

extern void func_ov011_021c52fc(void *p);
extern void func_ov011_021c5378(void *p);
extern uint8_t *data_0213df18;
extern uint32_t data_0213df20;

void func_ov011_021c56d4(uint8_t *p)
{
    if (p[0x117] < 5) {
        data_0213df20 = *(uint32_t *)(data_0213df18 + 0x20);
        func_ov011_021c52fc(p);
        func_ov011_021c5378(p);
    }
}
