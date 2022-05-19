#include<iostream>
#include<cstring>
#include"Supplier.h"
#define SIZE 5


class items{
	private:
	    int itemNo;
	    char itemName[20];
	    int quantity;
	    double unitPrice;
	    char status[40];
	    Supplier*Sup[SIZE];
	    
	public:
		items();
		items(int iNO, char iName[20], int iQuantity, double iPrice, char iStat[40]);
		void setaddItems(int iNo, int iQuantity);
		void setdeleteItems(int iNO, int iQuantity);	
    void setdisplayItemsQty(int iNO, int iQty);
		void updateItems();
		int getaddItems();
		int getdeleteItems();
    int getdisplayItemsQty();
		~items();
	    

	
};