#include "ffc/types.h"

typedef struct { uint8_t a[4]; } S;
extern int func_02087460(void *p);
extern int func_021d86fc(void *p, int v);
extern int func_021d872c(void *p, int v, void *buf);
extern S data_ov000_02169640;

int func_ov000_02151a9c(void *p)
{
    S buf;

    if (func_02087460(p) != 0) {
        if (func_021d86fc(p, 0x30) == 0) {
            buf = data_ov000_02169640;
            if (func_021d872c(p, 0xdd, &buf) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
