#include<iostream>
using namespace std;
int binary_search(int *arr,int l,int h,int search)
{
	while(l<=h)
	{
		int mid=l+(h-l)/2;
		if(arr[mid]==search)
		{
			return mid;
		}
		else if(search<arr[mid])
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
}
int main()
{
	int n,search,ans;
	cout<<"Enter the number of elements : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements in an array in assending order : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search in an array : ";
	cin>>search;
	ans=binary_search(arr,0,n-1,search);
	(ans==-1)?cout<<search<<" is not present in an array"<<endl:cout<<search<<" is present at an index "<<ans<<" in an array"<<endl;
	return 0;
}