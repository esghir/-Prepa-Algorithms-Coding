#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int maxArea(vector<int>& vec ){
int l = 0 , r = vec.size()-1;
int currentMaxArea = 0;
 while(l<r){
currentMaxArea = max(currentMaxArea,(r-l)*min(vec[r],vec[l]));
if(vec[r]>vec[l])
l++;
else
r--;
 }
 return currentMaxArea;
}


int main(){
 vector<int> vec = {12,3,56,4,12,65,2,0};
cout<<"the bigest area constructed is "<<maxArea(vec);
return 0;
}
