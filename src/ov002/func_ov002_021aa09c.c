/* cflags:  */
/* From arcnid/ffc-decomp src/battle/bitmask_push_entries_021aa09c.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Matched: 021AA09C  size 0x94 (146 compiled + 2B pad)  -O4,p
   Multi-function unit:
     021AA09C (0x80): for i = 1..12 (do-while, i==1 skipped): if bit i of
       *(u32*)(s+4) set (BL 021AA11C), build 12-byte entry via
       func_ov002_021c8e10(&tmp, i, (signed char)s[i+8], *(u32*)(s+i*4+0x18))
       [BL 021C8E10], then inline vector<T12>::push_back on v
       (count@+4, cap@+8, data@+0): fast path = memberwise 3-word copy
       + count++; grow path = func_ov002_021ad234(v, &tmp, Al{0}) [BL 021AD234].
     021AA11C (0x12+2B pad): func_ov002_021aa11c(s, i) = (*(u32*)(s+4) >> i) & 1 as
       0/1 via ternary.
   KEYS: T* tp = &tmp alias-local pins &tmp in r7, which forces the
   byte-struct staging pointer (sp-4) to be hoisted+SPILLED to [sp+0]
   (drain_ring keeps it in r6); Al zero is in-block (movs-first, plain
   member store). The helper must be defined under a DIFFERENT symbol
   name with the call made through an extern declaration: defining the
   called helper in the same TU perturbs its register allocation
   (result lands r3 + final mov, 15-byte diff); extern call = BL reloc
   (masked) + standalone-codegen helper body = byte-exact. */
typedef struct { u8 b; } Al;
typedef struct { u32 a, b, c; } T;

extern u32 func_ov002_021aa11c(u8* s, u32 i);
extern void func_ov002_021c8e10(T* out, u32 i, s32 sb, u32 w);
extern void func_ov002_021ad234(void* v, T* val, Al a);

void func_ov002_021aa09c(u8* s, u8* v)
{
    s32 i;
    T tmp;
    T* tp;
    i = 1;
    tp = &tmp;
    do {
        if (i != 1) {
            if (func_ov002_021aa11c(s, i) != 0) {
                u32 cnt;
                u32 cap;
                T* d;
                Al a;
                func_ov002_021c8e10(tp, i, *(signed char*)(s + i + 8), *(u32*)(s + i * 4 + 0x18));
                cnt = *(u32*)(v + 4);
                cap = *(u32*)(v + 8);
                if (cnt < cap) {
                    d = (T*)(*(u32*)v + cnt * 12);
                    if (d != 0) {
                        d->a = tp->a;
                        d->b = tp->b;
                        d->c = tp->c;
                    }
                    *(u32*)(v + 4) = *(u32*)(v + 4) + 1;
                } else {
                    a.b = 0;
                    func_ov002_021ad234(v, tp, a);
                }
            }
        }
        i++;
    } while (i < 13);
}

static u32 BitTest_local(u8* s, u32 i)
{
    return (*(u32*)(s + 4) & (1 << i)) ? 1 : 0;
}
