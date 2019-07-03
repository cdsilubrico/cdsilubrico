//SILUBRICO, Clowie D.

/*4x5 array and determine the MAXIMUM*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//variables
	const int row  = 4;
	const int col = 5;
	int numel[row][col];
	
	int ir;
	int ic;
	int MAX;
	
	//input nestedloop
	cout<<"Enter "<<row*col<<" elements\n";
	
	for (ir=0;ir<row;ir++)
	{
		for(ic=0;ic<col;ic++)
		{
			cout<<"Position["<<ir<<"]["<<ic<<"]:";
			cin>>numel[ir][ic];
			
		}
	}
	
	//MAX
	MAX=numel[0][0];
		for (ir=0;ir<row;ir++)
	{
		for(ic=0;ic<col;ic++)
		{
			if (numel[ir][ic]>MAX)
			MAX = numel[ir][ic];
			
		}
	}
	//Output
	cout<<endl;
	cout<<"Displaying a "<<row<<"x"<<col<<"array\n";
		for (ir=0;ir<row;ir++)
	{
		for(ic=0;ic<col;ic++)
		{
		cout<<setw(5)<<numel[ir][ic];	
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"MAXIUM is "<<MAX<<endl;
	cout<<endl;
	system("pause");
	
	return 0;
	
}

