#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t idx; uint32_t p; uint8_t *tab; uint32_t d[3]; } E;
typedef struct { uint8_t pad[0x14]; E *arr; } O;
extern int func_02071170(void *o, uint32_t v);
int func_020711c4(O *o, int i, int j) {
    E *e = &o->arr[i];
    if (e->p == 0) return 0;
    return func_02071170(o, *(uint32_t *)(e->tab + e->idx * 16 + 0xc));
}
