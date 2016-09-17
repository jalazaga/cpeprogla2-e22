#include <iostream>
using namespace std;

struct Name{
	char firstname[30];
	char lastname[30];
};

struct Date{
	int day;
	int month;
	int year;
};

struct Item{
	char IDcode;
	char Itemname;
	double price;
};

struct Order{
	Date date;
	Item item;
	int quantity;
};

struct Customer{
	Name name;
	int contactNo;
	Order order;
};

int main(){
	Customer cust[3];
	Date dat[3];
	Item item;
	Order ord;
	for(int i=1; i<4; i++){
		cout << "CUSTOMER INFORMATION "<<i<<endl;
		cout << "First Name: ";
    	cin.getline(cust[i].name.firstname, 29);
    	cout << "Last Name: ";
    	cin.getline(cust[i].name.lastname, 29);
    	cout << "Contact No: ";
    	cin >> cust[i].contactNo;
    	cout << "Order date: "<<endl;
    	cout << "Day: ";
    	cin >> dat[i].day;
    	cout << "Month: ";
    	cin >> dat[i].month;
    	cout << "Year: ";
    	cin >> dat[i].year;
    	cout << "Enter 3 items"<<endl;
    		for(int i=1; i<4; i++)			
				cout << "ID: ";
				cin >> item.IDcode;
				cout << "Name: ";
				cin >> item.Itemname;
				cout << "Price: ";
				cin >> item.price;
				cout << "Quantity: ";
				cin >> ord.quantity;
				    	
			
	}
}
