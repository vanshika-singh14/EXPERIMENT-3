#include <iostream>

using namespace std;

int main() 
{
      
       int x,y;
    cout <<"Enter number 1"<<endl;
    cin >> x;
    cout <<"Enter number 2"<<endl;
    cin >> y;
      

   
    cout << "x + y = " << x + y << endl; 
    cout << "x - y = " << x - y << endl; 
    cout << "x * y = " << x * y << endl; 
    cout << "x / y = " << x / y << endl; 
    cout << "x % y = " << x % y << endl; 
 
    
    x += 2; 
    cout << "x += 2: " << x << endl;

    y -= 1; // 
    cout << "y -= 1: " << y << endl;

    x *= 3; 
    cout << "x *= 3: " << x << endl;

 
    cout << "x > y: " << (x > y) << endl; 
    cout << "x < y: " << (x < y) << endl; 
    cout << "x == y: " << (x == y) << endl; 
    cout << "x != y: " << (x != y) << endl; 

    return 0;
}

OUTPUT
Enter number 1
3
Enter number 2
2
x + y = 5
x - y = 1
x * y = 6
x / y = 1
x % y = 1
x += 2: 5
y -= 1: 1
x *= 3: 15
x > y: 1
x < y: 0
x == y: 0
x != y: 1
