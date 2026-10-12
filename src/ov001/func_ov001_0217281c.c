#include "ffc/types.h"

extern int32_t func_02092a04(char *p, const char *s, int32_t n);
extern int32_t func_02092a84(char *p, const char *s);
extern int32_t func_ov000_021658c0(char *p);
extern const char data_ov001_0218f400[];
extern const char data_ov001_0218f3f4[];
extern const char data_ov001_0218f408[];

int32_t func_ov001_0217281c(char *p) {
    char *s;
    int32_t off;
    int8_t saved;
    int32_t ret;

    if (func_02092a04(p, data_ov001_0218f400, 7) == 0) {
        s = p + 7;
    } else {
        if (func_02092a04(p, data_ov001_0218f3f4, 8) == 0) {
            s = p + 8;
        } else {
            return 0;
        }
    }

    off = func_02092a84(s, data_ov001_0218f408);
    saved = s[off];
    s[off] = 0;
    ret = func_ov000_021658c0(s);
    s[off] = saved;
    return ret;
}
