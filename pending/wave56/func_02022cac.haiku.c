#include "ffc/types.h"

typedef struct { int32_t x, y, z; } Vec3;
typedef struct { uint16_t a; uint16_t _p0; uint16_t b; uint16_t _p1; uint16_t c; } Raw3;

extern int16_t data_020a1bd0[];
extern int32_t func_020817c8(int32_t first, int32_t second);
extern void func_02081418(Vec3 *a, Vec3 *b);
extern void func_020801b0(Vec3 *o, Vec3 *a, int32_t b, int32_t c);
extern void func_02080498(Vec3 *o, Vec3 *a, Vec3 *b);

void func_02022cac(Vec3 *out, Vec3 *out2, Vec3 *in, int32_t s, Raw3 p) {
    int32_t loc[9];
    Vec3 diff;
    int32_t n = 12;
    int32_t xi = (p.a >> 4) * 2;
    int32_t yi = (p.b >> 4) * 2;
    int32_t zi = (p.c >> 4) * 2;
    int32_t X0 = data_020a1bd0[xi];
    int32_t X1 = data_020a1bd0[xi + 1];
    int32_t Y0 = data_020a1bd0[yi];
    int32_t Y1 = data_020a1bd0[yi + 1];
    int32_t Z0 = data_020a1bd0[zi];
    int32_t Z1 = data_020a1bd0[zi + 1];
    int32_t M;

    if (s > 0x7ffff) {
        s >>= 4;
        n = 8;
    }
    M = (s * X1) >> 12;
    out->x = in->x + ((M * Y0) >> n);
    out->y = in->y + ((X0 * s) >> n);
    out->z = in->z + ((M * Y1) >> n);

    out2->x = -func_020817c8(X0, Y0);
    out2->y = X1;
    out2->z = -func_020817c8(X0, Y1);

    diff.x = in->x - out->x;
    diff.y = in->y - out->y;
    diff.z = in->z - out->z;
    func_02081418(&diff, &diff);
    func_020801b0((Vec3*)loc, &diff, Z0, Z1);
    func_02080498(out2, (Vec3*)loc, out2);
}
