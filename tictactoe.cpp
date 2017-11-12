#include<iostream>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char Player='x';
void input()
{int n;
cout<<"enter field or number by "<<Player;
cin>>n;
if(n==1)
{if(matrix[0][0]=='x'||matrix[0][0]=='0')
{cout<<"Wrong choice.\n";
input();}
else
matrix[0][0]=Player;}
else if(n==2){
if(matrix[0][1]=='x'||matrix[0][1]=='0')
{cout<<"Wrong Choice.\n";
input();}
else
matrix[0][1]=Player;}

else if(n==3){
if(matrix[0][2]=='x'||matrix[0][2]=='0')
{cout<<"Wrong choice.\n";
input();}
else
matrix[0][2]=Player;}
else if(n==4){
if(matrix[1][0]=='x'||matrix[1][0]=='0')
{cout<<"Wrong choice.\n";
input();}
else
matrix[1][0]=Player;}
else if(n==5){
if(matrix[1][1]=='x'||matrix[1][1]=='0')
{cout<<"Wrong choice. \n";
input();}
else
matrix[1][1]=Player;}
else if(n==6){
if(matrix[1][2]=='x'||matrix[1][2]=='0')
{cout<<"Wrong choice. \n";
input();}
else
matrix[1][2]=Player;}
else if(n==7){
if(matrix[2][0]=='x'||matrix[2][0]=='0')
{cout<<"Wrong choice. \n";
input();}
else
matrix[2][0]=Player;}
else if(n==8){
if(matrix[2][1]=='x'||matrix[2][1]=='0')
{cout<<"Wrong choice. \n";
input();
}
else
matrix[2][1]=Player;}
else if(n==9){
if(matrix[2][2]=='x'||matrix[2][2]=='0')
{cout<<"Wrong choice. \n";
input();}
else
matrix[2][2]=Player;}
if(n>9||n==0||n<0)
{cout<<"Wrong choice.\n";
input();} 
}
void togglePlayer()
{if(Player=='x')
Player='0';
else
Player='x';
}
char Win()
{if(matrix[0][0]=='x'&&matrix[0][1]=='x'&&matrix[0][2]=='x')
return 'x';
else if(matrix[1][0]=='x'&&matrix[1][1]=='x'&&matrix[1][2]=='x')
return'x';
else if(matrix[2][0]=='x'&&matrix[2][1]=='x'&&matrix[2][2]=='x')
return'x';
else if(matrix[0][0]=='x'&&matrix[1][0]=='x'&&matrix[2][0]=='x')
return'x';
else if(matrix[0][1]=='x'&&matrix[1][1]=='x'&&matrix[2][1]=='x')
return'x';
else if(matrix[0][2]=='x'&&matrix[1][2]=='x'&&matrix[2][2]=='x')
return'x';
else if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')
return'x';
else if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')
return'x';

if(matrix[0][0]=='0'&&matrix[0][1]=='0'&&matrix[0][2]=='0')
return '0';
else if(matrix[1][0]=='0'&&matrix[1][1]=='0'&&matrix[1][2]=='0')
return'0';
else if(matrix[2][0]=='0'&&matrix[2][1]=='0'&&matrix[2][2]=='0')
return'0';
else if(matrix[0][0]=='0'&&matrix[1][0]=='0'&&matrix[2][0]=='0')
return'0';
else if(matrix[0][1]=='0'&&matrix[1][1]=='0'&&matrix[2][1]=='0')
return'0';
else if(matrix[0][2]=='0'&&matrix[1][2]=='0'&&matrix[2][2]=='0')
return'0';
else if(matrix[0][0]=='0'&&matrix[1][1]=='0'&&matrix[2][2]=='0')
return'0';
else if(matrix[0][2]=='0'&&matrix[1][1]=='0'&&matrix[2][0]=='0')
return'0';

return'/';
}

void Draw()
{for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
cout<<matrix[i][j]<<"	";
cout<<endl;
}}
int main(){int p=0;
Draw();
cout<<"first player has 'x' and second player'0'"<<endl;
while(1)
{input();
p++;
Draw();
if(p>=5){
if(Win()=='x')
{cout<<"x wins! congratulations!!!!! game over";
break;
}
if(Win()=='0')
{cout<<" 0 wins! congratulations !!!!!! game over";
break;}
if(Win()=='/'&&p==9){
cout<<"Game draw!!! Gameover";
break;
}
}
togglePlayer();
 }
return 0;
}
