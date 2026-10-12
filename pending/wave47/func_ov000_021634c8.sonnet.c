#include "ffc/types.h"

typedef struct { uint32_t w[10]; } Ent2;
typedef struct { uint32_t w[10]; } Ent;
typedef struct {
    uint8_t pad0[0x50];
    int32_t count;
    Ent e[1];
} Mgr;
typedef struct { uint8_t pad[0x6a]; uint8_t id; } Dummy;

extern Mgr *func_ov000_02163350(void);

int func_ov000_021634c8(uint8_t key) {
    int i;
    if (func_ov000_02163350()->count == 0) return 0;
    i = 0;
    if (func_ov000_02163350()->count > 0) {
        do {
            if (key == ((uint8_t *)&func_ov000_02163350()->e[i])[0x6a - 0x54]) break;
            i++;
        } while (i < func_ov000_02163350()->count);
    }
    if (i == func_ov000_02163350()->count) return 0;
    if (i < func_ov000_02163350()->count - 1) {
        do {
            uint8_t *b1 = (uint8_t *)func_ov000_02163350();
            uint8_t *b2 = (uint8_t *)func_ov000_02163350();
            Ent *d = (Ent *)(b1 + i * sizeof(Ent) + 0x54);
            Ent *s = (Ent *)(b2 + (i + 1) * sizeof(Ent2) + 0x54);
            *d = *s;
            i++;
        } while (i < func_ov000_02163350()->count - 1);
    }
    { Mgr *m = func_ov000_02163350(); m->count = m->count - 1; }
    return 1;
}
