﻿#include "addProducts.h"



void addProducts::informationStorage(vector<StorageItem> &VBItems)// nhap them 1 sp vao don hang // nhap vao trong console (complier thuc thi)
{
	StorageItem C;
	cout << "Enter ID: ";
//	cin.ignore();
	getline(cin, C.ID());
	cout << "Enter name: ";
	getline(cin, C.Name());
	cout << "Enter origin: ";
	getline(cin, C.Origin());
	cout << "Enter price: ";
	cin >> C.Price();
	cin.ignore();
	cout << "Enter company: ";
	getline(cin, C.Company());
	cout << "Enter quantity: ";
	cin >> C.Quantity();
	VBItems.push_back(C);	
	//cout <<ManageVector::ToString(VBItems[VBItems.size() - 1]);
}
void addProducts::dataStorage(vector<StorageItem>&VBItems) // ghi file (show ra text file)
{
	fstream myfile;
	myfile.open("Storage//ItemStorage.txt", ios::app);
	myfile << endl;
	myfile << ManageVector::ToString(VBItems[VBItems.size() - 1]);
	myfile.close();
}
//void addProducts::dataStorage(vector<StorageItem>&VBItems) // ghi file (show ra text file)
//{
//	fstream myfile;
//	myfile.open("Storage//ItemStorage.txt", ios::out);
//	myfile << endl;
//	for (int i = 0; i < VBItems.size(); i++) {
//		myfile << ManageVector::ToString(VBItems[i]);
//	}
//	myfile.close();
//}
void addProducts::updateDate( date d)
{
	fstream myfile;
	myfile.open("Storage//Date.txt", ios::out);
	//myfile << endl;
	myfile << d.DToString();
	

}
//void addProducts::changeStorage(vector<StorageItem>&VBItems)
//{
//	//string tmp;
//	//string findID;// dung de tim ID cua don hang muon thay doi thong tin
//	//cin.ignore();
//	//getline(cin, findID);
//	//fstream myfile;
//	//StorageItem add;
//	//myfile.open("Storage//ItemStorage.txt", ios::out);
//
//	//while (!myfile.eof()) {  //Parse and import to Vector
//	//	if (!myfile.eof())
//
//	//		getline(myfile, tmp, '\n');
//	//	vector<string> hold = Tokenizer::Parse(tmp, ", ");
//	//	add.setID(hold[0]);  //0ID  1Name  2Quantity  3Company  4Origin  5Price
//	//	add.setName(hold[1]);
//	//	add.setQuantity(stoi(hold[2]));
//	//	add.setCompany(hold[3]);
//	//	add.setOrigin(hold[4]);
//	//	add.setPrice(stoi(hold[5]));
//	//
//	//	VBItems.push_back(add);
//	//}
//	//for (int i = 0; i < VBItems.size(); i++)
//	//{
//	//	if (VBItems[i].ID() == findID)
//	//	{
//
//	//	}
//	//	
//	//}
//	string findID,
//		n_name,
//		n_company,
//		n_origin,
//		tmp; // dong doc du lieu trong file
//	int n_quantity;
//	long n_price;
//	ifstream myfile;
//	StorageItem add;
//	myfile.open("Storage//ItemStorage.txt", ios::in);
//	while (!myfile.eof())
//	{
//		if(!myfile.eof())
//		getline(myfile, tmp, '\n');
//		if (myfile.eof()) break;
//			vector<string> hold = Tokenizer::Parse(tmp, ", ");
//			add.setID(hold[0]);  //0ID  1Name  2Quantity  3Company  4Origin  5Price
//			add.setName(hold[1]);
//			add.setQuantity(stoi(hold[2]));
//			add.setCompany(hold[3]);
//			add.setOrigin(hold[4]);
//			add.setPrice(stoi(hold[5]));
//			VBItems.push_back(add);
//		
//	}
//
//
//cout << VBItems.size();
//	cout << " Enter findID: ";  
//	getline(cin, findID);
//	
//	for (int i = 0; i < VBItems.size(); i++)
//	{
//		cout << "Searching.." << endl;
//		if (VBItems[i].ID() == findID)
//		{
//			cout << " Enter new name: ";
//			getline(cin, n_name);
//			cout << "Enter new quantity: ";
//			cin >> n_quantity;
//			cin.ignore();
//			cout << "Enter new company:";
//			getline(cin, n_company);
//			cout << "Enter new origin: ";
//			getline(cin, n_origin);
//			cout << "Enter new price: ";
//			cin >> n_price;
//			VBItems[i].Name() = n_name;
//			VBItems[i].Quantity() = n_quantity;
//			VBItems[i].Company() = n_company;
//			VBItems[i].Origin() = n_origin;
//			VBItems[i].Price() = n_price;
//		}
//		else {
//			cout << "Error" << endl;
//			VBItems[i].ID();
//			VBItems[i].Name();
//			VBItems[i].Quantity();
//			VBItems[i].Company();
//			VBItems[i].Origin();
//			VBItems[i].Price();
//		}
//	}
//
//
//
//}
addProducts::addProducts()
{
}


addProducts::~addProducts()
{
}
