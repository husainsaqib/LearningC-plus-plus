#include"Employ.cpp"
int main()
{
	Employee arr[3];
	int temp[3];
	for(int i=0;i<3;i++)
	{
		arr[i].getDetails();
	
		
	}
	int highest=0,max;
	for(int i=0;i<3;i++)
	{
		if(arr[i].getsalary()>arr[highest].getsalary())
		{
		
		   max=arr[i].getsalary();
		   highest++;
	}
	arr[i].getDetails();
	}

	std::cout<<"maximum salary:"<<max<<endl;
   
   	
   
}