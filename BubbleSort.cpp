#include<iostream>
using namespace std;
void BubbleSort(int a[], int n)
{   int counter =1;
    for(int i=0;i<n;i++)
    {    for(int j=0;j<n-counter;j++)
        {   
            if(a[j]>a[j+1])
            {
                int temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        counter++;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    BubbleSort(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
