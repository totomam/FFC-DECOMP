#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} DataPair;

extern void *func_02056aec(void);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df20;
extern DataPair data_ov007_021c46ac;

void func_ov007_021a7f0c(uint8_t *p)
{
    if (*(uint32_t *)(p + 0xd0) == 0) {
        void *r4 = func_02056aec();
        void *r = func_02060634(*(void **)((uint8_t *)*(void **)&data_0213df20 + 0x20), 8, 0, 10, 0, 0);
        p += 0x14;
        func_02056bc0(p, r);
        func_02056bc0(p, r4);
    } else {
        *(uint32_t *)(p + 0xb8) = data_ov007_021c46ac.a;
        *(uint32_t *)(p + 0xbc) = data_ov007_021c46ac.b;
    }
}
