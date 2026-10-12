#include "ffc/types.h"

typedef struct PathState {
    uint32_t head;
    uint32_t cur;
    uint16_t idx;
    uint16_t pad;
    uint32_t flag;
} PathState;

extern PathState data_021410cc;
extern char data_021411dc[];
extern char data_020b292c[];

extern int func_0207e29c(char *dst, int size, const void *src, int n, uint32_t *flag);
extern uint32_t func_0207e1cc(const char *path, int len);
extern int func_0207e848(char *dst, int out);
extern void func_0207e864(void);

uint32_t func_0207e2d4(uint8_t *path, uint32_t *idx, char *dst)
{
    int out = 0;
    uint32_t flag = 0;
    uint32_t ret = 0;
    int len;
    int c;

    if (data_021410cc.cur == 0) {
        data_021410cc.cur = data_021410cc.head;
        data_021410cc.idx = 0;
        data_021410cc.flag = 0;
        data_021410cc.pad = 0;
        data_021411dc[0] = 0;
    }

    if (*path == '/' || *path == '\\') {
        path++;
        ret = data_021410cc.cur;
        if (idx) *idx = 0;
    } else {
        len = 0;
        for (;;) {
            c = path[len];
            if (c == 0 || c == '/' || c == '\\') {
                ret = data_021410cc.cur;
                if (idx) *idx = data_021410cc.idx;
                if (dst && data_021410cc.idx == 0 && data_021411dc[0]) {
                    out += func_0207e29c(dst, 0x104, data_021411dc, 0x104, &flag);
                    out += func_0207e29c(dst + out, 0x104 - out, data_020b292c, 1, &flag);
                }
                break;
            } else if (c == ':') {
                ret = func_0207e1cc(path, len);
                path += len + 1;
                if (*path == '/' || *path == '\\') path++;
                if (idx) *idx = 0;
                break;
            } else {
                int dbl = 0;
                if ((unsigned)((c ^ 0x20) - 0xa1) < 0x3c) dbl = 1;
                len = len + 1 + dbl;
            }
        }
    }

tail:
    if (dst) {
        len = 0;
        while (!flag) {
            c = (int8_t)path[len];
            if (c != 0 && !(((uint8_t)c) == '/' || ((uint8_t)c) == '\\')) {
                int dbl = 0;
                uint8_t u = (uint8_t)c;
                if ((unsigned)((u ^ 0x20) - 0xa1) < 0x3c) {
                    int t = (int8_t)path[len + 1];
                    if (t != 0x7f && (uint8_t)(t - 0x40) <= 0xbc) dbl = 1;
                }
                len += dbl ? 2 : 1;
                continue;
            }
            if (len == 0) {
            } else if (len == 1 && path[0] == '.') {
            } else if (len == 2 && path[0] == '.' && path[1] == '.') {
                if (out > 0) out--;
                out = func_0207e848(dst, out) + 1;
            } else {
                out += func_0207e29c(dst + out, 0x104 - out, path, len, &flag);
                if (c != 0) out += func_0207e29c(dst + out, 0x104 - out, data_020b292c, 1, &flag);
            }
            if (c == 0) break;
            path += len + 1;
            len = 0;
        }
        dst[out] = 0;
        func_0207e864();
    }
    if (flag) ret = 0;
    return ret;
}
