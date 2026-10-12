#include "ffc/types.h"

extern int func_01fff09c(void *a, int x, int y);
extern void func_01fff0f4(uint32_t *out, void *a, int x, int y, uint32_t c1, uint32_t c2);
extern int func_01ffcd9c(int i, int v);
extern void func_01ffb318(int a, int x, int y, int z, int w);
extern void func_01ffe0c0(void *p);

extern uint32_t data_ov004_02159da0;
extern int32_t data_ov004_021583ec[];
extern int32_t data_ov004_021583f4[];
extern int32_t data_ov004_021583fc[];
extern int32_t data_ov004_02158404[];
extern int32_t data_ov004_0215840c[];
extern int32_t data_ov004_02158414[];
extern int32_t data_ov004_0215841c[];
extern int32_t data_ov004_02158424[];
extern int32_t data_ov004_0215842c[];
extern int32_t data_ov004_02158434[];
extern int32_t data_ov004_0215843c[];
extern int32_t data_ov004_02158444[];

void func_ov004_0214f388(uint32_t *p)
{
    int i, k, m, sel;
    int j;
    void *volatile a;
    void *volatile b;
    uint32_t out[3];
    int32_t *t;
    uint32_t *q;

    for (i = 0; i < 2; i++) {
        q = p + i;
        a = (void *)q[40];
        b = (void *)q[38];
        if (a == 0)
            continue;
        j = 0;
        if ((int)p[63] > 0) {
            do {
                k = 0;
                if ((int)p[64] > 0) {
                    do {
                        if (func_01fff09c(a, j, k) && !func_01fff09c(b, j, k)) {
                            for (m = 0; m < 6; m++) {
                                if (!(data_ov004_02159da0 & 1)) {
                                    data_ov004_021583ec[0] = 1;
                                    data_ov004_021583ec[1] = 0;
                                    data_ov004_021583f4[0] = 0;
                                    data_ov004_021583f4[1] = 1;
                                    data_ov004_021583fc[0] = -1;
                                    data_ov004_021583fc[1] = 1;
                                    data_ov004_02158404[0] = -1;
                                    data_ov004_02158404[1] = 0;
                                    data_ov004_0215840c[0] = -1;
                                    data_ov004_0215840c[1] = -1;
                                    data_ov004_02158414[0] = 0;
                                    data_ov004_02158414[1] = -1;
                                    data_ov004_0215841c[0] = 1;
                                    data_ov004_0215841c[1] = 0;
                                    data_ov004_02158424[0] = 1;
                                    data_ov004_02158424[1] = 1;
                                    data_ov004_0215842c[0] = 0;
                                    data_ov004_0215842c[1] = 1;
                                    data_ov004_02158434[0] = -1;
                                    data_ov004_02158434[1] = 0;
                                    data_ov004_0215843c[0] = 0;
                                    data_ov004_0215843c[1] = -1;
                                    data_ov004_02158444[0] = 1;
                                    data_ov004_02158444[1] = -1;
                                    data_ov004_02159da0 |= 1;
                                }
                                sel = k & 1;
                                t = data_ov004_021583ec + sel * 12;
                                if (func_01fff09c(a, j + t[m * 2], k + t[m * 2 + 1]))
                                    goto next;
                            }
                            func_01fff0f4(out, a, j, k, 0x1000, 0);
                            if (p[37] != 0 && (int)p[55] == 1) {
                                int r = func_01ffcd9c(i, 1);
                                int v = func_01fff09c(a, j, k);
                                func_01ffb318(r, j, k, v, 0);
                            }
                        }
next:
                        k++;
                    } while (k < (int)p[64]);
                }
                j++;
            } while (j < (int)p[63]);
        }
    }
    p += 36;
    func_01ffe0c0((void *)*p);
}
