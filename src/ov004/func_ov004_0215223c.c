/* cflags: -lang c++ */
extern "C" void func_02056844(void *p);

/* x - x survives unfolded only through an inlined helper taking a class with a dtor by const ref. */
struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

struct Buf {
    void *data;
    int size;
};

extern "C" Buf *func_ov004_0215223c(Buf *p) {
    if (p->data) {
        int n = p->size;
        p->size = diff(n, n);
        func_02056844(p->data);
    }
    return p;
}
