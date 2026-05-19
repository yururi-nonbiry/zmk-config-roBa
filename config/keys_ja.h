#ifndef KEYS_JA_H
#define KEYS_JA_H

#include <dt-bindings/zmk/keys.h>

// =============================================================================
// Japanese JIS Layout Aliases for ZMK
// =============================================================================
// Use these aliases in your ZMK keymap when your host Operating System's 
// keyboard layout is set to Japanese (JIS).
// =============================================================================

// --- Symbol Keys ---
#define JP_MINUS MINUS             // - (ほ)
#define JP_EQUAL LS(MINUS)         // = (へ)
#define JP_CARET EQUAL             // ^ (へ)
#define JP_TILDE LS(EQUAL)         // ~ (へ)
#define JP_AT LEFT_BRACKET         // @ (＠)
#define JP_GRAVE LS(LEFT_BRACKET)  // ` (｀)
#define JP_LEFT_BRACKET RIGHT_BRACKET // [ (［)
#define JP_LEFT_BRACE LS(RIGHT_BRACKET) // { (｛)
#define JP_RIGHT_BRACKET BACKSLASH // ] (］)
#define JP_RIGHT_BRACE LS(BACKSLASH) // } (｝)
#define JP_SEMICOLON SEMICOLON     // ; (れ)
#define JP_PLUS LS(SEMICOLON)      // + (れ)
#define JP_COLON SINGLE_QUOTE      // : (け)
#define JP_ASTERISK LS(SINGLE_QUOTE) // * (け)
#define JP_SLASH SLASH             // / (め)
#define JP_QUESTION LS(SLASH)      // ? (め)
#define JP_BACKSLASH INT_RO        // \ (ろ) - Windowsで「￥」や「＼」として解釈されます
#define JP_UNDERSCORE LS(INT_RO)   // _ (ろ)
#define JP_YEN INT_YEN             // ¥ (ー)
#define JP_PIPE LS(INT_YEN)        // | (ー)

// --- Number Row Shifted Symbols ---
#define JP_EXCLAMATION LS(NUMBER_1)       // !
#define JP_DOUBLE_QUOTES LS(NUMBER_2)     // "
#define JP_HASH LS(NUMBER_3)              // #
#define JP_DOLLAR LS(NUMBER_4)            // $
#define JP_PERCENT LS(NUMBER_5)           // %
#define JP_AMPERSAND LS(NUMBER_6)         // &
#define JP_SINGLE_QUOTE LS(NUMBER_7)      // '
#define JP_LEFT_PARENTHESIS LS(NUMBER_8)  // (
#define JP_RIGHT_PARENTHESIS LS(NUMBER_9) // )

// --- Japanese-specific Input Keys ---
#define JP_MHEN INT_MUHENKAN               // 無変換 (Muhenkan)
#define JP_HENK INT_HENKAN                 // 変換 (Henkan)
#define JP_KANA INT_KANA                   // ひらがな・カタカナ・ローマ字

#endif // KEYS_JA_H
