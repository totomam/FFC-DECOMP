#include "ffc/types.h"

typedef struct { int32_t f0; void *f4; } Inner;
typedef struct { int32_t f0; int32_t f4; int32_t f8; Inner *fc; } G;

extern G data_ov000_0217004c;
extern int32_t func_ov000_0215aab4(Inner *p);
extern int32_t func_ov000_0215a638(void);
extern int32_t func_ov000_021553c4(int32_t x, int32_t a);
extern int32_t func_ov001_02175e40(void *p, int32_t n, int32_t *out);
extern int32_t func_ov001_02175d6c(void *p, int32_t v, int32_t b);

int32_t func_ov000_02159ec8(int32_t a, int32_t b) {
    int32_t local;

    if (data_ov000_0217004c.fc != 0) {
        int32_t res = 0;
        local = 0;
        if (func_ov000_0215aab4(data_ov000_0217004c.fc) != 0) {
            a = func_ov000_021553c4(func_ov000_0215a638(), a);
            if (a <= 0 || func_ov001_02175e40(data_ov000_0217004c.fc->f4, a, &local) == 0) {
                if (a <= 0 || local == -1) {
                    res = 0;
                } else {
                    res = 0;
                    if (func_ov001_02175d6c(data_ov000_0217004c.fc->f4, local, b) == 0) res = 1;
                }
            }
            return res;
        }
    }
    return 0;
}
