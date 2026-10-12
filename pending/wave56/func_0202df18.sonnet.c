#include "ffc/types.h"
typedef struct { uint8_t pad[0x40]; uint32_t a, b, c; } Obj;
extern float func_0209af28(float x, float y);
extern float func_0209b108(float x, float y);
extern float func_0209b338(float x, float y);
extern uint32_t func_0209ab5c(float x);
void func_0202df18(Obj *p, float x, float y, float z)
{
    float f;
    if (x > 0.0f) f = func_0209b108(0.5f, func_0209af28(4096.0f, x));
    else f = func_0209b338(func_0209af28(4096.0f, x), 0.5f);
    p->a = func_0209ab5c(f);
    if (y > 0.0f) f = func_0209b108(0.5f, func_0209af28(4096.0f, y));
    else f = func_0209b338(func_0209af28(4096.0f, y), 0.5f);
    p->b = func_0209ab5c(f);
    if (z > 0.0f) f = func_0209b108(0.5f, func_0209af28(4096.0f, z));
    else f = func_0209b338(func_0209af28(4096.0f, z), 0.5f);
    p->c = func_0209ab5c(f);
}
