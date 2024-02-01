#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
map<int ,int > mp;
 void print(){
 	for(int i=1;i<=n;i++){
 		cout<<a[i];
	 }
	 cout<<endl;
 }
 void back(int j){
 	for(int i=1;i<=n;i++){
 		if(mp[i]==0){
 			a[j]=i;
 			mp[i]++;
 		if(j==n){
 			print();
		 }
		 else {
		 	back(j+1);
		 }
		 mp[i]=0;
	 }
  }
}
 int main(){
   cin>>n;
   back(1);
   return 0;
 }
 
 