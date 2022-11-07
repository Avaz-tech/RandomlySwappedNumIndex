#include<iostream>
#include<vector>

using  namespace std;

int cupLocation(int n, vector<vector<int> > d, int k)
{
    int answer = 0;
    int a=0, b=0, temp=0;
    vector<int> cup(n);
    // Storing cups in array of cup
    for(int i=0; i<n; i++)
    {
      cup[i] = i+1;
    }

    for(int i=0; i<d.capacity(); i++)
    {
       cout << "[";
       for(int j=0; j<2; j++)
       {
          
          d[i].push_back(rand()%n+1);
          if(d[i][j]==d[i][j-1])
          {
            d[i][j] = rand()%n+1;
          }
          cout << d[i][j];
          if(j==0)
          {
            cout << ",";
          }
          
          if(j==0)
          {
            a=d[i][j]-1;
          }
          else
          {
            b=d[i][j]-1;
          }
       } 
       cout << "]"<< endl;
       
         temp = cup[a];
         cup[a] = cup[b];
         cup[b] = temp;
         
       cout << "Now cups order changed to: [";
       for(int l=0; l < n; l++)
       {
        cout << cup[l] << " " ;
       }
       cout << "]" << endl;
       

    }
    cout << endl;
    cout << d.capacity();
    cout << endl;
    cout << endl;

    // Swapping the cups' place according to randomly generated numbers

    if(k<=n)
    {
        for(int i=0; i<n; i++)
        {
            if(k==cup[i])
            {
               answer = i+1;
            }
        }
    }
     
    return answer;

}

int main()
{

  int n,k;
  int numOfSwap;

  cout << "Enter the number of cups: ";
  cin >> n;
  cout << "Enter the number that you want to find: ";
  cin >> k;
  cout << "Enter the size of vector(number of swaps: ";
  cin  >> numOfSwap;

  vector<vector<int> >d(numOfSwap);
  int ans = cupLocation(n,d,k);
  cout << "The location of " << k << " is in the " << ans << "th place now!";

  return 0;
}

