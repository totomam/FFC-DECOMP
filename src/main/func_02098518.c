#include "ffc/types.h"

extern int data_020b31c8[];
extern int data_020b31d4;
extern int func_0208f758(void *s);
extern int func_0208f800(int c, void *s);

typedef struct Stream {
    char pad[0x24];
    uint8_t *p;
    int cnt;
} Stream;

typedef struct Ctx {
    char pad[0x1c];
    Stream *s;
    int f20;
} Ctx;

int func_02098518(Ctx *this, int flag)
{
    uint8_t buf[12];
    int n;
    int i;
    int c;
    int first;

    int *pn;
    if (data_020b31c8[3] < this->f20) {
        pn = &this->f20;
    } else {
        pn = &data_020b31d4;
    }
    n = *pn;

    for (i = 0; i < n; i++) {
        Stream *s = this->s;
        if (s->cnt-- != 0) {
            c = *this->s->p++;
        } else {
            c = func_0208f758(this->s);
        }
        if (c == -1) {
            return -1;
        }
        buf[i] = (uint8_t)c;
    }

    first = buf[0];

    if (flag == 0) {
        while (n > 0) {
            n--;
            if (func_0208f800(buf[n], this->s) == -1) {
                return -1;
            }
        }
    }

    return first;
}
