#include "ffc/types.h"

typedef struct Obj {
    int (**vt)(struct Obj *, uint32_t, uint32_t);
    uint32_t pad[8];
    uint32_t cur;
    uint32_t end;
} Obj;

int func_02097a98(Obj *p) {
    uint32_t end = p->end;
    uint32_t cur = p->cur;
    int n;
    if (cur < end) {
        do {
            n = p->vt[13](p, cur, end - cur);
            if (n <= 0) {
                return -1;
            }
            p->cur += n;
            cur = p->cur;
            end = p->end;
        } while (cur < end);
    }
    return 0;
}
