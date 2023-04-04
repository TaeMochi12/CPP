#include<iostream>

using namespace std;

int main()

{

            int n,c,t1=0,t2=1,next;

            int a[20],i,j=0,count=0;

            cout<<"Enter the no. of terms of Fibonacci series=";

            cin>>n;

            cout<<"Terms of Fibonacci series are"<<endl;

            for(c=0;c<n;c++)

            {

                        if(c<=1)

                        next=c;

                        else

                        {

                        next=t1+t2;

                        t1=t2;

                        t2=next;

                        }

                        cout<<next<<endl;

                        if(next-t1>1)

                        {

                        for(i=t1+1; i<next; i++)

                        {

                                    a[j]=i;

                                    count++;

                                    j++;

                        }

                        }

            }

            cout<<"Missing numbers of the Fibonacci series are:"<<endl;

            for(j=0; j<count; j++)

            cout<<a[j]<<endl;

            return 0;

}
