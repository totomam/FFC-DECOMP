#include "ffc/types.h"

typedef struct { uint8_t pad[0x128]; int cnt; } S;
extern int func_0207a09c(S *p);

int func_0207bde4(S *p) {
    if (p->cnt == 0 && func_0207a09c(p) == 0) return 0;
    p->cnt++;
    return 1;
}
