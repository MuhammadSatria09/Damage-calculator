#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	float a;
	float b;
	float c;
	float d;
	
	cout<<"Base Attack         :";cin>>a;
	cout<<"Attack Percentage   :";cin>>b;
	cout<<"Crit Damage         :";cin>>c;
	cout<<"Elemental Dmg bonus :";cin>>d;

	if(d==0){
		cout<<a;
	}
	else if(d>2){
		cout<<(a+a*(c/100)+a*(b/100))*(1+(d/100));
	}
	
}

