#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02087024(void *);
extern uint32_t func_0209a76c(uint32_t);
extern void func_02087058(void *);

typedef struct {
    uint32_t pad[4];
    uint32_t *buf;
    int32_t cnt;
    uint32_t head;
    int32_t cap;
} Q;

uint32_t func_02087570(void *self, uint32_t val, uint32_t flag) {
    Q *q = (Q *)self;
    uint32_t saved = func_02088978();
    uint32_t idx;
    while (q->cnt <= q->cap) {
        if (!(flag & 1)) {
            func_0208898c(saved);
            return 0;
        }
        func_02087024(q);
    }
    idx = func_0209a76c(q->head + q->cnt - 1);
    q->head = idx;
    q->buf[idx] = val;
    q->cap++;
    func_02087058((char *)q + 8);
    func_0208898c(saved);
    return 1;
}
