#include "ffc/types.h"
extern void func_0206bf5c(void *o);
extern uint32_t func_0206c184(void *o, uint32_t n);
extern void *func_0206c030(void *o);
typedef struct { uint8_t pad[0x124]; uint32_t *arr; uint32_t count; } S;
void func_ov011_021c7a5c(S *p) {
    uint32_t rng[2];
    uint32_t i;
    func_0206bf5c(rng);
    for (i = 0; i < p->count; i++) {
        uint32_t j = func_0206c184(rng, p->count);
        uint32_t t = p->arr[i];
        p->arr[i] = p->arr[j];
        p->arr[j] = t;
    }
    func_0206c030(rng);
}
