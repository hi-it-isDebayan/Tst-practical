#include <stdio.h>
void Tower_of_Hanoi(int n, char src, char aux, char dest){
    if(n==1){
        printf("Move the disk from %c to %c.\n",src,dest);
        return;
    }
    Tower_of_Hanoi(n-1, src, dest, aux);
    printf("Move the disk from %c to %c.\n",src, dest);
    Tower_of_Hanoi(n-1, aux, src, dest);
}
int main(){
    int n;
    printf("Number of Disks: ");
    scanf("%d",&n);
    Tower_of_Hanoi(n, 'A', 'B', 'C');
    return 0;
}