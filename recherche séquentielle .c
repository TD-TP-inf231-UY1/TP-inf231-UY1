#include<stdio.h>
int fonction (int i,int n,int t[n]){
int x=10 ;
printf("entrer le nombre d'éléments :\n");
scanf("%d", &n);
for (i=0; i<=n-1; i++){
printf("entrer l'élément numéro i :\n");
scanf("%d", &t[i]);
if(t[i]==x){
return i ;
}
}
return -1 ;
}
int main(){
int i, n;
int t[n];
fonction(i, n, t[n]);
return 0 ;
}