﻿#include "addProducts.h"



void addProducts::informationStorage(vector<StorageItem>& VBItems)// nhap them 1 sp vao don hang // nhap vao trong console (complier thuc thi)
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
	cin.ignore();
	VBItems.push_back(C); // add 1 line	
	//dataStorage(VBItems);
	//cout <<ManageVector::ToString(VBItems[VBItems.size() - 1]);
}
void addProducts::dataStorage(vector<StorageItem>& VBItems) // ghi file (show ra text file)
{
	fstream myfile;
	myfile.open("Storage//ItemStorage.txt", ios::app);
	myfile << endl;
	myfile << ManageVector::ToString(VBItems[VBItems.size() - 1]);
	myfile.close();
}

void addProducts::updateDate(date d)
{
	fstream myfile;
	myfile.open("Storage//Date.txt", ios::out);
	//myfile << endl;
	myfile << d.DToString();


}
void addProducts::removeStorage(vector<StorageItem>& VBItems, ManageVector m)
{
	string findID;
	bool found = false;
	cout << " Enter ID to delete:";
	getline(cin, findID);
	for (int i = 0; i < VBItems.size(); i++)
	{
		if (VBItems[i].ID() == findID){
			VBItems.erase(VBItems.begin() + i);
			found = true;
		}
	}
	if (found == false) cout << "ID is not available." << endl;
	else if (found == true) cout << "Deleted successfully!" << endl;
	ManageVector::ExportItemsToTXT(VBItems);
}
//void addProducts::removeStorage(vector<StorageItem>& VBItems) // size = 1, size = TXT = 19
//{
//	string _ID; // n + 1 = out of range
//	int i = 0;
//	//ManageVector::ImportItemsToVectorA(); // size =TXT
//	cout << VBItems.size() << endl;
//	cout << "Enter ID you wanna delete: "; getline(cin, _ID);
//	vector<StorageItem>::iterator p = VBItems.begin();
//	while (p != VBItems.end()) { // lap chay begin - > end
//		if (VBItems[i].ID() == _ID) {
//			VBItems.erase(VBItems.begin() + i);
//		}
//		i++;
//		p++;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
//	}
//}
addProducts::addProducts()
{
}


addProducts::~addProducts()
{
}
