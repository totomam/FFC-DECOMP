/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_close_file_10.c, externs renamed. */
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


/* 021C5A78 (size 0x2A) — dtor of member at s+0x10: if handle(+4) [cond D1(+4,+8)], D2(+4); D3(t); return s */
extern void func_02052d3c(void* a, void* b);
extern void func_02052c04(void* a);
extern void func_02053290(void* a);

void* func_ov002_021c5a78(u8* s) {
    u8* t = s + 0x10;
    if (*(u32*)(t + 4) != 0) {
        if (*(u8*)(t + 0xC) != 0) {
            func_02052d3c(*(void**)(t + 4), *(void**)(t + 8));
        }
        func_02052c04(*(void**)(t + 4));
    }
    func_02053290(t);
    return s;
}
