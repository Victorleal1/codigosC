#include <stdio.h>

int main() {
    char p1[20], p2[20], p3[20];


    printf("Digite a primeira palavra (vertebrado ou invertebrado): ");
    scanf("%s", p1);

    printf("Digite a segunda palavra (ave, mamifero, inseto ou anelideo): ");
    scanf("%s", p2);

    printf("Digite a terceira palavra (carnivoro, onivoro, herbivoro ou hematofago): ");
    scanf("%s", p3);

    if (p1[0] == 'v') {
        if (p2[0] == 'a') {
            if (p3[0] == 'c') {
                printf("O animal escolhido foi: aguia\n");
            } else if (p3[0] == 'o') {
                printf("O animal escolhido foi: pomba\n");
            }
        } else if (p2[0] == 'm') {  //
            if (p3[0] == 'o') {
                printf("O animal escolhido foi: homem\n");
            } else if (p3[0] == 'h') {
                printf("O animal escolhido foi: vaca\n");
            }
        }
    } else if (p1[0] == 'i') {
        if (p2[0] == 'i') {
            if (p3[0] == 'h' && p3[1] == 'e') {
                printf("O animal escolhido foi: pulga\n");
            } else if (p3[0] == 'h') {
                printf("O animal escolhido foi: lagarta\n");
            }
        } else if (p2[0] == 'a') {  //
            if (p3[0] == 'h' && p3[1] == 'e') {
                printf("O animal escolhido foi: sanguessuga\n");
            } else if (p3[0] == 'o') {
                printf("O animal escolhido foi: minhoca\n");
            }
        }
    } else {
        printf("Entrada invalida.\n");
    }

    return 0;
}
