               //Ýsmet Alp Kara - B1905.010051
#include<iostream> 
#include<conio.h> 
	using namespace std; 
	void diskTower(int n, char a, char b,char c){
	 if(n==1) 
	 cout<<"Move disk from  "<<a<<" to "<<c<<endl;
	else{ 
	diskTower(n-1,a,c,b); 
	diskTower(1,a,b,c); 
	diskTower(n-1,b,a,c); 
	}}
	main(){
	int n; 
	char a,c,b;
	cout<<"Number of disks: ";
	cin>>n;
	cout<<"Input Name of Source Tower: ";
	cin>>a;
	cout<<"Input Name of Auxiliary Tower: "; 
	cin>>b;
	cout<<"Input Name of Destination Tower: ";
	cin>>c;
	diskTower(n,a,b,c); 
	getch(); 
}

