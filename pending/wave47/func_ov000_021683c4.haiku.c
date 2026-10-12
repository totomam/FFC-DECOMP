#include "ffc/types.h"

typedef struct Item {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
} Item;

typedef struct List {
    void *base;
    int f4;
    int start;
    int cur;
} List;

extern int func_ov000_02168768(void *base);
extern Item *func_ov000_0216876c(void *base, int idx);
extern int func_ov000_021684f8(void *a, Item *item);
extern void func_0208bf10(int v, int *fmt, int *a, int *b, int *c, int *d, int *e, int *f);
extern int func_ov000_02165a1c(int *p);
extern int data_ov000_0216bbf0;

int func_ov000_021683c4(List *s, void *a, int *out)
{
    int loc[9];
    int i;
    Item *item;

    if (s->cur == -1) {
        s->cur = s->start;
    }
    i = s->cur + 1;
    while (i < func_ov000_02168768(s->base)) {
        item = func_ov000_0216876c(s->base, i);
        if (item->f14 == s->start) {
            if (func_ov000_021684f8(a, item)) {
                s->cur = i;
                if (item->f8 == 0) {
                    return 0;
                }
                func_0208bf10(item->f8, &data_ov000_0216bbf0, &loc[5], &loc[4], &loc[3], &loc[2], &loc[1], &loc[0]);
                loc[5] = loc[5] - 0x76c;
                loc[4] = loc[4] - 1;
                loc[8] = -1;
                *out = func_ov000_02165a1c(loc);
                return 1;
            }
        }
        if (item->f14 < s->start) {
            return 0;
        }
        i++;
    }
    return 0;
}
