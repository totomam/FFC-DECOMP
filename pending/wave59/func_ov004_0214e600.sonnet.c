/* cflags: -lang c++ */
struct P { int a, b; P(int x, int y) : a(x), b(y) {} };
extern "C" P func_ov004_0214e600(P *x, P *y);
extern "C" P func_ov004_0214e600(P *x, P *y) {
    int t = x->b + y->b;
    return P(x->a + y->a, t);
}
