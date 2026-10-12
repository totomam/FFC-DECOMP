#include "ffc/types.h"

extern int func_ov000_021673fc(void *p, int x, int n);
extern int func_ov000_02167474(void *p, void *q, int n, int *out, int m);

int func_ov000_02167390(void *a, void *b, int n) {
    int i = 0;
    func_ov000_021673fc(a, 0, n);
    while (i < n) {
        if (func_ov000_02167474(a, b, n, &i, -1) == 0) {
            return 0;
        }
    }
    return 1;
}
