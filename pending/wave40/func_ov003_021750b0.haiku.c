#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern int32_t func_0201bf6c(uint32_t v);
extern uint32_t data_020b93b8;

typedef struct { uint32_t f0; void *mar; uint32_t idx; } Owner;
typedef struct { uint32_t f0; uint32_t f4; int32_t count; uint32_t off; } Mar;
typedef struct { uint32_t w0; int16_t id; int16_t f6; } Ent;
typedef struct { int16_t key; uint8_t pad[4]; uint16_t flag; } Key;

int32_t func_ov003_021750b0(Owner *a, Key *b)
{
    Mar *m;
    int32_t i;
    int32_t count;

    if (b->flag == 0) {
        m = (Mar *)func_02052d90(a->mar, a->idx);
        count = m->count;
        for (i = 0; i < count; i++) {
            m = (Mar *)func_02052d90(a->mar, a->idx);
            Ent *e = (Ent *)((uint8_t *)m + m->off) + i;
            if (e->id == b->key) {
                if (((int32_t (*)(Owner *))func_ov003_021750b0)(a) != 0) {
                    return 1;
                }
            }
        }
        return 0;
    } else {
        if (func_0201bf6c(data_020b93b8) != 0) {
            return 1;
        }
        return 0;
    }
}
