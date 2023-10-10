#define MAX 7
#include <stdio.h>
#include <string.h>

int main(){
char horario[MAX];
int verificacao;


printf("\n\nSeja bem vindo ao APP que te auxilia na hora de ver o horario das aulas na UFG :)\n");
printf("Nosso objetivo e auxiliar os alunos que tem dificuldade em decifrar os dias, turnos e horarios das aulas conforme mostrado no SIGAA\n\n");

int inputValido = 0;

do {

printf("Coloque aqui como aparece seu horario no SIGAA\n");
scanf("%s",horario);


int tamanho = strlen(horario);

switch(tamanho){
case 3: //ok    

if(horario[0] == '2'){
    printf("Segunda feira, ");
}else if(horario[0] == '3'){
    printf("Terça-feira, ");
}else if(horario[0] == '4'){
    printf("Quarta-feira, ");
}else if(horario[0] == '5'){
    printf("Quinta-feira,  ");
}else if(horario[0] == '6'){
    printf("Sexta-feira, ");
}else if(horario[0] == '7'){
    printf("Sábado, ");
}

if(horario[1] == 'M'||horario[1] == 'm'){
printf("Matutino - ");
}else if(horario[1] == 'T'||horario[1] == 't'){
printf("Vespertino - ");
}else if(horario[1] == 'N'||horario[1] == 'n'){
printf("Noturno - ");

}
if(((horario[1] == 'm'||horario[1] == 'M'))&&((horario[2]== '1' ))){
printf("07:10 - 08:00");
}else if(((horario[1] == 'm'||horario[1] == 'M'))&&((horario[2]== '2' ))){
printf("08:00 - 08:50");
}else if(((horario[1] == 'm'||horario[1] == 'M'))&&((horario[2]== '3' ))){
printf("08:50 - 09:40");
}else if(((horario[1] == 'm'||horario[1] == 'M'))&&((horario[2]== '4' ))){
printf("10:00 - 10:50");
}else if(((horario[1] == 'm'||horario[1] == 'M'))&&((horario[2]== '5' ))){
printf("10:50 - 11:40");
}else if(((horario[2] == 'm'||horario[2] == 'M'))&&((horario[3]== '6' ))){
printf("11:40 - 12:30");


}if(((horario[1] == 'v'||horario[1] == 'V'))&&((horario[2]== '1' ))){
printf("14:00 - 14:50");
}else if(((horario[1] == 'v'||horario[1] == 'V'))&&((horario[2]== '2' ))){
printf("14:50 - 15:40");
}else if(((horario[1] == 'v'||horario[1] == 'V'))&&((horario[2]== '3' ))){
printf("16:00 - 16:50");
}else if(((horario[1] == 'v'||horario[1] == 'V'))&&((horario[2]== '4' ))){
printf("16:50 - 17:40");



}if(((horario[1] == 'n'||horario[1] == 'N'))&&((horario[2]== '1' ))){
printf("18:05 - 18:50");
}else if(((horario[1] == 'n'||horario[1] == 'N'))&&((horario[2]== '2' ))){
printf("18:50 - 19:35");
}else if(((horario[1] == 'n'||horario[1] == 'N'))&&((horario[2]== '3' ))){
printf("19:35 - 20:20");
}else if(((horario[1] == 'n'||horario[1] == 'N'))&&((horario[2]== '4' ))){
printf("20:30 - 21:15");
}else if(((horario[1] == 'n'||horario[1] == 'N'))&&((horario[2]== '5' ))){
printf("21:15 - 22:00");
}


break;

case 4: //ok

if(horario[0] == '2'){
    printf("Segunda feira, ");
}else if(horario[0] == '3'){
    printf("Terca-feira, ");
}else if(horario[0] == '4'){
    printf("Quarta-feira, ");
}else if(horario[0] == '5'){
    printf("Quinta-feira,  ");
}else if(horario[0] == '6'){
    printf("Sexta-feira, ");
}else if(horario[0] == '7'){
    printf("Sábado, ");

}
if(horario[1] == 'M'||horario[1] == 'm'){
printf("Matutino - ");
}else if(horario[1] == 'T'||horario[1] == 't'){
printf("Vespertino - ");
}else if(horario[1] == 'N'||horario[1] == 'n'){
printf("Noturno - ");


}

if(((horario[1] == 'm'||horario[1] == 'M'))&&((horario[2]== '2' )&&(horario[3] == '3' ))){
printf("08:00 - 08:50 e 08:50 - 09:40");
}else if(((horario[1] == 'm'||horario[1] == 'M'))&&((horario[2]== '4' )&&(horario[3] == '5' ))){
printf("10:00 - 10:50 e 10:50 - 11:40");
}
if(((horario[1] == 'v'||horario[1] == 'V'))&&((horario[2]== '2' )&&(horario[3] == '3' ))){
printf("14:00 - 14:50 e 14:50 - 15:40");
}else if(((horario[1] == 'v'||horario[1] == 'V'))&&((horario[2]== '4' )&&(horario[3] == '5' ))){
printf("16:00 - 16:50 e 16:50 - 17:40");

}if(((horario[1] == 'n'||horario[1] == 'N'))&&((horario[2]== '2' )&&(horario[3] == '3' ))){
printf("18:50 - 19:35 e 19:35 - 20:20");
}else if(((horario[1] == 'n'||horario[1] == 'N'))&&((horario[2]== '4' )&&(horario[3] == '5' ))){
printf("20:30 - 21:15 e 21:15 - 22:00");
}
break;


case 5: //ok
if(horario[0] == '2'){
    printf("Segunda feira e ");
}else if(horario[0] == '3'){
    printf("Terca-feira e ");
}else if(horario[0] == '4'){
    printf("Quarta-feira e ");
}else if(horario[0] == '5'){
    printf("Quinta-feira e ");
}else if(horario[0] == '6'){
    printf("Sexta-feira e ");
}else if(horario[0] == '7'){
    printf("Sábado, ");
}


if(horario[1] == '2'){
    printf("Segunda feira, ");
}else if(horario[1] == '3'){
    printf("Terca-feira, ");
}else if(horario[1] == '4'){
    printf("Quarta-feira, ");
}else if(horario[1] == '5'){
    printf("Quinta-feira, ");
}else if(horario[1] == '6'){
    printf("Sexta-feira, ");
}else if(horario[1] == '7'){
    printf("Sabado, ");


}

if(horario[2] == 'M'||horario[2] == 'm'){
printf("Matutino - ");
}else if(horario[2] == 'T'||horario[2] == 't'){
printf("Vespertino - ");
}else if(horario[2] == 'N'||horario[2] == 'n'){
printf("Noturno - ");
}

if(((horario[2] == 'm'||horario[2] == 'M'))&&((horario[3]== '2' )&&(horario[4] == '3' ))){
printf("07:10 - 08:00 e 08:00 - 08:50");
}else if(((horario[2] == 'm'||horario[2] == 'M'))&&((horario[3]== '4' )&&(horario[4] == '5' ))){
printf("08:50 - 09:40 e 10:00 - 10:50");
}else if(((horario[2] == 'm'||horario[2] == 'M'))&&((horario[3]== '5' )&&(horario[4] == '6' ))){
printf("10:50 - 11:40 e 11:40 - 12:30");

}if(((horario[2] == 't'||horario[2] == 'T'))&&((horario[3]== '2' )&&(horario[4] == '3' ))){
printf("14:00 - 14:50 e 14:50 - 15:40");
}else if(((horario[2] == 't'||horario[2] == 'T'))&&((horario[3]== '4' )&&(horario[4] == '5' ))){
printf("16:00 - 16:50 e 16:50 - 17:40");

}if(((horario[2] == 'n'||horario[2] == 'N'))&&((horario[3]== '2' )&&(horario[4] == '3' ))){
printf("18:50 - 19:35 e 19:35 - 20:20");
}else if(((horario[2] == 'n'||horario[2] == 'N'))&&((horario[3]== '4' )&&(horario[4] == '5' ))){
printf("20:30 - 21:15 e 21:15 - 22:00");
}
break;

case 6:

if(horario[0] == '2'){
    printf("Segunda feira, ");
}else if(horario[0] == '3'){
    printf("Terca-feira, ");
}else if(horario[0] == '4'){
    printf("Quarta-feira, ");
}else if(horario[0] == '5'){
    printf("Quinta-feira,  ");
}else if(horario[0] == '6'){
    printf("Sexta-feira, ");
}else if(horario[0] == '7'){
    printf("Sábado, ");

}
if(horario[1] == '2'){
    printf("Segunda feira, ");
}else if(horario[1] == '3'){
    printf("Terca-feira, ");
}else if(horario[1] == '4'){
    printf("Quarta-feira, ");
}else if(horario[1] == '5'){
    printf("Quinta-feira, ");
}else if(horario[1] == '6'){
    printf("Sexta-feira, ");
}else if(horario[1] == '7'){
    printf("Sabado, ");

}
if(horario[2] == '2'){
    printf("Segunda feira, ");
}else if(horario[2] == '3'){
    printf("Terca-feira, ");
}else if(horario[2] == '4'){
    printf("Quarta-feira, ");
}else if(horario[2] == '5'){
    printf("Quinta-feira,  ");
}else if(horario[2] == '6'){
    printf("Sexta-feira, ");
}else if(horario[2] == '7'){
    printf("Sábado, ");}

if(horario[3] == 'M'||horario[3] == 'm'){
printf("Matutino - ");
}else if(horario[3] == 'T'||horario[3] == 't'){
printf("Vespertino - ");
}else if(horario[3] == 'N'||horario[3] == 'n'){
printf("Noturno - ");

}
if(((horario[3] == 'm'||horario[3] == 'M'))&&((horario[4]== '2' )&&(horario[5] == '3' ))){
printf("08:00 - 08:50 e 08:50 - 09:40");
}else if(((horario[3] == 'm'||horario[3] == 'M'))&&((horario[4]== '4' )&&(horario[5] == '5' ))){
printf("10:00 - 10:50 e 10:50 - 11:40");
}else if(((horario[3] == 'm'||horario[3] == 'M'))&&((horario[4]== '5' )&&(horario[5] == '6' ))){
printf("10:50 - 11:40 e 11:40 - 12:30");

}if(((horario[3] == 't'||horario[3] == 'T'))&&((horario[4]== '2' )&&(horario[5] == '3' ))){
printf("14:00 - 14:50 e 14:50 - 15:40");
}else if(((horario[3] == 't'||horario[3] == 'T'))&&((horario[4]== '4' )&&(horario[5] == '5' ))){
printf("16:00 - 16:50 e 16:50 - 17:40");

}if(((horario[3] == 'n'||horario[3] == 'N'))&&((horario[4]== '2' )&&(horario[5] == '3' ))){
printf("18:50 - 19:35 e 19:35 - 20:20");
}else if(((horario[3] == 'n'||horario[3] == 'N'))&&((horario[4]== '4' )&&(horario[5] == '5' ))){
printf("20:30 - 21:15 e 21:15 - 22:00");
}

break;

case 7:
if(horario[0] == '2'){
    printf("Segunda feira, ");
}else if(horario[0] == '3'){
    printf("Terca-feira, ");
}else if(horario[0] == '4'){
    printf("Quarta-feira, ");
}else if(horario[0] == '5'){
    printf("Quinta-feira,  ");
}else if(horario[0] == '6'){
    printf("Sexta-feira, ");
}else if(horario[0] == '7'){
    printf("Sábado, ");

}
if(horario[1] == '2'){
    printf("Segunda feira, ");
}else if(horario[1] == '3'){
    printf("Terca-feira, ");
}else if(horario[1] == '4'){
    printf("Quarta-feira, ");
}else if(horario[1] == '5'){
    printf("Quinta-feira, ");
}else if(horario[1] == '6'){
    printf("Sexta-feira, ");
}else if(horario[1] == '7'){
    printf("Sabado, ");
}

if(horario[3] == 'M'||horario[2] == 'm'){
printf("Matutino - ");
}else if(horario[3] == 'T'||horario[2] == 't'){
printf("Vespertino - ");
}else if(horario[3] == 'N'||horario[2] == 'n'){
printf("Noturno - ");
}

if(((horario[2] == 'm'||horario[2] == 'M'))&&((horario[3]== '2' )&&(horario[4] == '3' )&&(horario[5] == '4' )&&(horario[6] == '5' ))){
printf("08:00 - 08:50 e 08:50 - 09:40 e 10:00 - 10:50 e 11:40 - 12:30");
}else if(((horario[2] == 't'||horario[2] == 'T'))&&((horario[3]== '2' )&&(horario[4] == '3' )&&(horario[5] == '4' )&&(horario[6] == '5' ))){
printf("14:00 - 14:50 e 14:50 - 15:40 e 16:00 - 16:50 e 16:50 - 17:40");
}else if(((horario[2] == 'n'||horario[2] == 'N'))&&((horario[3]== '2' )&&(horario[4] == '3' )&&(horario[5] == '4' )&&(horario[6] == '5' ))){
printf("18:50 - 19:35 e 19:35 - 20:20 e 20:20 - 21:15 e 21:15 - 22:00");
}
break;



default:
printf("Entrada invalida. Por favor, tente novamente.\n");
while (getchar() != '\n');
continue;

}
inputValido = 1;

printf("\n\nDeseja verificar outro horario?\n 1 - Sim\n 2 - Nao\n");
scanf("%d", &verificacao);

if(verificacao == 1){
    inputValido=0;
}else{
    return 0;
}

}while (!inputValido);
getchar();

return 0;
}
