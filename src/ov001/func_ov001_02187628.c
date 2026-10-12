#include "ffc/types.h"

extern int func_ov000_02168768(void *p);
extern int *func_ov000_0216876c(void *p, int idx);
extern int func_ov001_02186e30(uint8_t *data, int len);

struct Ctx {
    int pad[2];
    void *p8;
};

int func_ov001_02187628(struct Ctx *c, uint8_t *d, int n)
{
    int count = func_ov000_02168768(c->p8);
    int i;
    for (i = 0; i < count; i++) {
        int type = func_ov000_0216876c(c->p8, i)[1];
        switch (type) {
        case 1:
            d += 1;
            n -= 1;
            break;
        case 2:
            d += 2;
            n -= 2;
            break;
        case 0:
            if (n < 1) {
                return 0;
            }
            {
                uint8_t b = *d;
                d++;
                n--;
                if (b == 0xff) {
                    int r = func_ov001_02186e30(d, n);
                    if (r == -1) {
                        return 0;
                    }
                    d += r;
                    n -= r;
                }
            }
            break;
        default:
            return 0;
        }
        if (n < 0) {
            return 0;
        }
    }
    return 1;
}
