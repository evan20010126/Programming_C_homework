#include <stdio.h>
struct card {
    char face, suit;
};

int higher(struct card A, struct card B);
struct card input_card();

int main(void) {
    struct card A, B;
    int num;
    scanf("%d", &num);
    while (num > 0) {
        A = input_card();
        B = input_card();
        printf("%d\n", higher(A, B));
        num--;
    }
    return 0;
}

int higher(struct card A, struct card B) {
    if (A.face > B.face) {
        return 1;
    } else if (A.face == B.face) {
        if (A.suit > B.suit) {
            return 1;
        }
    }
    return 0;
}

struct card input_card() {
    struct card tmp;
    char count = 0;
    char is_Face = 1;
    char ch;
    while (1) {
        scanf(" %c", &ch);
        if (is_Face) {
            if (ch == '1') {
                tmp.face = 8;
                scanf(" %c", &ch); // 把0讀掉
            } else if (ch == '2') {
                tmp.face = 0;
            } else if (ch == '3') {
                tmp.face = 1;
            } else if (ch == '4') {
                tmp.face = 2;
            } else if (ch == '5') {
                tmp.face = 3;
            } else if (ch == '6') {
                tmp.face = 4;
            } else if (ch == '7') {
                tmp.face = 5;
            } else if (ch == '8') {
                tmp.face = 6;
            } else if (ch == '9') {
                tmp.face = 7;
            } else if (ch == 'J') {
                tmp.face = 9;
            } else if (ch == 'Q') {
                tmp.face = 10;
            } else if (ch == 'K') {
                tmp.face = 11;
            } else if (ch == 'A') {
                tmp.face = 12;
            }
            // printf("%d\n", tmp.face);
            is_Face = 0;
        } else {
            if (ch == 'S') {
                tmp.suit = 0;
            } else if (ch == 'D') {
                tmp.suit = 1;
            } else if (ch == 'H') {
                tmp.suit = 2;
            } else if (ch == 'C') {
                tmp.suit = 3;
            }
            // printf("%d\n", tmp.suit);
            is_Face = 1;
            return tmp;
        }
    }
}
