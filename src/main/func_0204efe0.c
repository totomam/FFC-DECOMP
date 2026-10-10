#include "ffc/types.h"

extern uint8_t data_0213df10[];
extern void func_0208763c(void *p);
extern void func_0204f6b0(uint8_t *a, uint8_t *b, uint8_t *c);
extern void func_02087678(void *p);

typedef struct {
    void *p;
    uint8_t flag;
} Loc;

void func_0204efe0(uint8_t *a, int idx) {
    volatile Loc l;
    uint8_t *s;
    uint8_t *t;

    t = *(uint8_t **)(data_0213df10 + 8) + 0x7c;
    l.p = t;
    l.flag = 1;
    if (l.flag != 0) {
        func_0208763c(t);
    }
    s = *(uint8_t **)(a + 8);
    func_0204f6b0(*(uint8_t **)(a + 4),
                  *(uint8_t **)(s + 0x5c) + idx * 0x1c,
                  a + 0x78);
    if (l.flag != 0) {
        func_02087678(l.p);
    }
}
