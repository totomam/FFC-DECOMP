#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern int func_ov000_02148a8c(void *p, int *out);
extern void *func_ov000_02145764(void *p);
extern int func_ov000_02145a4c(void);
extern int func_ov000_02145b74(void *p);
extern int func_ov000_02148ae4(void *p, void *q, uint16_t h);
extern uint64_t data_ov000_0216bc60[];
extern uint64_t data_ov000_0216bce0[];
extern void *data_ov000_0216bcd0[];

int func_ov000_02148b24(void *param)
{
    struct { uint8_t flag[2]; uint16_t hw[2]; } L;

    int i;
    int j;
    int res;

    res = 0;
    data_ov000_0216bc60[15] = func_0209a71c(data_ov000_0216bce0[0], data_ov000_0216bc60[15]) + data_ov000_0216bce0[1];
    L.hw[0] = (uint16_t)(data_ov000_0216bc60[15] >> 48);

    data_ov000_0216bc60[15] = func_0209a71c(data_ov000_0216bce0[0], data_ov000_0216bc60[15]) + data_ov000_0216bce0[1];
    L.hw[1] = (uint16_t)(data_ov000_0216bc60[15] >> 48);

    if (func_ov000_02148a8c(param, &res) != 0) {
        return res;
    }

    L.flag[0] = 1;
    L.flag[1] = 1;
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 2; i++) {
            if (L.flag[i]) {
                void *t = data_ov000_0216bcd0[i];
                int ok = 0;
                if (t) {
                    void *q = func_ov000_02145764(t);
                    if (q && (func_ov000_02145a4c() || func_ov000_02145b74(q))) {
                        ok = 1;
                    }
                }
                if (!ok) {
                    L.flag[i] = 0;
                    continue;
                }
                res = func_ov000_02148ae4(param, data_ov000_0216bcd0[i], L.hw[i]);
                if (res == 0) {
                    continue;
                }
                if (res == -1) {
                    L.flag[i] = 0;
                    continue;
                }
                return res;
            }
        }
    }
    return (res == -1) ? 0 : res;
}
