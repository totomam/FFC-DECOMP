/* cflags: -lang c++ */
#include "ffc/types.h"

extern uint8_t data_020ad8f4[];
extern uint8_t data_020ad8d4[];
extern "C" void func_02091a24(void *msg);
extern "C" void func_0208f42c(void);
extern "C" void *func_0205681c(uint32_t size);
extern "C" void func_02052be0(void);
extern "C" void func_02052d10(uint32_t a, uint32_t b);
extern "C" void func_020258b4(void *node, void *head);
extern "C" void func_02056844(void *p);

inline void *operator new(unsigned long, void *p) { return p; }
typedef struct Tail7 {
    uint32_t w[7];
} Tail7;
struct Data {
    uint32_t a;
    uint32_t b;
    uint8_t c;
    uint32_t d;
    uint32_t e[7];
    Data(const Data &o) {
        a = o.a; b = o.b; c = o.c;
        if (a != 0) {
            func_02052be0();
            if (c != 0) func_02052d10(a, b);
        }
        d = o.d;
        *(Tail7 *)e = *(Tail7 *)o.e;
    }
};


typedef struct Node {
    struct Node *next;
    struct Node *prev;
    void *link;
    Data data;
} Node;

typedef struct List {
    uint32_t count;
    Node *head;
    Node *tail0;
    Node *tail;
} List;

struct Guard { uint32_t pad[3]; void *l; Node *n; ~Guard(){ if(n) func_02056844(n);} };
typedef struct Pair {
    Node *first;
    Node *second;
} Pair;


extern "C" Node *func_0202a750(List *p, Pair *r7, uint32_t f2, uint32_t f3, Data *src)
{
    Node *n;
    Guard g;
    uint32_t sel;
    uint32_t tsel;



    if (p->count == (uint32_t)-1) {
        func_02091a24(data_020ad8f4);
        func_0208f42c();
    }

    n = (Node *)func_0205681c(0x38);
    if (n == 0) {
        func_02091a24(data_020ad8d4);
        func_0208f42c();
    }

    g.l = &p->head; g.n = n;
    new (&n->data) Data(*src);
    n = g.n;
    n->prev = 0;
    g.n = 0;
    n->next = 0;
    new (&n->link) Pair *(r7);

    if (f2 != 0) {
        r7->first = n;
    } else {
        r7->second = n;
    }

    p->count = p->count + 1;
    func_020258b4(n, p->head);

    if (f3 != 0) {
        p->tail = n;
    }

        return n;
}
