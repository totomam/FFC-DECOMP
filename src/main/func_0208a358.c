#include "ffc/types.h"

typedef struct {
    void (*fn)(uint32_t);
    uint32_t arg;
    uint8_t id;
    uint8_t pad[3];
} Ent;

extern Ent data_02143480[];

void func_0208a358(int32_t a) {
    Ent *e = &data_02143480[(uint8_t)a];
    if ((uint8_t)(a >> 8) == e->id) {
        if (e->fn != 0) {
            e->fn(e->arg);
        }
    }
}
