#include <iostream>
using namespace std;
int main()
{

  cout << " Lecture 3 - (Conditional & Loops) " << endl;
  /*

     //Taking Input From The User Using Cin

      int n1,n2;
      // cin>>n1;
      // cin>>n2;  Or

      cin >> n1 >> n2 ; //OR

      //  n1 = cin.get();

      cout<< " Your Entered Value is : "<<n1<<endl;
      // cout<< " Your Entered Value is : "<<n2<<endl;
      if(n>0){
          cout<<"Positive Number"<<endl;
           }
      else{
          cout<<"Negative Number"<<endl;
      }


      if(n1>n2){
          cout<<"Number 1st is Greater Number"<<endl;
      }else{
          cout<<"Number 2nd is Less Number"<<endl;

      }


      if(n1>0){
          cout<<"Positive Number"<<endl;
           }
      else if(n1==0){
          cout<<"Zero Number"<<endl;
      }
      else if(n1<0){
          cout<<"Negative Number"<<endl;
      }
      else{
          cout<<"Invalid Number 😢"<<endl;
      }


     char ch;
     cout<<"Your Character  : " <<endl;
     cin >> ch;
     if(ch >= 'A' && ch <= 'Z'){
          cout<<"Upper Case Character"<<endl;
     }
     else if(ch >= 'a' && ch <= z'){
      cout<<"Lower Case Character"<<endl;
     }
     else{
      cout<<"Invalid Character "<<endl;
     }



    cout<<"_____Looping In C++_____"<<endl;
    int a = 1;
    int i;
    cout<<"Enter Your Number"<<endl;
    cin>>i;
    while(i>=a){
      cout<<a<<endl;
      a=a+1;
    }

   //Sum of All Numbers...

    int sum = 0;
    int n = 1;
    int number;
    cout<<"Enter Your Number"<<endl;
    cin>>number;
    while(number>=n){
      sum = sum+n;
      n = n+1;
    }
    cout<<sum<<endl;

 // Home Work Done✔
  //Sum of All Even No... 1 To N

    int sum = 0;
    int n = 2;
    int number;
    cout<<"Enter Your Number"<<endl;
    cin>>number;
    while(number>=n){
      sum = sum+n;
      n = n+2;
    }
    cout<<sum<<endl;


  //Sum of All Odd No... 1 To N

    int sum = 0;
    int n = 1;
    int number;
    cout<<"Enter Your Number"<<endl;
    cin>>number;
    while(number>=n){
      sum = sum+n;
      n = n+2;
    }
    cout<<sum<<endl;


  // fahrenheit to celsius
  // (32°F − 32) × 5/9 = 0°C
  int f;
  float c;
  cout << "Enter Fahrenheit Value : " << endl;
  cin >> f;
  c = ((f - 32) * 5 / 9);
  cout << "Your Celsius Value : " << c << endl;


  // Find Prime No 1 to N;

  int prime;
  int n = 2;
  cout << "Enter Your Prime Number" << endl;
  cin >> prime;
  if (prime >= n && prime % 2 != 0)
  {
    cout << "Your Number is Prime " << prime << endl;
  }
  else
  {
    cout << "Your Number is Not Prime " << prime << endl;
  }

  */
  // Find Prime No 1 to N;
  int prime;
  int n = 2;
  cout << "Enter Your Prime Number" << endl;
  cin >> prime;
  while (prime >= n)
  {
    if (prime % 2 == 0)
    {
      cout << "Not Prime Number "<< n << endl;
    }
    else
    {
      cout << " Prime Number " << n << endl;
    }
    n = n + 1;
  }

  return 0;
}