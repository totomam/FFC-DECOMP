/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/pt_sum_table_37c4.c, externs renamed. */
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

/* Matched: 021B37C4 (68B) -- table pair lookup, virtual slot 4 sret point, func_ov002_021ad534 into laundered-ptr local,
   HI-first sum locals then store (playbook whole-struct-copy idiom). */
typedef struct { s32 x; s32 y; } Pt;
typedef struct { u32 a; u32 b; } Pair;
typedef void (*FnP)(Pt*, void*);
extern Pair data_ov002_021d40a8[];
extern void* func_ov002_02198dec(void* b);
extern void* func_ov002_0219db78(void* a, u32 e);
extern void func_ov002_021ad534(Pt* r, u32 e, u32 v);
void func_ov002_021b37c4(Pt* out, void* b, u32 idx) {
    Pt* rp;
    Pt r;
    Pt pt;
    s32 vy;
    s32 vx;
    u32 e;
    void* t;
    e = data_ov002_021d40a8[idx].b;
    t = func_ov002_0219db78(func_ov002_02198dec(b), e);
    (*(FnP**)t)[4](&pt, t);
    rp = (Pt*)(void*)&r;
    func_ov002_021ad534(rp, e, data_ov002_021d40a8[idx].a);
    vy = rp->y + pt.y;
    vx = rp->x + pt.x;
    out->x = vx;
    out->y = vy;
}
