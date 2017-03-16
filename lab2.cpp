// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
class product 
{
	char name[64]; 
	int count; 
	double cost;
    public: 
	product()  
	{
		cost = count = name[0] = 0;
	}
	void set(char nam[], int coun, double cos) 
	{
		strcpy_s(name, nam); 
		count = coun;
        cost = cos;
	}
	product(char nam[], int coun, double cos) 
	{
		strcpy_s(name, nam); 
		count = coun;
		cost = cos; 
	}
	double getcost()
	{
		return cost*count;
	}
	void print() 
	{
		cout << "\nName of product: " << name << " Count=" << count << " Cost=" << cost;
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	int k; 
	cout << "k="; cin >> k;  
	double SumCost = 0; 
	char N[64]; int cu;  double co; 

	
	
	product **ppA; 
	ppA = new product*[k]; 
	for (int i = 0; i<k; i++)
	{
		cout << "Object K=" << (i + 1) << ":\n" << "Name of product: ";
		cin >> N; 
		cout << "Count=";
		cin >> cu; 
		cout << "Cost=";
		cin >> co; 
		ppA[i] = new product(N, cu, co); 
	}
	for (int i = 0; i<k; i++) ppA[i]->print();
	for (int i = 0; i<k; i++) SumCost += ppA[i]->getcost();
	cout << "\nSumCost=" << SumCost << endl;  
		system("pause"); 
	return 0;
}
