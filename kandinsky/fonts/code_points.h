#ifndef KANDINSKY_FONTS_CODE_POINTS_H
#define KANDINSKY_FONTS_CODE_POINTS_H

// [0x30a].map{|i| "0x" + i.to_s(16) +", // " + [i].pack("U") + " // " + Unicode::Name.of([i].pack("U"))}.join("|")
#include <stdint.h>


/* This array lists the code points that are rasterized by rasterizer.c. We put
 * most characters from the LATIN charset, and some mathematical characters. */

uint32_t SimpleCodePoints[] = {
  0x20, //   // SPACE
  0x21, // ! // EXCLAMATION MARK
  0x22, // " // QUOTATION MARK
  0x23, // # // NUMBER SIGN
  0x24, // $ // DOLLAR SIGN
  0x25, // % // PERCENT SIGN
  0x26, // & // AMPERSAND
  0x27, // ' // APOSTROPHE
  0x28, // ( // LEFT PARENTHESIS
  0x29, // ) // RIGHT PARENTHESIS
  0x2a, // * // ASTERISK
  0x2b, // + // PLUS SIGN
  0x2c, // , // COMMA
  0x2d, // - // HYPHEN-MINUS
  0x2e, // . // FULL STOP
  0x2f, // / // SOLIDUS
  0x30, // 0 // DIGIT ZERO
  0x31, // 1 // DIGIT ONE
  0x32, // 2 // DIGIT TWO
  0x33, // 3 // DIGIT THREE
  0x34, // 4 // DIGIT FOUR
  0x35, // 5 // DIGIT FIVE
  0x36, // 6 // DIGIT SIX
  0x37, // 7 // DIGIT SEVEN
  0x38, // 8 // DIGIT EIGHT
  0x39, // 9 // DIGIT NINE
  0x3a, // : // COLON
  0x3b, // ; // SEMICOLON
  0x3c, // < // LESS-THAN SIGN
  0x3d, // = // EQUALS SIGN
  0x3e, // > // GREATER-THAN SIGN
  0x3f, // ? // QUESTION MARK
  0x40, // @ // COMMERCIAL AT
  0x41, // A // LATIN CAPITAL LETTER A
  0x42, // B // LATIN CAPITAL LETTER B
  0x43, // C // LATIN CAPITAL LETTER C
  0x44, // D // LATIN CAPITAL LETTER D
  0x45, // E // LATIN CAPITAL LETTER E
  0x46, // F // LATIN CAPITAL LETTER F
  0x47, // G // LATIN CAPITAL LETTER G
  0x48, // H // LATIN CAPITAL LETTER H
  0x49, // I // LATIN CAPITAL LETTER I
  0x4a, // J // LATIN CAPITAL LETTER J
  0x4b, // K // LATIN CAPITAL LETTER K
  0x4c, // L // LATIN CAPITAL LETTER L
  0x4d, // M // LATIN CAPITAL LETTER M
  0x4e, // N // LATIN CAPITAL LETTER N
  0x4f, // O // LATIN CAPITAL LETTER O
  0x50, // P // LATIN CAPITAL LETTER P
  0x51, // Q // LATIN CAPITAL LETTER Q
  0x52, // R // LATIN CAPITAL LETTER R
  0x53, // S // LATIN CAPITAL LETTER S
  0x54, // T // LATIN CAPITAL LETTER T
  0x55, // U // LATIN CAPITAL LETTER U
  0x56, // V // LATIN CAPITAL LETTER V
  0x57, // W // LATIN CAPITAL LETTER W
  0x58, // X // LATIN CAPITAL LETTER X
  0x59, // Y // LATIN CAPITAL LETTER Y
  0x5a, // Z // LATIN CAPITAL LETTER Z
  0x5b, // [ // LEFT SQUARE BRACKET
  0x5c, // \ // REVERSE SOLIDUS
  0x5d, // ] // RIGHT SQUARE BRACKET
  0x5e, // ^ // CIRCUMFLEX ACCENT
  0x5f, // _ // LOW LINE
  0x60, // ` // GRAVE ACCENT
  0x61, // a // LATIN SMALL LETTER A
  0x62, // b // LATIN SMALL LETTER B
  0x63, // c // LATIN SMALL LETTER C
  0x64, // d // LATIN SMALL LETTER D
  0x65, // e // LATIN SMALL LETTER E
  0x66, // f // LATIN SMALL LETTER F
  0x67, // g // LATIN SMALL LETTER G
  0x68, // h // LATIN SMALL LETTER H
  0x69, // i // LATIN SMALL LETTER I
  0x6a, // j // LATIN SMALL LETTER J
  0x6b, // k // LATIN SMALL LETTER K
  0x6c, // l // LATIN SMALL LETTER L
  0x6d, // m // LATIN SMALL LETTER M
  0x6e, // n // LATIN SMALL LETTER N
  0x6f, // o // LATIN SMALL LETTER O
  0x70, // p // LATIN SMALL LETTER P
  0x71, // q // LATIN SMALL LETTER Q
  0x72, // r // LATIN SMALL LETTER R
  0x73, // s // LATIN SMALL LETTER S
  0x74, // t // LATIN SMALL LETTER T
  0x75, // u // LATIN SMALL LETTER U
  0x76, // v // LATIN SMALL LETTER V
  0x77, // w // LATIN SMALL LETTER W
  0x78, // x // LATIN SMALL LETTER X
  0x79, // y // LATIN SMALL LETTER Y
  0x7a, // z // LATIN SMALL LETTER Z
  0x7b, // { // LEFT CURLY BRACKET
  0x7c, // | // VERTICAL LINE
  0x7d, // } // RIGHT CURLY BRACKET
  0x7e, // ~ // TILDE

  0xa1, // ?? // INVERTED EXCLAMATION MARK
  0xb0, // ?? // DEGREE SIGN
  0xb7, // ?? // MIDDLE DOT

  0xc6, // ?? // LATIN CAPITAL LETTER AE
  0xd0, // ?? // LATIN CAPITAL LETTER ETH
  0xd7, // ?? // MULTIPLICATION SIGN
  0xd8, // ?? // LATIN CAPITAL LETTER O WITH STROKE
  0xde, // ?? // LATIN CAPITAL LETTER THORN
  0xdf, // ?? // LATIN SMALL LETTER SHARP S
  0xe6, // ?? // LATIN SMALL LETTER AE
  0xf0, // ?? // LATIN SMALL LETTER ETH
  0xf7, // ?? // DIVISION SIGN
  0xf8, // ?? // LATIN SMALL LETTER O WITH STROKE
  0xfe, // ?? // LATIN SMALL LETTER THORN

  0x300, //  ?? // COMBINING GRAVE ACCENT
  0x301, //  ?? // COMBINING ACUTE ACCENT
  0x302, //  ?? // COMBINING CIRCUMFLEX ACCENT
  0x303, //  ?? // COMBINING TILDE
  0x305, //  ?? // COMBINING OVERLINE
  0x308, //  ?? // COMBINING DIAERESIS
  0x30a, //  ?? // COMBINING RING ABOVE
  0x30b, //  ??// COMBINING DOUBLE ACUTE ACCENT
  0x327, //  ?? // COMBINING CEDILLA

  0x393,   // ?? // GREEK CAPITAL LETTER GAMMA
  0x394,   // ?? // GREEK CAPITAL LETTER DELTA
  0x3a9,   // ?? // GREEK CAPITAL LETTER OMEGA
  0x3b8,   // ?? // GREEK SMALL LETTER THETA
  0x3bb,   // ?? // GREEK SMALL LETTER LAMBDA
  0x3bc,   // ?? // GREEK SMALL LETTER MU
  0x3c0,   // ?? // GREEK SMALL LETTER PI
  0x3c3,   // ?? // GREEK SMALL LETTER SIGMA
  0x1d07,  // ??? // LATIN LETTER SMALL CAPITAL E
  0x212f,  // ??? // SCRIPT SMALL E
  0x2192,  // ??? // RIGHTWARDS ARROW
  0x2211,  // ??? // N-ARY SUMMATION
  0x221a,  // ??? // SQUARE ROOT
  0x221e,  // ??? // INFINITY
  0x222b,  // ??? // INTEGRAL
  0x2248,  // ??? // ALMOST EQUAL TO
  0x2264,  // ??? // LESS-THAN OR EQUAL TO
  0x2265,  // ??? // GREATER-THAN OR EQUAL TO
  0xFFFD,  // ??? // REPLACEMENT CHARACTER
  0x1d422, // ???? // MATHEMATICAL BOLD SMALL I"
};

uint32_t ExtendedCodePoints[] = {
  0x20, //   // SPACE
  0x21, // ! // EXCLAMATION MARK
  0x22, // " // QUOTATION MARK
  0x23, // # // NUMBER SIGN
  0x24, // $ // DOLLAR SIGN
  0x25, // % // PERCENT SIGN
  0x26, // & // AMPERSAND
  0x27, // ' // APOSTROPHE
  0x28, // ( // LEFT PARENTHESIS
  0x29, // ) // RIGHT PARENTHESIS
  0x2a, // * // ASTERISK
  0x2b, // + // PLUS SIGN
  0x2c, // , // COMMA
  0x2d, // - // HYPHEN-MINUS
  0x2e, // . // FULL STOP
  0x2f, // / // SOLIDUS
  0x30, // 0 // DIGIT ZERO
  0x31, // 1 // DIGIT ONE
  0x32, // 2 // DIGIT TWO
  0x33, // 3 // DIGIT THREE
  0x34, // 4 // DIGIT FOUR
  0x35, // 5 // DIGIT FIVE
  0x36, // 6 // DIGIT SIX
  0x37, // 7 // DIGIT SEVEN
  0x38, // 8 // DIGIT EIGHT
  0x39, // 9 // DIGIT NINE
  0x3a, // : // COLON
  0x3b, // ; // SEMICOLON
  0x3c, // < // LESS-THAN SIGN
  0x3d, // = // EQUALS SIGN
  0x3e, // > // GREATER-THAN SIGN
  0x3f, // ? // QUESTION MARK
  0x40, // @ // COMMERCIAL AT
  0x41, // A // LATIN CAPITAL LETTER A
  0x42, // B // LATIN CAPITAL LETTER B
  0x43, // C // LATIN CAPITAL LETTER C
  0x44, // D // LATIN CAPITAL LETTER D
  0x45, // E // LATIN CAPITAL LETTER E
  0x46, // F // LATIN CAPITAL LETTER F
  0x47, // G // LATIN CAPITAL LETTER G
  0x48, // H // LATIN CAPITAL LETTER H
  0x49, // I // LATIN CAPITAL LETTER I
  0x4a, // J // LATIN CAPITAL LETTER J
  0x4b, // K // LATIN CAPITAL LETTER K
  0x4c, // L // LATIN CAPITAL LETTER L
  0x4d, // M // LATIN CAPITAL LETTER M
  0x4e, // N // LATIN CAPITAL LETTER N
  0x4f, // O // LATIN CAPITAL LETTER O
  0x50, // P // LATIN CAPITAL LETTER P
  0x51, // Q // LATIN CAPITAL LETTER Q
  0x52, // R // LATIN CAPITAL LETTER R
  0x53, // S // LATIN CAPITAL LETTER S
  0x54, // T // LATIN CAPITAL LETTER T
  0x55, // U // LATIN CAPITAL LETTER U
  0x56, // V // LATIN CAPITAL LETTER V
  0x57, // W // LATIN CAPITAL LETTER W
  0x58, // X // LATIN CAPITAL LETTER X
  0x59, // Y // LATIN CAPITAL LETTER Y
  0x5a, // Z // LATIN CAPITAL LETTER Z
  0x5b, // [ // LEFT SQUARE BRACKET
  0x5c, // \ // REVERSE SOLIDUS
  0x5d, // ] // RIGHT SQUARE BRACKET
  0x5e, // ^ // CIRCUMFLEX ACCENT
  0x5f, // _ // LOW LINE
  0x60, // ` // GRAVE ACCENT
  0x61, // a // LATIN SMALL LETTER A
  0x62, // b // LATIN SMALL LETTER B
  0x63, // c // LATIN SMALL LETTER C
  0x64, // d // LATIN SMALL LETTER D
  0x65, // e // LATIN SMALL LETTER E
  0x66, // f // LATIN SMALL LETTER F
  0x67, // g // LATIN SMALL LETTER G
  0x68, // h // LATIN SMALL LETTER H
  0x69, // i // LATIN SMALL LETTER I
  0x6a, // j // LATIN SMALL LETTER J
  0x6b, // k // LATIN SMALL LETTER K
  0x6c, // l // LATIN SMALL LETTER L
  0x6d, // m // LATIN SMALL LETTER M
  0x6e, // n // LATIN SMALL LETTER N
  0x6f, // o // LATIN SMALL LETTER O
  0x70, // p // LATIN SMALL LETTER P
  0x71, // q // LATIN SMALL LETTER Q
  0x72, // r // LATIN SMALL LETTER R
  0x73, // s // LATIN SMALL LETTER S
  0x74, // t // LATIN SMALL LETTER T
  0x75, // u // LATIN SMALL LETTER U
  0x76, // v // LATIN SMALL LETTER V
  0x77, // w // LATIN SMALL LETTER W
  0x78, // x // LATIN SMALL LETTER X
  0x79, // y // LATIN SMALL LETTER Y
  0x7a, // z // LATIN SMALL LETTER Z
  0x7b, // { // LEFT CURLY BRACKET
  0x7c, // | // VERTICAL LINE
  0x7d, // } // RIGHT CURLY BRACKET
  0x7e, // ~ // TILDE

  0xb0, // ?? // DEGREE SIGN
  0xb1, // ?? // PLUS OR MINUS
  0xb7, // ?? // MIDDLE DOT

  0xc6, // ?? // LATIN CAPITAL LETTER AE
  0xd0, // ?? // LATIN CAPITAL LETTER ETH
  0xd7, // ?? // MULTIPLICATION SIGN
  0xd8, // ?? // LATIN CAPITAL LETTER O WITH STROKE
  0xde, // ?? // LATIN CAPITAL LETTER THORN
  0xdf, // ?? // LATIN SMALL LETTER SHARP S
  0xe6, // ?? // LATIN SMALL LETTER AE
  0xf0, // ?? // LATIN SMALL LETTER ETH
  0xf7, // ?? // DIVISION SIGN
  0xf8, // ?? // LATIN SMALL LETTER O WITH STROKE
  0xfe, // ?? // LATIN SMALL LETTER THORN

  0x192, // ?? // LATIN SMALL LETTER F WITH HOOK

  0x300, //  ?? // COMBINING GRAVE ACCENT
  0x301, //  ?? // COMBINING ACUTE ACCENT
  0x302, //  ?? // COMBINING CIRCUMFLEX ACCENT
  0x303, //  ?? // COMBINING TILDE
  0x305, //  ?? // COMBINING OVERLINE
  0x308, //  ?? // COMBINING DIAERESIS
  0x30a, //  ?? // COMBINING RING ABOVE
  0x30b, //  ??// COMBINING DOUBLE ACUTE ACCENT
  0x327, //  ?? // COMBINING CEDILLA

  0x391,   // ?? // GREEK CAPITAL LETTER ALPHA
  0x392,   // ?? // GREEK CAPITAL LETTER BETA
  0x393,   // ?? // GREEK CAPITAL LETTER GAMMA
  0x394,   // ?? // GREEK CAPITAL LETTER DELTA
  0x395,   // ?? // GREEK CAPITAL LETTER EPSILON
  0x396,   // ?? // GREEK CAPITAL LETTER ZETA
  0x397,   // ?? // GREEK CAPITAL LETTER ETA
  0x398,   // ?? // GREEK CAPITAL LETTER THETA
  0x399,   // ?? // GREEK CAPITAL LETTER IOTA
  0x39a,   // ?? // GREEK CAPITAL LETTER KAPPA
  0x39b,   // ?? // GREEK CAPITAL LETTER LAMBDA
  0x39c,   // ?? // GREEK CAPITAL LETTER MU
  0x39d,   // ?? // GREEK CAPITAL LETTER NU
  0x39e,   // ?? // GREEK CAPITAL LETTER KSI
  0x39f,   // ?? // GREEK CAPITAL LETTER OMICRON
  0x3a0,   // ?? // GREEK CAPITAL LETTER PI
  0x3a1,   // ?? // GREEK CAPITAL LETTER RHO
  0x3a3,   // ?? // GREEK CAPITAL LETTER SIGMA
  0x3a4,   // ?? // GREEK CAPITAL LETTER TAU
  0x3a5,   // ?? // GREEK CAPITAL LETTER UPSILON
  0x3a6,   // ?? // GREEK CAPITAL LETTER PHI
  0x3a7,   // ?? // GREEK CAPITAL LETTER KHI
  0x3a8,   // ?? // GREEK CAPITAL LETTER PSI
  0x3a9,   // ?? // GREEK CAPITAL LETTER OMEGA
  0x3b1,   // ?? // GREEK SMALL LETTER ALPHA
  0x3b2,   // ?? // GREEK SMALL LETTER BETA
  0x3b3,   // ?? // GREEK SMALL LETTER GAMMA
  0x3b4,   // ?? // GREEK SMALL LETTER DELTA
  0x3b5,   // ?? // GREEK SMALL LETTER EPSILON
  0x3b6,   // ?? // GREEK SMALL LETTER ZETA
  0x3b7,   // ?? // GREEK SMALL LETTER ETA
  0x3b8,   // ?? // GREEK SMALL LETTER THETA
  0x3b9,   // ?? // GREEK SMALL LETTER IOTA
  0x3ba,   // ?? // GREEK SMALL LETTER KAPPA
  0x3bb,   // ?? // GREEK SMALL LETTER LAMBDA
  0x3bc,   // ?? // GREEK SMALL LETTER MU
  0x3bd,   // ?? // GREEK SMALL LETTER NU
  0x3be,   // ?? // GREEK SMALL LETTER KSI
  0x3bf,   // ?? // GREEK SMALL LETTER OMICRON
  0x3c0,   // ?? // GREEK SMALL LETTER PI
  0x3c1,   // ?? // GREEK SMALL LETTER RHO
  0x3c3,   // ?? // GREEK SMALL LETTER SIGMA
  0x3c4,   // ?? // GREEK SMALL LETTER TAU
  0x3c5,   // ?? // GREEK SMALL LETTER UPSILON
  0x3c6,   // ?? // GREEK SMALL LETTER PHI
  0x3c7,   // ?? // GREEK SMALL LETTER KHI
  0x3c8,   // ?? // GREEK SMALL LETTER PSI
  0x3c9,   // ?? // GREEK SMALL LETTER OMEGA
  0x454,   // ?? // CYRILLIC SMALL LETTER UKRAINIAN LE  - SMALL IN (in)
  0x1d07,  // ??? // LATIN LETTER SMALL CAPITAL E
  0x2026,  // ??? // HORIZONTAL ELLIPSIS
  0x212f,  // ??? // SCRIPT SMALL E
  0x2190,  // ??? // BACKWARD ARROW (leftarrow)
  0x2191,  // ??? // TOP ARROW (uparrow)
  0x2192,  // ??? // FORWARD ARROW (rightarrow)
  0x2193,  // ??? // BOTTOM ARROW (downarrow)
  0x2194,  // ??? // BACKWARD FORWARD ARROW (leftrightarrow)
  0x2195,  // ??? // TOP BOTTOM ARROW (updownarrow)
  0x2196,  // ??? // NORDWEST ARROW (nwarrow)
  0x2197,  // ??? // NORDEST ARROW (nearrow)
  0x2198,  // ??? // SOUTHWEST ARROW (swarrow)
  0x2199,  // ??? // SOUTHEST ARROW (searrow)
  0x21d0,  // ??? // DOUBLE BACKWARD ARROW (Leftarrow)
  0x21d1,  // ??? // DOUBLE TOP ARROW (Uparrow)
  0x21d2,  // ??? // DOUBLE FORWARD ARROW (Rightarrow)
  0x21d3,  // ??? // DOUBLE BOTTOM ARROW (Downarrow)
  0x2200,  // ??? // FORALL
  0x2202,  // ??? // PARTIAL
  0x2203,  // ??? // EXISTS (exists)
  0x2204,  // ??? // NOT EXISTS (nexists)
  0x2208,  // ??? // BIG IN (In)
  0x2209,  // ??? // BIG NOT IN (Notin)
  0x2211,  // ??? // N-ARY SUMMATION
  0x221a,  // ??? // SQUARE ROOT
  0x221e,  // ??? // INFINITY
  0x2229,  // ??? // SMALL INTERSECTION (cap)
  0x222a,  // ??? // SMALL UNION (cup)
  0x222b,  // ??? // INTEGRAL
  0x2248,  // ??? // ALMOST EQUAL TO
  0x2260,  // ??? // NOT EQUAL TO
  0x2261,  // ??? // IS CONGRUENT TO
  0x2264,  // ??? // LESS-THAN OR EQUAL TO
  0x2265,  // ??? // GREATER-THAN OR EQUAL TO
  0x2282,  // ??? // IS INCLUDED (subset)
  0x2284,  // ??? // IS NOT INCLUDED (nsubset)
  0x22c2,  // ??? // BIG INTERSECTION (Cap)
  0x22c3,  // ??? // BIG UNION (Cup)
  0x2505,  // ??? // BOX DRAWING EQU HEAVY DASH HORIZONTAL
  0x27e6,  // ??? // MATHEMATICAL LEFT INT BRACKET SET
  0x27e7,  // ??? // MATHEMATICAL RIGHT INT BRACKET SET
  0xFFFD,  // ??? // REPLACEMENT CHARACTER
  0x1d422, // ???? // MATHEMATICAL BOLD SMALL I"
};

int NumberOfSimpleCodePoints = sizeof(SimpleCodePoints)/sizeof(SimpleCodePoints[0]);
int NumberOfExtendedCodePoints = sizeof(ExtendedCodePoints)/sizeof(ExtendedCodePoints[0]);

#endif
