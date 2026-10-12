#include "ffc/types.h"

typedef int (*fnp)(void *);

typedef struct {
    int pad[3];
    fnp *start;
    uint32_t count;
} Reg;

extern Reg data_0213e0a0;

int func_02055880(void *a)
{
    fnp * volatile end;
    fnp *p;
    int more;
    int r;

    end = data_0213e0a0.start + data_0213e0a0.count;
    more = (end != data_0213e0a0.start);
    while (more) {
        p = end - 1;
        r = (*p)(a);
        if (r != 0) {
            return r;
        }
        end = p;
        more = (end != data_0213e0a0.start);
    }
    return 0;
}
