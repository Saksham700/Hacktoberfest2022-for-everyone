#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 void aesc();
void quick_sort();
int divide();
void time_complexcity();
void desc();
int main(){
    int num,n,ch;
    printf("Orderd list\tReverse order\tSame value\tRandom list\n");
    for(int i=1;i<=11;i++)
    {
    if(i==1)
    n=1000;
    else if(i==2)
    n=50000;
    else if(i>=3 && i<=10)
    {
        n=n+50000;
    }
    else
    n=1000000;
      int *a = (int *)malloc(sizeof(int)*n);
     int lb=0,ub=(n-1);
     
        for(int i=0;i<n;i++){
      a[i]=rand()%n;
      }


ch=1;
switch(ch){
      case 1:   
                aesc(a,n);
                time_complexcity(a,lb,ub);
      case 2:
                desc(a,n);
                time_complexcity(a,lb,ub);
       case 3:
               for(int i=0;i<n;i++){
                   a[i]=1;
               }
                time_complexcity(a,lb,ub);
    case 4:
                time_complexcity(a,lb,ub);
}
printf("\n");
}

}



void quick_sort(int a[],int lb,int ub){
 int loc;
 if(lb<ub){
 loc=divide(a,lb,ub);
 quick_sort(a,lb,(loc-1));
 quick_sort(a,(loc+1),ub);
}}

int divide(int a[],int lb,int ub){
  int pivot;
  pivot=a[lb];
  int temp, start=lb,end=ub;
  while(start<end){
    while(a[start]<=pivot){
        start++;
    }
    while(a[end]>pivot){
        end--;
    }
     if(start<end){
 temp=a[start];
 a[start]=a[end];
 a[end]=temp;
  }}
  
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
  
 return end;
}


void time_complexcity(int a[],int lb,int ub){
 clock_t start,end;
 int l=lb,u=ub;
    double cp;
    start = clock();
quick_sort(a,lb,ub);

end = clock();
cp = (double)(end-start)/(CLOCKS_PER_SEC);
printf("%lf\t\t",cp);}


  void aesc(int a[],int n){
    int temp;
for(int i=1;i<n;i++){
    temp=a[i];
    for(int j=i-1;j>=0;j--){
        if(a[j]>temp){
            a[j+1]=a[j];
             a[j]=temp; 
        }
    }
 }
 }


 void desc(int a[],int n){
    int temp;
for(int i=1;i<n;i++){
    temp=a[i];
    for(int j=i-1;j>=0;j--){
        if(a[j]<temp){
            a[j+1]=a[j];
             a[j]=temp; 
        }
    }
 }
 }