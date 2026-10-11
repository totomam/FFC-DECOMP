#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Args;
typedef struct { uint8_t pad[0xc]; void *p; uint32_t v; } Data;

extern Data data_0213df10;
extern uint32_t *func_0204f374(void *a, Args *b);

void func_0204f338(Args s) {
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint16_t old = *ime;
    *ime = 0;
    volatile uint8_t flag = (old != 0) ? 1 : 0;
    uint32_t *r = func_0204f374(data_0213df10.p, &s);
    r[1] = data_0213df10.v;
    (void)*ime;
    *ime = flag;
}
