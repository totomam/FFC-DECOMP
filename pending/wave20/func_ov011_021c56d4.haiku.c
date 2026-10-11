#include "ffc/types.h"

extern void func_ov011_021c52fc(void);
extern void func_ov011_021c5378(void *p);
typedef struct { uint8_t pad[0x20]; uint32_t f20; } DfS;
extern DfS *data_0213df18;
extern uint32_t data_0213df20;

void func_ov011_021c56d4(uint8_t *p)
{
    if (p[0x117] < 5) {
        data_0213df20 = data_0213df18->f20;
        func_ov011_021c52fc();
        func_ov011_021c5378(p);
    }
}
