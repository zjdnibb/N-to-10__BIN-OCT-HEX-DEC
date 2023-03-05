#include<bits/stdc++.h>
using namespace std;
int s[100];
int main(void){
	int i=0,c=1;
	long long a;

	double r;
	cin>>a>>r;
	if (a>=r){
		while(a>=r){	
			if(a*1.0/r*1.0==int(a/r)){
				s[i]=0;
				//s[i+1]+=1;

			}else {
				s[i]+=a%int(r);
				//if(s[i]>=r){
				//	s[i]=s[i]-r;
				//}
			}
			i++;
			a=int(a/r);
		}
		s[i]=a;
	}else {
		i=1;
		s[0]=a;
	}
	for(int j=i;j>-1;j--){
		if(s[j]==10){
			cout<<"A";
		}else if(s[j]==11){
			cout<<"B";
		}else if(s[j]==12){
			cout<<"C";
		}else if(s[j]==13){
			cout<<"D";
		}else if(s[j]==14){
			cout<<"E";
		}else if(s[j]==15){
			cout<<"F";
		}else cout<<s[j];
	}


	
}
