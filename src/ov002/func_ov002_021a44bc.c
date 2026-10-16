/* cflags:  */
/* From arcnid/ffc-decomp src/battle/build_pair_events_021A44BC.c, externs renamed. */
/* Matched 021A44BC (size 0x9C, -O4,p).
   Builds a result list: creates record 0x100FE sized n1+n2 (counts of self +
   partner obj from func_ov002_021a1ac4), appends it, then for both objects appends a
   func_ov002_021ab244-transformed entry per item (sel = record+0x14 when record != 0).
   KEYS that made it match:
   - func_0203bd04 takes FOUR args here; the str to [sp] before it is i's init
     (i spills to sp[0] because there is NO outgoing-arg area in this function).
   - i = 0 must be written AFTER the func_0203bd04 call or its zero materializes
     in r0 instead of r1 (2-byte diff).
   - GetItem result into temp w BEFORE computing sel, so sel stays in scratch
     regs (r1/r2) instead of being promoted to a callee-saved reg.
   - j declared before o -> j=r4 / o=r5 (reverse order swaps them).
   - j = 0 hoisted above the count guard (orig emits movs r4,#0 before the call).
   - o reload must be a volatile element read or mwcc CSEs it with the guard's
     objs[i] load (local array, address never escapes, so calls don't kill CSE).
   - n1/n2 separate locals with n1+n2 inline at the call (single accumulator
     spills and grows the frame). */
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


extern void* func_0203b6fc(void* a);
extern s32 func_ov002_021a18bc(void* o);
extern void* func_ov002_021a1ac4(void* a);
extern void* func_0203bd04(u32 id, u32 b, u32 c, s32 d);
extern void func_02056bc0(void* r, void* v);
extern void* func_ov002_021a18c4(void* o, s32 j);
extern void* func_ov002_021ab244(void* w, u32 b, void* sel);

void* func_ov002_021a44bc(void* a) {
    void* p;
    void* objs[2];
    u8* t;
    void* r;
    s32 j;
    void* o;
    void* sel;
    void* w;
    u32 i;
    s32 n1;
    s32 n2;

    r = func_0203b6fc(a);
    n1 = func_ov002_021a18bc(a);
    n2 = func_ov002_021a18bc(func_ov002_021a1ac4(a));
    p = func_0203bd04(0x100FE, 0, 0, n1 + n2);
    i = 0;
    func_02056bc0(r, p);
    objs[0] = a;
    objs[1] = func_ov002_021a1ac4(a);
    t = (u8*)p + 0x14;
    for (; i < 2; i++) {
        j = 0;
        if (func_ov002_021a18bc(objs[i]) > 0) {
            o = *(void* volatile*)(objs + i);
            do {
                w = func_ov002_021a18c4(o, j);
                sel = p;
                if (sel != 0) {
                    sel = t;
                }
                func_02056bc0(r, func_ov002_021ab244(w, 0, sel));
                j++;
            } while (j < func_ov002_021a18bc(o));
        }
    }
    return r;
}
