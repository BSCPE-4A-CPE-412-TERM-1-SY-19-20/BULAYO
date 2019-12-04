#include <iostream>
#include <cstring>
//#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class digna{
	public:
		void input();
		void process();
		void output();	
		void lines();
		
		int i,j,k,l,flag,len,count,i_temp;
		char str[100];
};

int main(int argc, char** argv) {
	digna a;
	a.input();
	
	return 0;
	
}

void digna::input(){
	flag = 0;
	while(flag == 0){
		cout<<"Enter a regular expression: ";
		gets(str);
		lines();
		flag = strcmp("exit",str);
		if(flag != 0){
			len = strlen(str);
			count = 0;
			for(i = 0; i <= len; i ++){
				if(str[i] == 'a'||str[i] == 'b'){
					count ++;
				}
			}
			if(count == len){
				cout<<"Expression Valid."<<endl;
				lines();
				process();
			}
			else{
				cout<<"Expression not Valid."<<endl;
				lines();
				flag = 0;
			}
		}
		else{
			cout<<"Program Terminated."<<endl;
			flag = 1;
			lines();
		}
	}
	
}

void digna::process(){
	len = strlen(str);
	count = 0;
	for(i = 0; i <= len; i ++){
		if(str[i]=='b'){
			i_temp = i + 1;
			i = len + 1;
			cout<<"Q0 -> Q1 ";
			count ++;
		}
		else{
			cout<<"Q0 -> Q0 ";
		}
	}
	for(i = i_temp; i <= len; i ++){
		if(str[i]=='b'){
			i_temp = i + 1;
			i = len + 1;
			cout<<"Q1 -> Q2 ";
			count ++;
		}
		else{
			cout<<"Q1 -> Q1 ";
		}
	}
	for(i = i_temp; i <= len; i ++){
		if(str[i]=='b'){
			i_temp = i + 1;
			i = len + 1;
			cout<<"Q2 -> Q3 ";
			count ++;
		}
		else{
			cout<<"Q2 -> Q2 ";
		}
	}
	for(i = i_temp; i <= len; i ++){
		if(str[i]=='b'){
			i_temp = i + 1;
			i = len + 1;
			cout<<"Q3 -> Q4 ";
			count ++;
		}
		else{
			cout<<"Q3 -> Q3 ";
		}
	}
	for(i = i_temp; i <= len; i ++){
		if(str[i]=='b'){
			i_temp = i + 1;
			i = len + 1;
			cout<<"Q4 -> Q5 ";
			count ++;
		}
		else{
			cout<<"Q4 -> Q4 ";
		}
	}
	
	for(i = i_temp; i <= len; i ++){
		if(str[i]=='b'){
			cout<<"Q6 -> Q6 ";
			count ++;
		}
		else{
			cout<<"Q6 -> Q6 ";
		}
	}
	cout<<endl;
	if(count >= 5){
		cout<<"Regular Expression generated."<<endl;
		puts(str);
		lines();
	}
	else{
		cout<<"Regular Expression not generated."<<endl;
		puts(str);
		lines();
	}
	input();
}

void digna::lines(){
cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;	
}


