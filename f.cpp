
 #include <iostream>

using namespace std;


int factoriali(int n){
    int fact=1;
    
    for(int i=1 ;  i<=n; i++)
    fact*=i;
    return fact;
}



int main()
{
    int n, fact;

    cout << "Sheiyvanet  ricxvi  " << endl;
    cin >> n;
    
   fact=factoriali(n);
    cout  << fact << endl;


}
 
