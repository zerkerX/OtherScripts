#include <stdio.h>

int main()
{
    int result;
    
    while ( (result = getc(stdin)) != EOF )
    {
        switch (result)
        {
            case 0:
                fputs(" ", stdout);
                break;
            case 0x1:
                fputs("☺", stdout);
                break;
            case 0x2:
                fputs("☻", stdout);
                break;
            case 0x3:
                fputs("♥", stdout);
                break;
            case 0x4:
                fputs("♦", stdout);
                break;
            case 0x5:
                fputs("♣", stdout);
                break;
            case 0x6:
                fputs("♠", stdout);
                break;
            case 0x7:
                fputs("•", stdout);
                break;
            case 0x8:
                fputs("◘", stdout);
                break;
            case 0xB:
                fputs("♂", stdout);
                break;
            case 0xE:
                fputs("♫", stdout);
                break;
            case 0xF:
                fputs("☼", stdout);
                break;
            case 0x10:
                fputs("►", stdout);
                break;
            case 0x11:
                fputs("◄", stdout);
                break;
            case 0x12:
                fputs("↕", stdout);
                break;
            case 0x13:
                fputs("‼", stdout);
                break;
            case 0x14:
                fputs("¶", stdout);
                break;
            case 0x15:
                fputs("§", stdout);
                break;
            case 0x16:
                fputs("▬", stdout);
                break;
            case 0x17:
                fputs("↨", stdout);
                break;
            case 0x18:
                fputs("↑", stdout);
                break;
            case 0x19:
                fputs("↓", stdout);
                break;
            case 0x1B:
                fputs("←", stdout);
                break;
            case 0x1C:
                fputs("∟", stdout);
                break;
            case 0x1D:
                fputs("↔", stdout);
                break;
            case 0x1E:
                fputs("▲", stdout);
                break;
            case 0x1F:
                fputs("▼", stdout);
                break;
            case 0x7F:
                fputs("⌂", stdout);
                break;
            case 0x80:
                fputs("Ç", stdout);
                break;
            case 0x81:
                fputs("ü", stdout);
                break;
            case 0x82:
                fputs("é", stdout);
                break;
            case 0x83:
                fputs("â", stdout);
                break;
            case 0x84:
                fputs("ä", stdout);
                break;
            case 0x85:
                fputs("à", stdout);
                break;
            case 0x86:
                fputs("å", stdout);
                break;
            case 0x87:
                fputs("ç", stdout);
                break;
            case 0x88:
                fputs("ê", stdout);
                break;
            case 0x89:
                fputs("ë", stdout);
                break;
            case 0x8A:
                fputs("è", stdout);
                break;
            case 0x8B:
                fputs("ï", stdout);
                break;
            case 0x8C:
                fputs("î", stdout);
                break;
            case 0x8D:
                fputs("ì", stdout);
                break;
            case 0x8E:
                fputs("Ä", stdout);
                break;
            case 0x8F:
                fputs("Å", stdout);
                break;
            case 0x90:
                fputs("É", stdout);
                break;
            case 0x91:
                fputs("æ", stdout);
                break;
            case 0x92:
                fputs("Æ", stdout);
                break;
            case 0x93:
                fputs("ô", stdout);
                break;
            case 0x94:
                fputs("ö", stdout);
                break;
            case 0x95:
                fputs("ò", stdout);
                break;
            case 0x96:
                fputs("û", stdout);
                break;
            case 0x97:
                fputs("ù", stdout);
                break;
            case 0x98:
                fputs("ÿ", stdout);
                break;
            case 0x99:
                fputs("Ö", stdout);
                break;
            case 0x9A:
                fputs("Ü", stdout);
                break;
            case 0x9B:
                fputs("¢", stdout);
                break;
            case 0x9C:
                fputs("£", stdout);
                break;
            case 0x9D:
                fputs("¥", stdout);
                break;
            case 0x9E:
                fputs("₧", stdout);
                break;
            case 0x9F:
                fputs("ƒ", stdout);
                break;
            case 0xA0:
                fputs("á", stdout);
                break;
            case 0xA1:
                fputs("í", stdout);
                break;
            case 0xA2:
                fputs("ó", stdout);
                break;
            case 0xA3:
                fputs("ú", stdout);
                break;
            case 0xA4:
                fputs("ñ", stdout);
                break;
            case 0xA5:
                fputs("Ñ", stdout);
                break;
            case 0xA6:
                fputs("ª", stdout);
                break;
            case 0xA7:
                fputs("º", stdout);
                break;
            case 0xA8:
                fputs("¿", stdout);
                break;
            case 0xA9:
                fputs("⌐", stdout);
                break;
            case 0xAA:
                fputs("¬", stdout);
                break;
            case 0xAB:
                fputs("½", stdout);
                break;
            case 0xAC:
                fputs("¼", stdout);
                break;
            case 0xAD:
                fputs("¡", stdout);
                break;
            case 0xAE:
                fputs("«", stdout);
                break;
            case 0xAF:
                fputs("»", stdout);
                break;
            case 0xB0:
                fputs("░", stdout);
                break;
            case 0xB1:
                fputs("▒", stdout);
                break;
            case 0xB2:
                fputs("▓", stdout);
                break;
            case 0xB3:
                fputs("│", stdout);
                break;
            case 0xB4:
                fputs("┤", stdout);
                break;
            case 0xB5:
                fputs("╡", stdout);
                break;
            case 0xB6:
                fputs("╢", stdout);
                break;
            case 0xB7:
                fputs("╖", stdout);
                break;
            case 0xB8:
                fputs("╕", stdout);
                break;
            case 0xB9:
                fputs("╣", stdout);
                break;
            case 0xBA:
                fputs("║", stdout);
                break;
            case 0xBB:
                fputs("╗", stdout);
                break;
            case 0xBC:
                fputs("╝", stdout);
                break;
            case 0xBD:
                fputs("╜", stdout);
                break;
            case 0xBE:
                fputs("╛", stdout);
                break;
            case 0xBF:
                fputs("┐", stdout);
                break;
            case 0xC0:
                fputs("└", stdout);
                break;
            case 0xC1:
                fputs("┴", stdout);
                break;
            case 0xC2:
                fputs("┬", stdout);
                break;
            case 0xC3:
                fputs("├", stdout);
                break;
            case 0xC4:
                fputs("─", stdout);
                break;
            case 0xC5:
                fputs("┼", stdout);
                break;
            case 0xC6:
                fputs("╞", stdout);
                break;
            case 0xC7:
                fputs("╟", stdout);
                break;
            case 0xC8:
                fputs("╚", stdout);
                break;
            case 0xC9:
                fputs("╔", stdout);
                break;
            case 0xCA:
                fputs("╩", stdout);
                break;
            case 0xCB:
                fputs("╦", stdout);
                break;
            case 0xCC:
                fputs("╠", stdout);
                break;
            case 0xCD:
                fputs("═", stdout);
                break;
            case 0xCE:
                fputs("╬", stdout);
                break;
            case 0xCF:
                fputs("╧", stdout);
                break;
            case 0xD0:
                fputs("╨", stdout);
                break;
            case 0xD1:
                fputs("╤", stdout);
                break;
            case 0xD2:
                fputs("╥", stdout);
                break;
            case 0xD3:
                fputs("╙", stdout);
                break;
            case 0xD4:
                fputs("╘", stdout);
                break;
            case 0xD5:
                fputs("╒", stdout);
                break;
            case 0xD6:
                fputs("╓", stdout);
                break;
            case 0xD7:
                fputs("╫", stdout);
                break;
            case 0xD8:
                fputs("╪", stdout);
                break;
            case 0xD9:
                fputs("┘", stdout);
                break;
            case 0xDA:
                fputs("┌", stdout);
                break;
            case 0xDB:
                fputs("█", stdout);
                break;
            case 0xDC:
                fputs("▄", stdout);
                break;
            case 0xDD:
                fputs("▌", stdout);
                break;
            case 0xDE:
                fputs("▐", stdout);
                break;
            case 0xDF:
                fputs("▀", stdout);
                break;
            case 0xE0:
                fputs("α", stdout);
                break;
            case 0xE1:
                fputs("ß", stdout);
                break;
            case 0xE2:
                fputs("Γ", stdout);
                break;
            case 0xE3:
                fputs("π", stdout);
                break;
            case 0xE4:
                fputs("Σ", stdout);
                break;
            case 0xE5:
                fputs("σ", stdout);
                break;
            case 0xE6:
                fputs("µ", stdout);
                break;
            case 0xE7:
                fputs("τ", stdout);
                break;
            case 0xE8:
                fputs("Φ", stdout);
                break;
            case 0xE9:
                fputs("Θ", stdout);
                break;
            case 0xEA:
                fputs("Ω", stdout);
                break;
            case 0xEB:
                fputs("δ", stdout);
                break;
            case 0xEC:
                fputs("∞", stdout);
                break;
            case 0xED:
                fputs("φ", stdout);
                break;
            case 0xEE:
                fputs("ε", stdout);
                break;
            case 0xEF:
                fputs("∩", stdout);
                break;
            case 0xF0:
                fputs("≡", stdout);
                break;
            case 0xF1:
                fputs("±", stdout);
                break;
            case 0xF2:
                fputs("≥", stdout);
                break;
            case 0xF3:
                fputs("≤", stdout);
                break;
            case 0xF4:
                fputs("⌠", stdout);
                break;
            case 0xF5:
                fputs("⌡", stdout);
                break;
            case 0xF6:
                fputs("÷", stdout);
                break;
            case 0xF7:
                fputs("≈", stdout);
                break;
            case 0xF8:
                fputs("°", stdout);
                break;
            case 0xF9:
                fputs("∙", stdout);
                break;
            case 0xFA:
                fputs("·", stdout);
                break;
            case 0xFB:
                fputs("√", stdout);
                break;
            case 0xFC:
                fputs("ⁿ", stdout);
                break;
            case 0xFD:
                fputs("²", stdout);
                break;
            case 0xFE:
                fputs("■", stdout);
                break;
            case 0xFF:
                fputs(" ", stdout);
                break;
            default:
                putc(result, stdout);
        }
    }
    
    return 0;
}
