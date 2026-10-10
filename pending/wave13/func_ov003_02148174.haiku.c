/* cflags: -lang c++ */
#include "ffc/types.h"

struct Vec2 {
    int32_t x;
    int32_t y;
    Vec2 &operator-=(const Vec2 &o) {
        x -= o.x;
        y -= o.y;
        return *this;
    }
};

extern "C" void func_ov003_02148174(Vec2 *a, Vec2 *b) {
    Vec2 t = *b;
    *a -= t;
}
