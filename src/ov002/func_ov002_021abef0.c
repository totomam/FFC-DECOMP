/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/build_avg_compare_msgs_021abef0.c, externs renamed. */
/* 021ABEF0 — build avg-compare winner/loser battle messages (0x198 bytes)
   MATCHED with mwccarm dsi/1.1 -O4 (plain, NOT -O4,p)
   Compile: python3 tools/match_func.py <this> 021ABEF0 198

   Key levers that closed the near-miss (46B regalloc diff -> MATCH):
   - SPLIT-VARIABLE: `avg = sum / 2;` as a SEPARATE local (not sum reassigned)
     fixes the whole callee-saved permutation (s->r5, sum->r7, temp->r4).
   - Separate loop2 counter `j` declared AFTER i keeps both counters in r6
     and lets obj take r4.
   - varB = 0x427 as a BARE constant (mwcc derives it from the pooled 0x429
     via subs #2); an extern-symbol form adds a 4th pool word (+4B).
   - flag polarity (cmp/BNE with 0-fallthrough): ONLY reachable via the
     pointer-ternary-cast idiom (same blocker documented in
     build_event_queue_pairctor_021a95f8.c for the same callee pair
     0219FFE8 -> 021C9204):
       flag = (u32)(func_ov002_0219ffe8(cur) == 0 ? (void*)0 : (void*)1);
     Int ternaries/if-else/goto all canonicalize to BEQ with 1-fallthrough;
     a switch gets BNE but wrecks the stack-slot ranks (flag/cur swap).
   Externs: func_ov002_021a1ac4=021A1AC4 func_ov002_021a16fc=021A16FC func_0203b688=0203B688
   func_02056bc0=02056BC0 func_ov002_021a16d4=021A16D4 func_ov002_02196414=02196414 func_0203b708=0203B708
   func_ov002_021a1814=021A1814 func_ov002_0219ffe8=0219FFE8 func_02021610=02021610 func_ov002_021c9204=021C9204
   func_02055a2c=02055A2C func_ov002_021a13d0=021A13D0 data_0209df54=0209DF54 data_0209df20=0209DF20 */
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


extern void* func_ov002_021a1ac4(u32 x);
extern s32   func_ov002_021a16fc(u32 x);
extern void* func_0203b688(void);
extern void  func_02056bc0(void* dst, u32 v);
extern void* func_ov002_021a16d4(u32 x);
extern void* func_ov002_02196414(u32 x);
extern void* func_0203b708(u32 v);
extern void* func_ov002_021a1814(u32 cur, s32 avg);
extern u32   func_ov002_0219ffe8(u32 cur);
extern u32   func_02021610(u32 id, u32 b);
extern void* func_ov002_021c9204(u32 a, u32 b, u32 c);
extern void* func_02055a2c(u32 a, void* b);
extern void* func_ov002_021a13d0(u32 cur, u32 b);
extern u32 data_0209df54;
extern u32 data_0209df20;

void* func_ov002_021abef0(u8* s)
{
    s32 sum;
    s32 avg;
    s32 i;
    s32 j;
    void* obj;
    s32 arr[2];
    u32 cur;
    u32 varA;
    u32 flag;
    s32 val;
    u32 varB;
    void* p;
    u32 x;

    sum = 0;
    i = 0;
    do {
        if (i != 0) {
            x = (u32)func_ov002_021a1ac4(*(u32*)(s + 0xBC));
        } else {
            x = *(u32*)(s + 0xBC);
        }
        arr[i] = func_ov002_021a16fc(x);
        sum += arr[i];
        i++;
    } while (i < 2);

    avg = sum / 2;
    obj = func_0203b688();

    if (arr[0] == avg && arr[1] == avg) {
        s = s + 0xBC;
        p = func_ov002_02196414((u32)func_ov002_021a16d4(*(u32*)s));
        if (*(u32*)((u8*)p + 0x308) == 1) {
            return obj;
        }
        func_02056bc0(obj, (u32)func_0203b708(data_0209df54));
        return obj;
    }

    varA = data_0209df20;
    varB = 0x427;

    j = 0;
    do {
        if (j != 0) {
            cur = (u32)func_ov002_021a1ac4(*(u32*)(s + 0xBC));
        } else {
            cur = *(u32*)(s + 0xBC);
        }

        func_02056bc0(obj, (u32)func_ov002_021a1814(cur, avg));

        val = arr[j];
        if (avg != val) {
            flag = (u32)(func_ov002_0219ffe8(cur) == 0 ? (void*)0 : (void*)1);
            if (avg > val) {
                p = func_ov002_02196414((u32)func_ov002_021a16d4(*(u32*)(s + 0xBC)));
                if (*(u32*)((u8*)p + 0x308) != 1) {
                    func_02056bc0(obj, func_02021610(0x429, 0));
                }
                p = func_ov002_021c9204(0, flag, 0);
            } else {
                p = func_ov002_02196414((u32)func_ov002_021a16d4(*(u32*)(s + 0xBC)));
                if (*(u32*)((u8*)p + 0x308) != 1) {
                    func_02056bc0(obj, func_02021610(varB, 0));
                }
                p = func_ov002_021c9204(0, flag, 1);
            }
            func_02056bc0(obj, (u32)func_02055a2c(*(u32*)(s + 0xB8), p));
        }

        func_02056bc0(obj, (u32)func_ov002_021a13d0(cur, 0));

        if (j == 0) {
            p = func_ov002_02196414((u32)func_ov002_021a16d4(*(u32*)(s + 0xBC)));
            if (*(u32*)((u8*)p + 0x308) != 1) {
                func_02056bc0(obj, (u32)func_0203b708(varA));
            }
        }

        j++;
    } while (j < 2);

    return obj;
}
