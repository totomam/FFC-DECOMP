#include "ffc/types.h"

typedef struct Ent {
    uint32_t w[10];
} Ent;

typedef struct Mgr {
    uint8_t pad[0x50];
    int32_t count;
    Ent ents[1];
} Mgr;

extern Mgr *func_ov000_02163350(void);

int func_ov000_02163568(uint32_t key)
{
    int i;
    int j;
    int k;

    if (func_ov000_02163350()->count == 0) {
        return 0;
    }
    i = 0;
    if (func_ov000_02163350()->count > 0) {
        do {
            if (func_ov000_02163350()->ents[i].w[0] == key) {
                break;
            }
            i++;
        } while (i < func_ov000_02163350()->count);
    }
    if (i == func_ov000_02163350()->count) {
        return 0;
    }
    if (i < func_ov000_02163350()->count - 1) {
        for (j = i; j < func_ov000_02163350()->count - 1; j++) {
            Mgr *m = func_ov000_02163350();
            uint32_t *d = m->ents[j].w;
            uint32_t *s = m->ents[j + 1].w;
            for (k = 0; k < 5; k++) {
                d[k] = s[k];
            }
        }
    }
    {
        Mgr *m = func_ov000_02163350();
        m->count = m->count - 1;
    }
    return 1;
}
