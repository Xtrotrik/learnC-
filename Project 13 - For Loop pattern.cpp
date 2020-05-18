#include<iostream>

using namespace std;

    main()
    {
       int i,j,k;

       cout<<"Enter your Line ";
       cin>>k;
       cout<< " WE WILL PRINT \t"<<k<<  "LINES \n";

       for(i=0;i<=k;i++)
       {
           for(j=0;j<=i;j++)
           {
               cout<<"*";
           }
           cout<<"\n";
       }

    }
