#include<iostream>
#include<stack>
using namespace std;
stack<int>e;int w;stack<int>t;
void enque(){
	cin>>w;
	e.push(w);
}
void print(){
	while(!e.empty()){int u=e.top();
		e.pop();t.push(u);}
	cout<<t.top()<<endl;
	while(!t.empty()){e.push(t.top());t.pop();}
}
void deq(){
	e.pop();
}
int main()
{
int choice;
int n;cin>>n;
while(n!=0){cin>>choice;
switch(choice){
case 1:
	enque();
	break;
case 2:
	deq();
	break;
case 3:
	print();
	break;
}
n--;
}
//enque();
//e.push(2);
//cout<<e.top();
//enque();
//e.pop();
//cout<<e.top()<<endl;

//enque(e);
//print();
system("pause");
}