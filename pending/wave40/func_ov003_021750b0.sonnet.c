#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern int32_t func_0201bf6c(uint32_t v);
extern uint32_t data_020b93b8;

typedef struct { uint32_t f0; void *mar; uint32_t idx; } Owner;
typedef struct { uint32_t f0; uint32_t f4; int32_t count; uint32_t off; } Mar;
typedef struct { int16_t key; uint8_t pad[4]; uint16_t flag; } Key;

int32_t func_ov003_021750b0(Owner *a, Key *b)
{
    int32_t i;
    int32_t count;

    if (b->flag == 0) {
        count = ((Mar *)func_02052d90(a->mar, a->idx))->count;
        for (i = 0; i < count; i++) {
            Mar *m = (Mar *)func_02052d90(a->mar, a->idx);
            uint8_t *p = (uint8_t *)m + m->off;
            p += i << 3;
            if (b->key == *(int16_t *)(p + 4)) {
                if (((int32_t (*)(Owner *))func_ov003_021750b0)(a) != 0) {
                    return 1;
                }
            }
        }
    } else {
        if (func_0201bf6c(data_020b93b8) != 0) {
            return 1;
        }
    }
    return 0;
}
