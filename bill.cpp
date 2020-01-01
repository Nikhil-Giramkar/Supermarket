#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include<stdlib.h>
#define MAX 100
using namespace std;


void line()
{
   for(int i=1; i<54; i++)
       cout<<"--";
   cout<<"\n";
}

void star()
{
   for(int i=1; i<54; i++)
       cout<<"**";
   cout<<"\n";
}

void hash1()
{
   for(int i=1; i<60; i++)
       cout<<"##";
   cout<<"\n";
}

class AdminLog
{
	string admin_id, admin_pass, login_id, login_pass;
	
	public:
	  void Admin_create()
   {
       admin_id = "admin";
       admin_pass = "admin";

   }


   int Admin_login()
   {
       line();
       cout<<endl<<setw(60)<<"ADMIN LOGIN\n\n";
       line();

label:
       cout<<"\nLOGIN ID = ";
       cin>>login_id;
       cout<<"PASSWORD = ";
       cin>>login_pass;
       if(login_id.compare(admin_id)==0)
       {
           if(login_pass.compare(admin_pass)==0)
           {
               return 1;
           }

           else
           {
               cout<<"\nPASSWORD is *invalid*\n";
               goto label;
           }
       }
       else
       {
           cout<<"\nLOGIN ID is *invalid*\n";
           goto label;
       }
   }
	

};



class data
{
private:
   

public:

   string item,code;
   int price,stock;
   int bill,bookcost,n;


   data()
   {
       item=code="";
       price=stock=0;
   }

 



   void input()
   {
       cout<<"\nEnter name of item: ";
       ws(cin);
       getline(cin,item);

       cout<<"Enter unique code of item: ";
       ws(cin);
       getline(cin,code);

       cout<<"Enter price of item: ";
       cin>>price;

       cout<<"Enter stock position: ";
       cin>>stock;
   }



   int del(string code,int stock)
   {

       if((code.compare(this->code)==0))
       {
           if(stock)
               this->stock--;
           return 1;
       }
       else
           return 0;
   }


   int calBill(int bill)
   {

       cout<<"Enter quantity in kg"<<endl;
       cin>>n;
       if(n>(this->stock))
           cout<<"Sorry Out of stock!!"<<endl;
       else
       {
           bookcost=(this->price)*n;
           cout<<setw(15)<<"Price of "<<n<<" kg is Rs."<<bookcost<<endl;
           bill=bill+bookcost;
           cout<<setw(15)<<"**Current bill is Rs."<<bill<<"**"<<endl;
           this->stock=this->stock-n;
       }
       return bill;
   }

   void display(int x)
   {
       if(x==1 || x==2)
       {
       line();
       cout<<setw(15)<<item<<setw(10)<<"|"<<setw(15)<<code<<setw(15)<<"|"<<setw(15)<<price<<setw(10)<<"|"<<setw(13)<<stock<<endl;
       }

       else if(x==4)
       {
           line();
       cout<<setw(20)<<item<<setw(18)<<"|"<<setw(20)<<n<<setw(18)<<"|"<<setw(16)<<bookcost<<endl;
       }

   }



};

int main()
{
   data *s[MAX];
   data *cart[MAX];
   int ch,ans,i=0,k=0,flag=0,bill=0;

   hash1();
   cout<<setw(70)<<"WELCOME TO THE SUPERMARKET\n";
   hash1();

  AdminLog obj;
 
  

   {
       s[i]=new data;
       s[i]->item="Onion";
       s[i]->price=30;
       s[i]->stock=40;
       s[i]->code="oni";
       i++;

       s[i]=new data;
       s[i]->item="Tomato";
       s[i]->price=20;
       s[i]->stock=40;
       s[i]->code="tom";
       i++;

       s[i]=new data;
       s[i]->item="Potato";
       s[i]->price=25;
       s[i]->stock=40;
       s[i]->code="pot";
       i++;

       s[i]=new data;
       s[i]->item="Carrot";
       s[i]->price=20;
       s[i]->stock=100;
       s[i]->code="car";
       i++;

       s[i]=new data;
       s[i]->item="Capsicum";
       s[i]->price=24;
       s[i]->stock=55;

       s[i]->code="cap";
       i++;

       s[i]=new data;
       s[i]->item="Cauliflower";
       s[i]->price=45;
       s[i]->stock=40;
       s[i]->code="cau";
       i++;

       s[i]=new data;
       s[i]->item="Mushroom";
       s[i]->price=230;
       s[i]->stock=40;
       s[i]->code="mus";
       i++;

       s[i]=new data;
       s[i]->item="Bottle guard";
       s[i]->price=28;
       s[i]->stock=40;
       s[i]->code="bot";
       i++;

       s[i]=new data;
       s[i]->item="Cabbage";
       s[i]->price=26;
       s[i]->stock=40;
       s[i]->code="cab";
       i++;

       s[i]=new data;
       s[i]->item="Cucumber";
       s[i]->price=15;
       s[i]->stock=40;
       s[i]->code="cuc";
       i++;

       s[i]=new data;
       s[i]->item="Bitter guard";
       s[i]->price=50;
       s[i]->stock=40;
       s[i]->code="bit";
       i++;

       s[i]=new data;
       s[i]->item="Beans";
       s[i]->price=100;
       s[i]->stock=40;
       s[i]->code="bea";
       i++;


       s[i]=new data;
       s[i]->item="Brinjal";
       s[i]->price=90;
       s[i]->stock=40;
       s[i]->code="bri";
       i++;

       s[i]=new data;
       s[i]->item="Pumpkin";
       s[i]->price=66;
       s[i]->stock=40;
       s[i]->code="pum";
       i++;

       s[i]=new data;
       s[i]->item="Mint";
       s[i]->price=80;
       s[i]->stock=40;
       s[i]->code="min";
       i++;

       s[i]=new data;
       s[i]->item="Spinach";
       s[i]->price=100;
       s[i]->stock=40;
       s[i]->code="spi";
       i++;

       s[i]=new data;
       s[i]->item="Greenpeas";
       s[i]->price=300;
       s[i]->stock=40;
       s[i]->code="gre";
       i++;

       s[i]=new data;
       s[i]->item="orange";
       s[i]->price=80;
       s[i]->stock=40;
       s[i]->code="ora";
       i++;

       s[i]=new data;
       s[i]->item="Banana";
       s[i]->price=40;
       s[i]->stock=40;
       s[i]->code="ban";
       i++;

       s[i]=new data;
       s[i]->item="Apple";
       s[i]->price=150;

       s[i]->stock=40;
       s[i]->code="app";
       i++;

       s[i]=new data;
       s[i]->item="Kiwi";
       s[i]->price=30;
       s[i]->stock=40;
       s[i]->code="kiw";
       i++;

       s[i]=new data;
       s[i]->item="Guava";
       s[i]->price=110;
       s[i]->stock=40;
       s[i]->code="gua";
       i++;

       s[i]=new data;
       s[i]->item="Papaya";
       s[i]->price=80;
       s[i]->stock=40;
       s[i]->code="pap";
       i++;

       s[i]=new data;
       s[i]->item="Pomegranate";
       s[i]->price=120;
       s[i]->stock=40;
       s[i]->code="pom";
       i++;

       s[i]=new data;
       s[i]->item="Grapes";
       s[i]->price=90;
       s[i]->stock=40;
       s[i]->code="gra";
       i++;

       s[i]=new data;
       s[i]->item="Pear";
       s[i]->price=160;
       s[i]->stock=40;
       s[i]->code="pear";
       i++;

       s[i]=new data;
       s[i]->item="Pineapple";
       s[i]->price=80;
       s[i]->stock=40;
       s[i]->code="pin";
       i++;

   }

   string item,code;
login:
   cout<<"\nMAKE A CHOICE:";
   cout<<"\n\t1.Login as Shopkeeper"<<endl;
   cout<<"\t2.Login as Customer\n\nCHOICE:";
   cin>>ch;
   system("clear");
   if(ch==1)
   {
       //if(s[0]->Admin_login())
       {
     	   obj.Admin_create();
 		 obj.Admin_login();
           cout<<"\n\t ***HELLO ADMIN*** \n\n";
           do
           {
               cout<<"\nMAKE A CHOICE:";
               cout<<"\n\t1- Add item"<<endl;
               cout<<"\t2- Display items in shop"<<endl;
               cout<<"\t3- Delete an item"<<endl;
               cout<<"\t4- Go to login"<<endl;
               cout<<"\t5- Exit"<<endl;
               cout<<"CHOICE:";
               cin>>ans;
               system("clear");
               switch(ans)
               {
               case 1:
                   s[i]=new data;
                   s[i]->input();
                   i++;
                   break;
               case 2:
                   star();
                   cout<<endl<<setw(60)<<"SHOP ITEMS\n"<<endl;
                   star();
                   cout<<setw(15)<<"ITEM"<<setw(10)<<"|"<<setw(20)<<"UNIQUE CODE"<<setw(10)<<"|"<<setw(15)<<"PRICE"<<setw(10)<<"|"<<setw(15)<<"STOCK"<<endl;
                   for(int j=0; j<i; j++)
                   {
                       s[j]->display(ch);
                   }
                   break;
               case 3:
                   cout<<"\nEnter unique code of the item to be deleted: ";
                   ws(cin);
                   getline(cin,code);
                   for(int j=0; j<i; j++)
                   {
                       if(s[j]->del(code,1))
                       {

                           for(int p=j; p<i; p++)
                           {
                               s[p]=s[p+1];
                           }
                           i--;
                           flag=1;
                           break;
                       }
                   }
                   if(flag)
                       cout<<"\n\t*Item deleted from cart*"<<endl;
                   else
                       cout<<"\n\t-Item not found-"<<endl;
                   flag=0;
                   break;
               case 4:
                   goto login;
                   break;
               }


           }
           while(ans!=5);
       }
   }
   else if(ch==2)
   {
       cout<<"\n\t ***HELLO CUSTOMER*** \n\n";

       do
       {
           cout<<"\nMAKE A CHOICE:";
        cout<<"\n\t0- Go to login page"<<endl;
           cout<<"\t1- Display items"<<endl;
           cout<<"\t2- Search for a item and add to cart"<<endl;
           cout<<"\t3- Delete a item from cart"<<endl;
           cout<<"\t4- Display cart"<<endl;
           cout<<"\t5- Checkout"<<endl;
           cout<<"\t7- Exit"<<endl;
           cout<<"CHOICE:";
           cin>>ans;
           switch(ans)
           {
            case 0:
               goto login;
               break;
           case 1:
               star();
                   cout<<endl<<setw(60)<<"SHOP ITEMS\n"<<endl;
                   star();
                   cout<<setw(15)<<"ITEM"<<setw(10)<<"|"<<setw(20)<<"UNIQUE CODE"<<setw(10)<<"|"<<setw(15)<<"PRICE"<<setw(10)<<"|"<<setw(15)<<"STOCK"<<endl;
                   for(int j=0; j<i; j++)
                   {
                       s[j]->display(ch);
                   }
                   break;

           case 2:
               cart[k]=new data;
               cout<<"Enter unique code of item to be purchased: ";
               ws(cin);
               getline(cin,code);
               for(int j=0; j<i; j++)
               {
                   if(s[j]->del(code,0))
                   {
                       cart[k]=s[j];
                       flag=1;
                       break;
                   }
               }
               if(flag)
               {
                   bill=cart[k]->calBill(bill);
                   cout<<"\n\t*Item added to cart*"<<endl;
               }
               else
                   cout<<"\n\t-Item not found-"<<endl;
               flag=0;
               k++;
               break;

           case 3:
               cout<<"Enter unique code of item to be deleted from cart"<<endl;
               ws(cin);
               getline(cin,code);
               for(int j=0; j<k; j++)
               {
                   if(cart[j]->del(code,1))
                   {
                       flag=1;
                       for(int p=j; p<k; p++)
                       {
                           cart[p]=cart[p+1];
                       }
                       k--;

                       break;
                   }
               }
               if(flag)
                   cout<<"\n\t*Item deleted from cart*"<<endl;
               else
                   cout<<"\n\t-Item not found-"<<endl;
               flag=0;
               break;

           case 4:
               cout<<"\n$$$$ Displaying items in cart $$$$\n"<<endl;
               cout<<setw(20)<<"ITEM"<<setw(18)<<"|"<<setw(20)<<"QUANTITY"<<setw(18)<<"|"<<setw(16)<<"PRICE"<<endl;
               for(int j=0; j<k; j++)
               {
                   cart[j]->display(ans);
               }
               break;
           case 5:
            ofstream of("bill.txt");
            of<<setw(40)<<"GROCERY MARKET"<<endl;
            of<<setw(20)<<"Your bill:\n"<<endl;
            of<<setw(20)<<"ITEM"<<setw(18)<<"|"<<setw(20)<<"QUANTITY"<<setw(18)<<"|"<<setw(16)<<"PRICE"<<endl;
            for(int j=0; j<k; j++)
               {
                of<<setw(20)<<cart[j]->item<<setw(18)<<"|"<<setw(20)<<cart[j]->n<<setw(18)<<"|"<<setw(16)<<cart[j]->bookcost<<endl;
               }
               of<<"\n         **** Total Bill: Rs."<<bill<<" ****"<<endl;
               of<<setw(40)<<"Visit again"<<endl;
               cout<<"\nBill is generated, please take print.\n";
               exit(0);
            break;

           }
       }
       while(ans!=0);
   }
   delete s;
   return 0;
}






