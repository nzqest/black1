#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int main(void){
	system("cls");

	//char name;
	string name;
	//int pwd;
	string pwd;//����
	while(1){
		
	cout<<"�������˺�:"<<endl;
	cin>>name;
	cout<<"����������:"<<endl;
	cin>>pwd;
	//�ж�Ȩ��
	
	
	if(name=="54hk"&& pwd=="123456"){
		break;//break����
	
	}
		else{
			cout<<"�û������������"<<endl;
			system("pause");
			
	}
	}
	system("cls");
	cout<<"1.��վ 404 ����" <<endl;
	cout<<"2.��վ�۸Ĺ���"<<endl;
	cout<<"3.��վ������¼" <<endl;
	cout<< "4.DNS ����" <<endl;
	cout<<"5.��������������" <<endl;
	system("pause");
	return 0;

}

	