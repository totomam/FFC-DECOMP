#include "ffc/types.h"

typedef struct Gbl {
    uint8_t pad[0x20];
    uint32_t f20;
} Gbl;

extern uint8_t data_ov010_021d1d74[];
extern Gbl *data_0213df20;
extern void func_0206047c(uint32_t v);
extern void func_ov009_021a4360(void *p);

void *func_ov010_021c96ec(void *p)
{
    *(void **)p = data_ov010_021d1d74;
    func_0206047c(data_0213df20->f20);
    func_ov009_021a4360(p);
    return p;
}
