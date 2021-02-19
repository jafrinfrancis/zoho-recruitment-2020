#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
	string s;
	cout<<"Enter Word : ";
	cin>>s;
	int l=s.length();
	int mid=l/2;
	int spaces=l-1;
	for(int i=0;i<l;i++){
		for(int k=0;k<spaces;k++) cout<<" ";
		for(int j=0;j<=i;j++){
			if(mid+j>=l){
				cout<<s[mid+j-l];
			}else
			cout<<s[mid+j];
		}
		spaces--;
		cout<<endl;
	}
	return 0;
}
