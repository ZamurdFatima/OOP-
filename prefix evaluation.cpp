#include <iostream>
#include <stack>;
#include <math.h>;
using namespace std;

int prefixEvaluation(string s){
	stack<int>st;                         //stack used to have many values?
	
	for(int i=s.length()-1; i>=0; i--){   //this length() came from?
		if(s[i]>='0'&&s[i]<='9'){
			st.push(s[i]-'0');            //is push giving value ans?
		}
		else{
			int op1=st.top();
			st.pop();                     //pop and top expression for which purpose in stack?
			int op2=st.top();
			st.pop();
			
			switch(s[i])
			{
			case'+':
				st.push(op1+op2);
				break;
			case'-':
				st.push(op1-op2);
				break;
			case'*':
				st.push(op1*op2);
				break;
			case'/':
				st.push(op1/op2);          //div and sub should have op2-op1!so why not?
				break;
			case'^':
				st.push(pow(op1,op2));
				break;
	    	}
		}
	}
	return st.top();                       //from where ref came? that gives final value!
}

int main(){
	cout<<prefixEvaluation("-7+23");
}
