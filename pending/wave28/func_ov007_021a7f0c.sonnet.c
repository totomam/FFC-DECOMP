#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0x20]; void *x; } G;
typedef struct {
    uint8_t p0[0x14];
    uint8_t node[0xa4];
    uint32_t f_b8;
    uint32_t f_bc;
    uint8_t p1[0x10];
    uint32_t flag;
} S;

extern void *func_02056aec(void);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern G **data_0213df20;
extern DataPair data_ov007_021c46ac;

void func_ov007_021a7f0c(S *p)
{
    if (p->flag == 0) {
        void *r4 = func_02056aec();
        void *r = func_02060634((*data_0213df20)->x, 8, 0, 10, 0, 0);
        void *n = p->node - 0 ;
        n = (uint8_t*)p + 0x14;
        func_02056bc0(n, r);
        func_02056bc0(n, r4);
    } else {
        *(DataPair *)&p->f_b8 = data_ov007_021c46ac;
    }
}
