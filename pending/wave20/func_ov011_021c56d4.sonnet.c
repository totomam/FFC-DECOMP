#include "ffc/types.h"

extern void func_ov011_021c52fc(void *p);
extern void func_ov011_021c5378(void *p);
typedef struct { uint8_t pad[0x20]; uint32_t f20; } DfS;
extern DfS *data_0213df18;
extern uint32_t data_0213df20;
typedef struct { uint8_t pad[0x117]; uint8_t f; } PS;

void func_ov011_021c56d4(PS *p)
{
    if (p->f >= 5) return;
    data_0213df20 = data_0213df18->f20;
    func_ov011_021c52fc(p);
    func_ov011_021c5378(p);
}
