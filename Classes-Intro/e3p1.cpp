#include<iostream>
using namespace std;
class Book
{
   string title;
   string author;
   long int ISBN;
   public:
   void getData()
   {
      cout<<"Enter the title of the book:";
      getline(cin,title);
      cout<<"Enter the author of the book:";
      getline(cin,author);
      cout<<"Enter the ISBN of the book:";
      cin>>ISBN;
   }
   void dispData()
   {
      cout<<"===================\n";
      cout<<"BOOK DETAILS:\n";
      cout<<"===================\n";
      cout<<"Book Title: "<<title<<"\n\n";
      cout<<"Author:\t"<<author<<"\n\n";
      cout<<"ISBN:\t"<<ISBN<<"\n\n";
   }
};
int main()
{
   Book b1;
   b1.getData();
   b1.dispData();
   return 0;
}
