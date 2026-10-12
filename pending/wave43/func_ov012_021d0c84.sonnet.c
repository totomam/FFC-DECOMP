#include "ffc/types.h"
typedef struct {
    uint32_t big : 1;
    uint32_t cnt : 7;
    uint32_t pad : 24;
    uint32_t n;
    uint16_t *ptr;
} S;
typedef struct { uint8_t pad[0x2EC]; S s; } O;
static inline int isbig(S *s) { return !(!s->big); }
static inline uint32_t size(S *s) { return isbig(s) ? s->n : s->cnt; }
static inline uint16_t *data(S *s) { return !isbig(s) ? (uint16_t *)((uint8_t *)s + 2) : s->ptr; }
uint32_t func_ov012_021d0c84(O *p) {
    uint32_t cnt = 0;
    uint32_t i;
    int big = isbig(&p->s);
    for (i = 0; i < size(&p->s); i++) {
        uint16_t v = data(&p->s)[i];
        if (v >= 0x30 && data(&p->s)[i] <= 0x39) cnt++;
    }
    return cnt;
}
