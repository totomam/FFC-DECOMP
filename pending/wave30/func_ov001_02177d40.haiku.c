#include "ffc/types.h"

extern int func_ov001_0217b2e0(void *a, void **out);
extern int func_ov001_02177c4c(void *a, uint32_t b, int c, void *d, int e, int f);
extern int func_02092948(void *a, void *b);
extern int func_ov000_021653f4(void *a);
extern char data_ov001_02190544[];

int func_ov001_02177d40(void *a, uint32_t *b) {
    void *p;
    void *q;
    int r;
    r = func_ov001_0217b2e0(a, &p);
    if (r != 0) return r;
    if (p == 0) p = data_ov001_02190544;
    r = func_ov001_02177c4c(a, b[4], 0x69, p, 0xb00, 0);
    if (r != 0) return r;
    q = p;
    if (func_02092948(q, data_ov001_02190544) != 0) {
        func_ov000_021653f4(q);
    }
    return 0;
}
