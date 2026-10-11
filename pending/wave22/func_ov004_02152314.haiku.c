#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02091a24(uint8_t *p);
extern uint32_t func_0208f42c(void);
extern uint8_t data_020ab220[];

typedef struct {
    void *ptr;
    uint32_t len;
    uint32_t cnt;
} S;

void func_ov004_02152314(S *s, uint32_t n) {
    uint32_t cnt = ((n - 1) >> 5) + 1;
    void *p = func_0205681c(cnt << 2);
    if (p == 0) {
        func_02091a24(data_020ab220);
        func_0208f42c();
    }
    s->ptr = p;
    s->cnt = cnt;
    s->len = n;
}
