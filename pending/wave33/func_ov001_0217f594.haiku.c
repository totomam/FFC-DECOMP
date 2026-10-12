#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x14];
    void *tbl;
} Ctx;

extern Ctx data_ov001_02194c38;
extern int32_t func_ov000_02168768(void *t);
extern int32_t *func_ov000_0216876c(void *t, int32_t i);

int32_t func_ov001_0217f594(int32_t a, int32_t b, int32_t c) {
    int32_t i;
    if (data_ov001_02194c38.tbl == 0) {
        return -1;
    }
    for (i = 0; i < func_ov000_02168768(data_ov001_02194c38.tbl); i++) {
        int32_t *e = func_ov000_0216876c(data_ov001_02194c38.tbl, i);
        if (e[0] == a && e[1] == b && e[2] == c) {
            return i;
        }
    }
    return -1;
}
