#include <iostream>
#include <string>

int main()
{   
    cout<<"Hello user!\n\nPlease input your full name: ";
    string userName;
    getline(cin, userName);

    cout<<"\n\nUser "<<userName<<", kindly enter any integer of your choice: ";

    

    int x; 
    int z =1;
    cin >> x;
    while(cin.fail())
    {
        cout << "Invalid input.\nPlease enter a valid integer:";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> x;
        

    }

    for (int y = x; y > 0; y--){
          z = y*z;
        }
    cout << "\n\n1. Factorial of "<< x << " is " << z;

    cout << "\n\n2. The table of 10 for " << x <<" is:\n\n"<<endl;
    int i = 1;
    while (i<=10)
    {
        cout << x<<"x"<<i<<"="<<x*i<<endl;
        i++;
    }

    cout << "\n3. Power from 1-10 for " << x<<" is: \n"<<endl;

    int p = 1;
    
    do{
        cout << x << " powered to " << p << " = " << pow(x,p) <<endl;
        p++;
    }while (p<=10);

    

    
    





    

    
    
    

    
    
    
    
    
   
   
    return 0; 
}
