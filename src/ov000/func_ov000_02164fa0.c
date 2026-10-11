#include "ffc/types.h"

typedef void (*cb_t)(void *, int);

typedef struct {
    uint8_t pad[0x1c];
    uint32_t flag;
    void *ctx;
    uint32_t pad2;
    cb_t cb;
} S;

void func_ov000_02164fa0(S *p, int x) {
    if (p->flag) {
        p->flag = 0;
        if (p->cb) {
            p->cb(p->ctx, x);
        }
    }
}
