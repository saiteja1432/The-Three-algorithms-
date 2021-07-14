#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void cls() {
    clrscr();
}


void linear() {
    int a[100],i,n,tar;
    cout<<"\t\t\t\t\t||Hello user this is the linear search||"<<endl;
    cout<<"Enter how many numbers you want to enter:";
    cin>>n;
    cout<<"Enter the array:\n";
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"Enter the target to find the position:";
    cin>>tar;
    for(i=0; i<n; i++) {
        if(a[i]==tar) {
            cout<<endl<<"The "<<tar<<" is at position:"<<i<<endl;
        }
    }
}


void binary() {
    int a[1000],i,n,low,mid,high,tar;
    cout<<"\t\t\t\t\t||Hello user this is the binary search||"<<endl;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&n);
    printf("Enter the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    low=0;
    high=n-1;
    mid=(low+high)/2;
    printf("Enter the num to check the place value:");
    scanf("%d",&tar);
    while(low<=high) {
        if(a[mid]<tar) {
            low=mid+1;
        }
        else if(a[mid]==tar) {
            printf("The %d is at position:%d",tar,mid);
            break;
        }
        else
            high=mid-1;
        mid=(low+high)/2;
    }
}


void shorting() {
    int a[1000],i,j,n,min;
    cout<<"\t\t\t\t\t||Hello user this is the binary search||"<<endl;
    cout<<"Enter how many numbers you want to enter:";
    cin>>n;
    cout<<"Enter the array:"<<endl;
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++) {
        min=i;
        for(j=i+1; j<n; j++) {
            if(a[min]>a[j]) {
                int temp=a[min];
                a[min]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<endl<<"The shorted array is:"<<endl;
    for(i=0; i<n; i++) {
        cout<<a[i]<<endl;
    }
}

void decision()
{
    int choice;
    cout<<"\t\t\t\t\t||Hello user this is the algorithms book||\n"<<endl;
    cout<<"For (linearSearch):(1)"<<endl;
    cout<<"For (binarysearch):(2)"<<endl;
    cout<<"For (shorting alg):(3)"<<endl<<endl;

    cout<<"Enter:";
    cin>>choice;
    if(choice==1) {
        cls();
        linear();
    }
    else if(choice==2) {
        cls();
        binary();
    }
    else if(choice==3) {
        cls();
        shorting();
    }

}


int main()
{
    int i,r;
    for(i=0; i<30; i++) {
        cls();
        decision();
        cout<<endl<<endl;
        cout<<"Enter (0):";

        cin>>r;
        if(r=0) {
            cls();
            decision();
        }
    }
}