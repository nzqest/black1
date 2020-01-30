#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int main(void){
	system("cls");

	//char name;
	string name;
	//int pwd;
	string pwd;//ÃÜÂë
	while(1){
		
	cout<<"ÇëÊäÈëÕËºÅ:"<<endl;
	cin>>name;
	cout<<"ÇëÊäÈëÃÜÂë:"<<endl;
	cin>>pwd;
	//ÅĞ¶ÏÈ¨ÏŞ
	
	
	if(name=="54hk"&& pwd=="123456"){
		break;//break³ö¿Ú
	
	}
		else{
			cout<<"ÓÃ»§Ãû»òÃÜÂë´íÎó"<<endl;
			system("pause");
			
	}
	}
	system("cls");
	cout<<"1.ÍøÕ¾ 404 ¹¥»÷" <<endl;
	cout<<"2.ÍøÕ¾´Û¸Ä¹¥»÷"<<endl;
	cout<<"3.ÍøÕ¾¹¥»÷¼ÇÂ¼" <<endl;
	cout<< "4.DNS ¹¥»÷" <<endl;
	cout<<"5.·şÎñÆ÷ÖØÆô¹¥»÷" <<endl;
	system("pause");
	return 0;

}

	