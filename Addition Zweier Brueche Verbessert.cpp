#include<iostream>
using namespace std;

int ggT(int z,int n);
void kuerze(int ggt, int &z1, int&n1);
void credits();
void easteregg();
void ganzezahlen(int z, int n);
int zaehlercheck(int z, int n);

int main()
{
int z1,n1,z2,n2,ggt;

//EINGABE
cout<<"Addition zweier Brueche"<<endl;
cout<<"Geben sie den Zaehler des 1. Bruchs ein: ";
cin>>z1;
cout<<"Geben sie den Nenner des 1. Bruchs ein: ";
cin>>n1;
cout<<"Geben sie den Zaehler des 2. Bruchs ein: ";
cin>>z2;
cout<<"Geben sie den Nenner des 2. Bruchs ein: ";
cin>>n2;

//checken nach negativen Werten
if(n1<0||n2<0||z1<0||z2<0)
	{
	cout<<"Rechnen mit negativen zahlen nicht moeglich"<<endl;
	system("Pause");
	return 0;
	}

//checken ob nenner 0 ist
if(n1==0||n2==0)
	{
	cout<<"Teilen durch 0 nicht moeglich!"<<endl;
	system("Pause");
	return 0;
	}

//checken ob der erste Zähler 0 ist	
if(z1==0) zaehlercheck(z2,n2);
	
//checken ob der zweite Zähler 0 ist
if(z2==0) zaehlercheck(z1,n1);

//visualliesieren der Brüche
cout<<"bruch 1: "<<z1<<"/"<<n1<<endl;
cout<<"bruch 2: "<<z2<<"/"<<n2<<endl; cout<<endl;

//VERARBEITUNG

//Erweiterung der Brüche auf den selben Nenner
if(n1!=n2)
{
cout<<"Erweiterte Brueche"<<endl;
z1=z1*n2;
z2=z2*n1;
n1=n1*n2;
n2=n1;

//Zwischenergebnis
cout<<"bruch 1: "<<z1<<"/"<<n1<<endl;
cout<<"bruch 2: "<<z2<<"/"<<n2<<endl; cout<<endl;
}

//addition
z1=z1+z2;
cout<<"Bruch nach Addition: "<<z1<<"/"<<n1<<endl; cout<<endl;

//ggt ausrechnen
ggt=ggT(z1,n1);

cout<<"Der ggT ist: "<<ggt<<endl; cout<<endl;

//Kürzen
kuerze(ggt,z1,n1);

//AUSGABE
cout<<"Das Ergebnis lautet: "<<z1<<"/"<<n1<<endl;
	
if(z1>n1) ganzezahlen(z1,n1);
cout<<endl;

cout<<endl;
credits();
system("Pause");
return 0;
}

//________________________Zählercheck________________________
int zaehlercheck(int z, int n)
{
cout<<"Das Ergebnis ist: "<<z<<"/"<<n<<endl;
if(z>n) ganzezahlen(z,n);
system("Pause");
return 0;
}

//________________________ggt________________________
int ggT(int z,int n)
{
int teiler,ggt;
teiler=0;

do
{
teiler++;
if(n%teiler==0&&z%teiler==0)
ggt=teiler;
}
while(teiler<n && teiler<z);

return ggt;
}

//________________________kürzen________________________
void kuerze(int ggt, int &z1, int &n1)
{
z1=z1/ggt;
n1=n1/ggt;
}

//________________________ganze zahlen________________________
void ganzezahlen(int z, int n)
{
int n1;
cout<<"Oder"<<endl;
z=z/n;
n1=z%n;
	if(n1!=0) cout<<z<<" ganze und "<<n1<<"/"<<n<<endl;
	else cout<<z<<" ganze"<<endl;
}


//________________________credits________________________
void credits()
{
cout<<"__________________________________________"<<endl;
cout<<endl;
cout<<"Credits"<<endl;
cout<<"Software designed by: Iwo Sawicki"<<endl;
cout<<"Date: 19.03.2020"<<endl;
cout<<"Special thanks to:"<<endl;
cout<<"Robin Koch"<<endl;
cout<<"For explaning how to solve the equation"<<endl;
cout<<endl;
}
