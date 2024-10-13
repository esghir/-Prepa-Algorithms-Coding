#include<iostream>


using namespace std;
int min(int a,int b);
int main(){
int tab[] = {10,4,5,3,2,8};

int IndiceArea[] = {0,0,0};
int tempArea;
  for(int i = 0 ; i<sizeof(tab)/sizeof(tab[0]);i++){
    for(int j=i+1 ; j<sizeof(tab)/sizeof(tab[0]);j++){
        tempArea = min(tab[i],tab[j])*(j-i);

        if(tempArea >IndiceArea[0] ){
            IndiceArea[0]=tempArea;
            IndiceArea[1]=i;
            IndiceArea[2]=j;

        }


    }

  }  
 cout<< " the max Area is " << IndiceArea[0] <<" which the indice "<<IndiceArea[1] <<" & "<<IndiceArea[2] ;

  return 0;
}

int min(int a,int b){
if(a<b) return a;
else return b;
}