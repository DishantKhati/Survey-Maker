#include<iostream>
#include<iomanip>
using namespace std;
int main(){int a[4][4];
for(int i=0;i<4;++i)for(int j=0;j<4;++j)a[i][j]=0;
while(1){int n,o;char c;cout<<setw(8)<<"City Menu: Delhi(0)\nMumbai(1)\nKolkata(2)\nChennai(3)\nEnter your choice: ";cin>>n;
cout<<"Car Menu: Alto(0)\nSX4(1)\nSwift(2)\nBaleno(3)\nEnter your choice: ";cin>>o;
a[n][o]+=1;
cout<<"Want to exit (y/n): ";
cin>>c;
if(c=='y'||c=='Y')break;
}
const char*ci[4]={"Delhi","Mumbai","Kolkata","Chennai"};
cout<<setw(8)<<"\tAlto\tSX4\tSwift\tBaleno\n";
for(int i=0;i<4;++i)
{for(int j=0;j<4;++j)
 {if(j==0)cout<<ci[i]<<"\t";
 cout<<"  "<<a[i][j]<<"\t";
}
 cout<<endl;
}
return 0;
}
