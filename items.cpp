#include<iostream>
#include<cstring>
#include"items.h"

using namespace std;
//constructor
items::items()
{
	itemNo=0;
	strcpy(itemName,"");
	quantity=0;
	unitPrice=0;
	strcpy(status,"");
}
//overload constructor
items::items(int iNO, char iName[20], int iQuantity, double iPrice, char iStat[40])
{
	
    itemNo = iNO;
    strcpy(itemName, iName);
    quantity=iQuantity;
    unitPrice = iPrice;
    strcpy(status,iStat);
}


void items::setdisplayItemsQty(int iNO, int iQty)
{
}


int items::getdisplayItemsQty()
{
}

void items::setaddItems(int iNo,int iName)
{
}

int items::getaddItems()
{
	
}

void items::setdeleteItems(int iNo,int iName)
{
}

int items::getdeleteItems()
{
	
}

void items::updateItems()
{
}

//destructor
items::~items()
{
}