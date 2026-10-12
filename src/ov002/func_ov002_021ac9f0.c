#include "ffc/types.h"

typedef struct {
    uint32_t key;
    uint32_t f1;
    uint32_t f2;
} Entry;

extern Entry data_ov002_021d3adc[];

int func_ov002_021ac9f0(uint32_t a, uint32_t b)
{
    uint32_t i;
    for (i = 0; i < 7; i++) {
        Entry *p = &data_ov002_021d3adc[i];
        if (a == p->key) {
            if (p->f1 == 8 && p->f2 == 8) {
                return 1;
            }
            if (b == p->f1) {
                return 2;
            }
            if (b == p->f2) {
                return 0;
            }
        }
    }
    return 1;
}
