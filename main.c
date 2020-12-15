#include <stdio.h>

#include <stdlib.h>

void hanoi(int disksayisi,char sopadan,char sopaya,char bossopa){

if(disksayisi==1){
    printf("%d . disk %c sopasindan %c sopasina\n",disksayisi,sopadan,sopaya);
    return;
}
else{
    hanoi(disksayisi-1,sopadan,bossopa,sopaya);
    printf("%d . disk %c sopasindan %c sopasina\n",disksayisi,sopadan,sopaya);
    hanoi(disksayisi-1,bossopa,sopaya,sopadan);
}

}

int main()

{
    int disksayisi;
    scanf("%d",&disksayisi);
    hanoi(disksayisi,'A','C','B');





}
