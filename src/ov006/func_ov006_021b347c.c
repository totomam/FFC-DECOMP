#include "ffc/types.h"

extern int func_ov006_021b2054(int x);
extern int func_ov006_021b2030(void);
extern char *data_ov006_021bc808;

int func_ov006_021b347c(int a) {
    int h = func_ov006_021b2054(a + 10);
    if (!h) {
        return 0;
    }
    int v = func_ov006_021b2030();
    char *p = data_ov006_021bc808 + (h - 1) * 4;
    *(int *)(p + 0xaa0) = v;
    return 1;
}
