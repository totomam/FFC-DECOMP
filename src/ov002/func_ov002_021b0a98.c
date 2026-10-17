/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/seq_release_0a98.c, externs renamed. */
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

/* Matched: 021B0A98 (110B) -- sequential releases at 0x13C/0x134, vt[11] at 0x128, then 3x func_02056bc0(+0x19C,...) if +0x1A0. */
typedef void (*Fn)(void*);
extern void func_ov002_021bd2a4(void* m);
extern void func_ov002_021ba184(void* m);
extern void* func_020655dc(void* m, u32 a, u32 b);
extern void* func_020655b8(void* m);
extern void* func_02062a54(void* m);
extern void func_02056bc0(void* a, void* b);
void func_ov002_021b0a98(void* s) {
    void* m;
    func_ov002_021bd2a4(*(void**)((u8*)s + 0x13C));
    func_ov002_021ba184(*(void**)((u8*)s + 0x134));
    m = *(void**)((u8*)s + 0x128);
    (*(Fn**)m)[11](m);
    m = *(void**)((u8*)s + 0x1A0);
    if (m != 0) {
        func_02056bc0(*(void**)((u8*)s + 0x19C), func_020655dc(m, 2, 0));
        func_02056bc0(*(void**)((u8*)s + 0x19C), func_020655b8(*(void**)((u8*)s + 0x1A0)));
        func_02056bc0(*(void**)((u8*)s + 0x19C), func_02062a54(*(void**)((u8*)s + 0x1A0)));
    }
}
