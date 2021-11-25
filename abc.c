#include<stdio.h>

/*int main(){
    int x[4]={7,8,5};
    printf("%d%d%D",x[3],x[2],x[1]);


    return 0;
}*/


/*void myFunc(int x){
    if(x>0)
        myFunc(--x);
    printf("%d",x);
}

int main(){
    myFunc(5);
    return 0;
}*/

/*int main(){
    int a[4][5],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            a[i][j]=i+j;
        }
    }
    printf("%d",*(a[0]+9));
    return 0;
}*/

/*int main(){
    int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    printf("%d\n",*(*(a+**a+1)-3));

    return 0;
}*/

/*int main(){
    int a[3]={10,12,14};
    int i=0;
    while(i<3){
        printf("%d",i[a]*2+1);
        i++;
    }
    return 0;
}*/
int fun(int n){
    int x=1,k;
    if(n==1)
        return x;
    else{
    for(k=1;k<n;++k)
        x=x+fun(k)*fun(n-k);}
    return x;
}
int main(){
    fun(4);
    return 0;
}

