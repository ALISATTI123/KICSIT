/* Problem 2: Book Information Create a structure named Book ,
that stores information related to books in a library. 
The structure should include the book title, author name, and price.
 In the main function, create two Book variables and take input for both books from the user.
  After storing the data, compare the prices of the two books and display 
  the details of the book that has the higher price. 
  This problem focuses on using multiple structure variables and comparisons. 
  Hints: - Use float data type for price.
   - Compare prices using an if-else statement. 
   - Display complete details of the selected book. - 
   Ensure both book records are stored before comparison. - 
   Use clear prompts for user input.*/
   
   #include<iostream>
   using namespace std;
   struct books
   {
    string title;
    string author;
    float price;
   };
   int main()
   {
    books b1,b2;
    cout<<"details of book 1:"<<" "<<endl;

    cout<<"enter title of the book 1:";
    getline(cin,b1.title);
    cout<<"enter auther name if the book 1:";
    getline(cin,b1.author);
    cout<<"enter price of the book1:";
    cin>>b1.price;
    
    cout<<"details of book 2:"<<" "<<endl;

    cout<<"enter title of the book 2:";
    getline(cin,b2.title);
    cout<<"enter auther name if the book 2:";
    getline(cin,b2.author);
    cout<<"enter price of the book2:";
    cin>>b2.price;
    //  comparing prices of both books
    books expensive ;
    if(b1.price>b2.price)
    {
        expensive=b1;
    }
    else
    {
        expensive=b2;
    }
    cout<<"the expensive book is:"<<endl;
    cout<<"title: "<<expensive.title<<endl;
    cout<<"author: "<<expensive.author<<endl;
    cout<<"price: "<<expensive.price<<endl;
    
 return 0;
   }
   