#include "ffc/types.h"

extern int func_ov000_02168768(void *);
extern void *func_ov000_0216876c(void *, int);
extern void *data_ov001_021952f0;

void *func_ov001_02182950(uint32_t a) {
    int i;
    void *p;
    if (data_ov001_021952f0 == 0) {
        return 0;
    }
    i = 0;
    if (func_ov000_02168768(data_ov001_021952f0) > 0) {
        do {
            p = func_ov000_0216876c(data_ov001_021952f0, i);
            if (((uint32_t *)p)[1] == a) {
                return p;
            }
            i++;
        } while (i < func_ov000_02168768(data_ov001_021952f0));
    }
    return 0;
}
