#include<bits/stdc++.h>

using namespace std;


//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box
    {
  private:
    int h,l,b;
  public:
    Box(void){
        h = 0;
        l = 0;
        b = 0;
    }
    Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}
    Box(Box &copyBox)
        {
        h = copyBox.getHeight();
        l = copyBox.getLength();
        b = copyBox.getBreadth();
    }
    int getLength(void){return l;}
    int getHeight(void){return h;}
    int getBreadth(void){return b;}
    long long CalculateVolume(void) {return (long long)l*h*b;}
    bool operator<(Box& CBOX)
        {
        if(l < CBOX.l) return 1 ;
        else if((l == CBOX.l) && (b < CBOX.b)) return 1;
        else if((l == CBOX.l) && (b == CBOX.b) && (h < CBOX.h)) return 1;
        return 0;
    }

    
    
};
    ostream& operator<<(ostream& out, Box& B) 
    {
        out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
        return out;
     }

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
