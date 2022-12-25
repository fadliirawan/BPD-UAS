#include <stdio.h>
int main(){
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int i;
    printf("Nilai mahasiswa yang sesuai dengan kriteria : ");
    for(i=0; i<10; i++){
	    if(a[i]>=60)
	    printf("%4i", a[i]);
    }
}
