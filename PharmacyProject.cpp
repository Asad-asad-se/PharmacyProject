#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
	int order;
	int n;
	string itemname[10] = {"Paracetamol", "Aspirin", "Buscopan", "Insulin", "Brufen", "Vitamin C Capsules", "Bandages", "Tincture of Iodine", "Augmentin", "Ponstan"};
	int prices[10] = { 1000, 1250, 950, 500, 750, 2000, 1350, 1450, 560, 1450 };
	int stock[10] = { 350, 150, 120, 65, 87, 86, 90, 42, 70, 82 };
	cout <<left << setw(25) << "\tItems";
	cout <<left<<setw(13)<< " Unit Price";
	cout << left << setw(30) << "      Available Stock" << endl;
	cout << endl;
	for (int i = 0; i < 10; i++){
		cout << left<<setw(2)<<i + 1 << ". ";
		cout << left << setw(25) << itemname[i];
		cout << left << setw(20) <<prices[i];
		cout << left << setw(13) << stock[i]<<endl;
	}
	cout << endl << endl;
	cout << "Enter number of items to be purchased = ";
	cin >> n;
	string purchased[n];
	int pp[n];
	int quantity[n];
	for (int i = 0; i <n; i++){
		cout << "Enter Your Order "<<i+1<<" = ";
		cin >> order;
		 purchased[i] = itemname[order -1] ;
		while (true){
			if (order >0 && order < 11){
				int q;
				cout << "Enter Quanitity of " << itemname[order - 1] << " = ";
				cin >> q;
				while (true){
					if (q <= stock[order - 1]){
						cout << "Your order is placed!" << endl;
						pp[i] = prices[order -1]*q;
						quantity[i] = q;
						break;
					}
					else{
						cout << "Not enough Quantity!\nEnter again = ";
						cin >> q;
					}
				}
				break;
			}
			else{
				cout << "Item not found!\nEnter agian = ";
				cin >> order;
			}
		}
	}
	cout << endl << endl;
	cout <<left << setw(17) << "\tName";
	cout <<left<<setw(13)<< " Number of Items";
	cout << left << setw(35) << "      Price" << endl;
	cout << endl;
	for (int i = 0; i < n; i++){
		cout << left<<setw(2)<<i + 1 << ". ";
		cout << left << setw(25) << purchased[i];
		cout << left << setw(13) <<quantity[i];
		cout << left << setw(20) <<pp[i]<<endl;
	}
	int totalprice = 0;
	for(int i = 0 ; i<n ; i++){
	    totalprice = totalprice + pp[i];
	}
	cout<<endl;
	cout<<endl;
	cout<<"Total = ";
	cout<<totalprice<<endl;
	if(totalprice>=5000 && totalprice < 10000){
	    totalprice = totalprice * (0.95);
	    cout<<"Discount = "<<5<<"%"<<endl;
	    cout<<"Price after discount = "<<totalprice<<endl;
	}
	else if(totalprice>=10000){
	    totalprice = totalprice * (0.90);
	    cout<<"Discount = "<<10<<"%"<<endl;
	    cout<<"Price after discount = "<<totalprice<<endl;
	}
	cout<<"TAX = 8%"<<endl;
	int tax = totalprice * 0.08 ;
	totalprice = totalprice + tax;
	cout<<"Final Bill = "<<totalprice<<" Rs.";
	
	
	system("pause");
	return 0;
}